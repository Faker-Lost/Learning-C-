#include<iostream>
using namespace std;
int add(int a, int b)
{
	return a + b;
}
int main()
{
	int (*ptr)(int, int) = &add;
	int result = ptr(3, 4);
	cout << result << endl;
	return 0;
}