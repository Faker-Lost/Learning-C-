//#include<iostream>
//using namespace std;
//#include<list>
//void printList(const list<int>& l1)//const只读
//{
//	for (list<int>::const_iterator it = l1.begin(); it != l1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test()
//{
//	list<int> l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	l1.push_back(50);
//	//遍历
//	printList(l1);
//
//	list<int> l2(l1.begin(), l1.end());
//	printList(l2);
//	//拷贝构造
//	list<int> l3(l2);
//	printList(l3);
//
//	list<int> l4(5, 0);
//	printList(l4);
//	//assign(beg,end);
//	l3.assign(l4.begin(), l4.end());
//	printList(l3);
//	l3.assign(5, 1);
//	printList(l3);
//	l3 = l1;
//	printList(l3);
//	l3.swap(l4);
//	printList(l3);
//}
//int main()
//{
//	test();
//	return 0;
//}