//#include<iostream>
//#include<map>
//using namespace std;
//
//int main()
//{
//	map<int, string> mm;
//	mm.insert({ {8,"冰冰"},{9,{"西施"}} ,{3,"貂蝉"} });
//	mm.insert({ pair<int, string>{1, "秘密"}, make_pair<int, string>(2, "妹妹"),{5,"西瓜"} });
//
//	auto rec = mm.insert(pair<int, string>(12, "花花"));
//	//迭代器插入一个区间的元素
//	map<int, string> m1;
//	m1.insert(mm.begin(), mm.end());
//	//emplace 返回值pair first 是返回元素的迭代器，second是插入结果
//	auto rec2 = mm.emplace(20, "牛牛");
//	if (rec2.second == true)
//	{
//		cout << "插入成功:"<<rec2.first->first <<", "<<rec2.first->second<< endl;
//	}
//	for (auto val : mm)
//	{
//		cout << "key:" << val.first << " ," << "val:" << val.second << endl;
//	}
//	return 0;
//}