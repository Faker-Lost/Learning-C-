#include<iostream>
using namespace std;

void test()
{
	string s1 = "abcdefghijklmnk";
	cout <<"f_pos" << s1.find('k') << endl;
	cout <<"rf_pos:" << s1.rfind("k") << endl;
}
void test02()
{
	string s2 = "abcdefghijklmnk";
	cout << s2.replace(1, 4, "sssss") << endl;
}
void test03()
{
	string s1 = "abcdef";
	string s2 = "abcd";
	char s[] = "abcdef";
	cout << s1.compare(s2) << endl;
	cout << s1.compare(s) << endl;

}
void test04()
{
	string str1 = "hello world";
	for (int i = 0; i < str1.size(); i++)
	{
		cout << str1[i];
	}
	cout << endl;
	string str2 = "Hello World";
	for (int i = 0; i < str2.size(); i++)
	{
		cout << str2.at(i);
	}
}

void test05()
{
	string str = "abcdef";
	char s[] = "---";
	cout << str.insert(3, "---") << endl;
	cout << str.insert(4, s) << endl;
	cout << str.insert(5, 4, 'a') << endl;
	cout << str.erase(0, 4) << endl;
}
void test06()
{
	string str = "abcdefg";
	cout << str.substr(0, 6);
}
int main()
{
	test06();
	return 0;
}