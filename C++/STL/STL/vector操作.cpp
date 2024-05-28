//#include<iostream>
//#include<vector>
//using namespace std;
//void printVector(vector<int> v1)
//{
//	//for (int i = 0; i < 10; i++)
//	for(vector<int>::iterator it = v1.begin();it!=v1.end();it++)
//	{
//		cout << *it <<" ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//1 默认构造
//	vector<int> v1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//	//2 拷贝
//	vector<int> v2(v1.begin(), v1.end());
//	printVector(v2);
//	//3 n个elem构造
//	vector<int> v3(10, 3);
//	printVector(v3);
//
//	//拷贝构造
//	vector<int> v4 (v3);
//	printVector(v4);
//	//赋值 重载=
//	vector<int> v5 = v3;
//	printVector(v5);
//	v5.assign(v2.begin(), v2.end());
//	printVector(v5);
//	v5.assign(10, 2);
//	printVector(v5);
//	//empty()
//	if (v3.empty())
//	{
//		cout << "empty" << endl;
//	}
//	else
//	{
//		cout << "!empty" << endl;
//	}
//	//capcity();
//	cout << "capcity:" << v3.capacity() << endl;
//	//size
//	cout << "size:" << v3.size() << endl;
//	//resize
//	v3.resize(5);
//	printVector(v3);
//	//resize(n,elem)
//	v3.resize(10, 5);
//	printVector(v3);
//
//	//vector 插入删除操作
//	vector<int> arr(10, 5);
//	cout << "arr:" << " ";
//	printVector(arr);
//	
//	/*arr.push_back(10);
//	printVector(arr);
//	arr.pop_back();
//	cout << "arr:" << " ";
//	printVector(arr);
//	vector<int>::iterator it = arr.begin();
//	vector<int>::iterator end = arr.end();
//	arr.insert(it+5, 5, 0);
//	printVector(arr);
//
//	arr.erase(it);
//	printVector(arr);*/
//	arr.erase(arr.begin()+5, arr.end());
//	printVector(arr);
//
//	//vector数据存取
//	vector<int> v;
//
//	for (int i=0;i<10;i++)
//	{
//		v.push_back(i);
//	}
//	printVector(v);
//	vector<int> arr1(5, 0);
//	v.swap(arr1);
//	printVector(v);
//	/*cout << v.at(1) << endl;
//
//	cout << v[2] << endl;
//
//	cout << v.front() << endl;
//
//	cout << v.back() << endl;*/
//
//
//}
//int main()
//{	
//	test01();
//	return 0;
//}