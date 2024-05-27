//#include<iostream>
//using namespace std;
////类模板AA
//template<class T1, class T2>
//class AA
//{
//public:
//	T1 m_name;
//	T2 m_age;
//	AA(const T1 name, const T2 age)
//	{
//		cout << "---AA的构造函数---" << endl;
//		this->m_name = name;
//		this->m_age = age;
//	}
//	void show()
//	{
//		cout << "---AA的成员函数---" << endl;
//		cout << "name:" << m_name << "  age:" << m_age << endl;
//		
//	}
//	//模板类BB
//	template<class T>
//	class BB {
//	public:
//		T mb_name;
//		T1 ma_name;
//		BB(){}
//		//模板类的成员函数声明
//		void show();
//		
//	};
//	BB<string> m_bb;
//	//模板函数
//	template<typename T>
//	void show(T tt);
//};
//
////类模板中的类模板成员函数类外初始化
//template<class T1, class T2>
//template<class T>
//void AA<T1,T2>::BB<T>::show()
//{
//	cout << "mb_name:" << mb_name << " ma_name:" << ma_name << endl;
//}
////类模板中的函数模板初始化
//template<class T1, class T2>
//template<typename T>
//void AA<T1,T2>::show(T tt)
//{
//	cout << "tt:" << tt << endl;
//	cout << "name:" << m_name << "  age:" << m_age << endl;
//	m_bb.show();
//}
//int main()
//{
//	AA<string, int> aa("冰冰", 18);
//	aa.show();
//	aa.m_bb.ma_name = "琳琳";
//	aa.m_bb.mb_name = "花花";
//	aa.m_bb.show();
//
//	aa.show("...");
//	return 0;
//}