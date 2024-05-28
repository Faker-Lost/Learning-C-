//#include<iostream>
//#include<set>
//using namespace std;
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_name = name;
//		this->age = age;
//	}
//	string m_name;
//	int age;
//};
//class comparePerson
//{
//public:
//	bool operator()(const Person& p1, const Person& p2) const
//	{
//		return p1.age > p2.age;
//	}
//
//};
//
//class Mycompare
//{
//public:
//	bool  operator()( int v1, int v2)const
//	{
//		return v1 > v2;
//	}
//};
//
//void printSet(set<int>& s1)
//{
//	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	set<int> s1;
//	//插入数据
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(50);
//	s1.insert(20);
//	s1.insert(30);
//
//	//遍历数据
//	printSet(s1);
//	/*if (s1.find(10) != s1.end())
//	{
//		cout << "true" << endl;
//	}
//
//	pair<string, int> p("tom", 20);
//	cout << "string:" << p.first << "age:" << p.second << endl;
//
//	pair<string, int>p1 = make_pair("jack", 10);
//	cout << "string:" << p1.first << "age:" << p1.second << endl;*/
//	//制定排序规则 仿函数
//	set<int, Mycompare> s2;
//	//插入数据
//	s2.insert(10);
//	s2.insert(40);
//	s2.insert(50);
//	s2.insert(20);
//	s2.insert(30);
//
//	//遍历数据
//	for (set<int, Mycompare>::iterator it = s2.begin(); it != s2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	//自定义数据类型
//	Person p1("张飞", 19);
//	Person p2 = Person("关羽", 20);
//	Person p3("刘备", 22);
//	
//	set<Person, comparePerson> s;
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//
//	for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << it->m_name << " " << it->age << endl;
//	}
//	
//
//
//
//}
//int main()
//{
//	test();
//	return 0;
//}