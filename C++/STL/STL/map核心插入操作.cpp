//#include<iostream>
//#include<map>
//using namespace std;
//
//int main()
//{
//	map<int, string> mm;
//	mm.insert({ {8,"����"},{9,{"��ʩ"}} ,{3,"����"} });
//	mm.insert({ pair<int, string>{1, "����"}, make_pair<int, string>(2, "����"),{5,"����"} });
//
//	auto rec = mm.insert(pair<int, string>(12, "����"));
//	//����������һ�������Ԫ��
//	map<int, string> m1;
//	m1.insert(mm.begin(), mm.end());
//	//emplace ����ֵpair first �Ƿ���Ԫ�صĵ�������second�ǲ�����
//	auto rec2 = mm.emplace(20, "ţţ");
//	if (rec2.second == true)
//	{
//		cout << "����ɹ�:"<<rec2.first->first <<", "<<rec2.first->second<< endl;
//	}
//	for (auto val : mm)
//	{
//		cout << "key:" << val.first << " ," << "val:" << val.second << endl;
//	}
//	return 0;
//}