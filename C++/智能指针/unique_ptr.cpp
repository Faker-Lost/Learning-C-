//#include<iostream>
//#include<memory>
//using namespace std;
//
//class AA {
//public:
//	string m_name;
//	AA() { cout << m_name << "调用构造函数" << endl; }
//	AA(const string& name) :m_name(name) {
//		cout << "调用构造函数AA()" << m_name << endl;
//	}
//	~AA()
//	{
//		cout << "调用析构函数~AA()" << endl;
//	}
//};
//unique_ptr<AA> func()
//{
//	unique_ptr<AA> pp(new AA("冰冰2"));
//	return pp;
//}
//int main()
//{
//	//unique_ptr<AA> ptr(new AA("冰冰"));
//	unique_ptr<AA> ptr2;
//
//	// ptr2 = ptr;  错误
//
//	ptr2 = unique_ptr<AA>(new AA("冰冰"));
//	ptr2 = func();
//	ptr2 = nullptr;
//
//
//	//delete释放堆区内存
//	//delete aa;
//	return 0;
//}