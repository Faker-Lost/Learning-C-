//#include<iostream>
//
//using namespace std;
//int func()
//{
//	cout << "���ú���" << endl; \
//		return 3;
//}
//int main()
//{
//	//������ͬ
//	int a = 5;
//	int b = 10;
//	int& ra = a;
//	decltype(a) da1 = b;
//	//��������ֵ������ͬ ������úͺ���������������
//	//������ �õ��Ǻ������� *da ����ָ��
//	decltype(func) *da = func;
//	da();
//	//���� �����������ĺ���
//	decltype((func)) da2 = func;
//	da2();
//	//���� �����������ı�ʶ��
//	int c = 10;
//	int d = 10;
//	decltype((c)) da3 = d;
//	//��ֵ ����
//	int e = 10;
//	int f = 10;
//	decltype(e++) da4 = f;
//	return 0;
//}