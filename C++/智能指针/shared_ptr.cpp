#include<iostream>
#include<memory>
using namespace std;

class AA
{
public:
	string m_name;
	AA() { cout << m_name << "调用构造函数AA()" << endl; }
	AA(const string& name) :m_name(name) {
		cout << "调用有参构造函数AA()" << "  m_name:"<<m_name << endl;
	}
	~AA()
	{
		cout << "调用析构函数~AA()" << endl;
	}
};
int main()
{
	//初始化
	AA* p = new AA("冰冰");
	shared_ptr<AA> a_ptr1(p);
	//初始化
	shared_ptr<AA> a_ptr2 = a_ptr1;
	//初始化3
	//shared_ptr<AA> s_ptr3 = make_shared<AA>("西施");
	shared_ptr<AA> a_ptr3 = a_ptr1;

	cout <<"a_ptr1:" << a_ptr1->m_name << endl;
	cout << "a_ptr1.use_count()=" << a_ptr1.use_count() << endl;//3

	shared_ptr<AA> b_ptr1(new AA("琳琳"));
	shared_ptr<AA> b_ptr2 = b_ptr1;
	cout << "b_ptr1.use_count()=" << b_ptr1.use_count() << endl;//2
	//支持赋值
	cout << "---赋值后——" << endl;
	b_ptr2 = a_ptr3;
	cout << "b_ptr1.use_count()=" << b_ptr1.use_count() << endl;
	cout << "a_ptr1.use_count()=" << a_ptr1.use_count() << endl;
	b_ptr1 = a_ptr3;
	cout << "b_ptr1.use_count()=" << b_ptr1.use_count() << endl;
	cout << "a_ptr1.use_count()=" << a_ptr1.use_count() << endl;
	
	return 0;
}