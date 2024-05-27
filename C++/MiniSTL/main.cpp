#include<iostream>
#include<string>
#include<algorithm>
#include <sstream>
#include <stdexcept>
#include"miniVector.h"
#include"miniList.h"
using namespace std;

void print(List<int>& lt)
{
	List<int>::iterator it = lt.begin();
	while (it != lt.end())
	{
		cout << *it << " ";
		++it; // ¸üÐÂµü´úÆ÷
	}
	cout << endl;
}
void test1()
{
	List<int> l1;
	l1.push_back(10);
	print(l1);
}
int main()
{
	test1();
	return 0;
}