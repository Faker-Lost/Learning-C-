//#include<iostream>
//#include<map>
//using namespace std;
//
//int main()
//{
//	//������õ����������
//	map<int, string> mm({ {18,"����"},{29,"����"},{10,"����"} });//ͳһ��ʼ���б�
//	//��������
//	map<int, string> m1 = mm;
//	//����������
//	auto first = m1.begin();
//	auto last = m1.end();
//	map<int, string> m2(first, last);
//	for (auto& val : m2)
//	{
//		cout << "key:" << val.first <<" ," << "value:" << val.second << endl;
//	}
//	//���Բ��� size();empty(); clear();
//	cout <<"mm.size: " << mm.size() << endl;
//	//Ԫ�ز��� ����Ԫ��,û��key��������µ�Ԫ�� key = 19,val = null;
//	cout << "����Ԫ��:" << mm[18] << endl;
//	cout << "����Ԫ��:" << mm[19] << endl;
//	cout << "����Ԫ��:" << mm[20] << endl;
//	//��������,�Ƚϲ��� 
//	//swap(mm, m2);
//	//���Ҳ���
//	auto it = mm.find(19);
//	if (it != mm.end())
//	{
//		cout << "find success!" << endl;
//	}
//	else
//	{
//		cout << "find failed!" << endl;
//	}
//	//���Ҽ�ֵ>=key�ļ�ֵ��
//	auto it1 = mm.lower_bound(30);
//	if (it1 != mm.end())
//	{
//		cout << "success" << endl;
//	}
//	else
//	{
//		cout << "failed" << endl;
//	}
//	//���Ҽ�ֵ>key�ļ�ֵ��
//	auto it2 = mm.upper_bound(20);
//	if (it2 != mm.end())
//	{
//		cout << "SUCCESS" << endl;
//	}
//	//������ӡ
//	for ( auto& val : mm)
//	{
//		cout << val.first << ", " << val.second << "," << endl;;
//	}
//	cout << endl;
//
//
//	return 0;
//}