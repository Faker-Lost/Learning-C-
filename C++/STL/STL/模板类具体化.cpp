//#include<iostream>
//using namespace std;
////��ģ��AA
//template<class T1, class T2>
//class AA
//{
//public:
//	T1 m_name;
//	T2 m_age;
//	AA(const T1 name, const T2 age)
//	{
//		cout << "---AA�Ĺ��캯��---" << endl;
//		this->m_name = name;
//		this->m_age = age;
//	}
//	void show()
//	{
//		cout << "---AA�ĳ�Ա����---" << endl;
//		cout << "name:" << m_name << "  age:" << m_age << endl;
//		
//	}
//	//ģ����BB
//	template<class T>
//	class BB {
//	public:
//		T mb_name;
//		T1 ma_name;
//		BB(){}
//		//ģ����ĳ�Ա��������
//		void show();
//		
//	};
//	BB<string> m_bb;
//	//ģ�庯��
//	template<typename T>
//	void show(T tt);
//};
//
////��ģ���е���ģ���Ա���������ʼ��
//template<class T1, class T2>
//template<class T>
//void AA<T1,T2>::BB<T>::show()
//{
//	cout << "mb_name:" << mb_name << " ma_name:" << ma_name << endl;
//}
////��ģ���еĺ���ģ���ʼ��
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
//	AA<string, int> aa("����", 18);
//	aa.show();
//	aa.m_bb.ma_name = "����";
//	aa.m_bb.mb_name = "����";
//	aa.m_bb.show();
//
//	aa.show("...");
//	return 0;
//}