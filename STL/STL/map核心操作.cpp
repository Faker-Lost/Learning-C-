//#include<iostream>
//#include<map>
//using namespace std;
//
//int main()
//{
//	//遍历会得到有序的数列
//	map<int, string> mm({ {18,"冰冰"},{29,"妹妹"},{10,"琳琳"} });//统一初始化列表
//	//拷贝构造
//	map<int, string> m1 = mm;
//	//迭代器构造
//	auto first = m1.begin();
//	auto last = m1.end();
//	map<int, string> m2(first, last);
//	for (auto& val : m2)
//	{
//		cout << "key:" << val.first <<" ," << "value:" << val.second << endl;
//	}
//	//特性操作 size();empty(); clear();
//	cout <<"mm.size: " << mm.size() << endl;
//	//元素操作 访问元素,没有key，则插入新的元素 key = 19,val = null;
//	cout << "访问元素:" << mm[18] << endl;
//	cout << "访问元素:" << mm[19] << endl;
//	cout << "访问元素:" << mm[20] << endl;
//	//交换操作,比较操作 
//	//swap(mm, m2);
//	//查找操作
//	auto it = mm.find(19);
//	if (it != mm.end())
//	{
//		cout << "find success!" << endl;
//	}
//	else
//	{
//		cout << "find failed!" << endl;
//	}
//	//查找键值>=key的键值对
//	auto it1 = mm.lower_bound(30);
//	if (it1 != mm.end())
//	{
//		cout << "success" << endl;
//	}
//	else
//	{
//		cout << "failed" << endl;
//	}
//	//查找键值>key的键值对
//	auto it2 = mm.upper_bound(20);
//	if (it2 != mm.end())
//	{
//		cout << "SUCCESS" << endl;
//	}
//	//遍历打印
//	for ( auto& val : mm)
//	{
//		cout << val.first << ", " << val.second << "," << endl;;
//	}
//	cout << endl;
//
//
//	return 0;
//}