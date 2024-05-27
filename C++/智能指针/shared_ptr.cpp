#include<iostream>
#include<memory>
using namespace std;

class AA
{
public:
	string m_name;
	AA() { cout << m_name << "���ù��캯��AA()" << endl; }
	AA(const string& name) :m_name(name) {
		cout << "�����вι��캯��AA()" << "  m_name:"<<m_name << endl;
	}
	~AA()
	{
		cout << "������������~AA()" << endl;
	}
};
int main()
{
	//��ʼ��
	AA* p = new AA("����");
	shared_ptr<AA> a_ptr1(p);
	//��ʼ��
	shared_ptr<AA> a_ptr2 = a_ptr1;
	//��ʼ��3
	//shared_ptr<AA> s_ptr3 = make_shared<AA>("��ʩ");
	shared_ptr<AA> a_ptr3 = a_ptr1;

	cout <<"a_ptr1:" << a_ptr1->m_name << endl;
	cout << "a_ptr1.use_count()=" << a_ptr1.use_count() << endl;//3

	shared_ptr<AA> b_ptr1(new AA("����"));
	shared_ptr<AA> b_ptr2 = b_ptr1;
	cout << "b_ptr1.use_count()=" << b_ptr1.use_count() << endl;//2
	//֧�ָ�ֵ
	cout << "---��ֵ�󡪡�" << endl;
	b_ptr2 = a_ptr3;
	cout << "b_ptr1.use_count()=" << b_ptr1.use_count() << endl;
	cout << "a_ptr1.use_count()=" << a_ptr1.use_count() << endl;
	b_ptr1 = a_ptr3;
	cout << "b_ptr1.use_count()=" << b_ptr1.use_count() << endl;
	cout << "a_ptr1.use_count()=" << a_ptr1.use_count() << endl;
	
	return 0;
}