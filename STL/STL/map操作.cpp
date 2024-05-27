//#include<iostream>
//#include<map>
//using namespace std;
//void printMap(map<int, int> m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key:" << it->first <<" " << "value:" << it->second << endl;
//	}
//	cout << endl;
//}
//void test()
//{
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 10));
//	m.insert(pair<int, int>(3, 10));
//	m.insert(pair<int, int>(4, 10));
//	m.insert(pair<int, int>(5, 10));
//	//迭代打印
//	printMap(m);
//	//拷贝构造
//	map<int, int>m2(m);
//	printMap(m2);
//	//赋值
//	map<int, int>m3 = m2;
//	map<int,int>::iterator pos = m3.find(6);
//	if (pos != m3.end())
//	{
//		cout << "find" << endl;
//	}
//	else
//	{
//		cout << "faile" << endl;
//	}
//
//
//}
//int main()
//{
//	test();
//	return 0;
//}