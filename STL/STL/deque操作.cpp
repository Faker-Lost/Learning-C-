#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
void printDeque(deque<int> deqT)
{
for (deque<int>::iterator it = deqT.begin(); it != deqT.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test()
{
	deque<int> deq1;
	for (int i = 0; i < 10; i++)
	{
		deq1.push_back(i);
	}
	printDeque(deq1);
	deque<int> deq2;
	deq2 = deq1;
	printDeque(deq2);

	deque<int> deq3;
	deq3.assign(10,0);
	printDeque(deq3);

	deque<int> deq4;
	deq4.assign(deq2.begin()+5, deq2.end());
	printDeque(deq4);

	sort(deq4.begin(), deq4.end());
	printDeque(deq4);
}
int main()
{
	test();
	return 0;
}