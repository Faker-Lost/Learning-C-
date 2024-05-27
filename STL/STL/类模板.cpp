//#include<iostream>
//#include<string>
//using namespace std;
////类模板
//template<class Datatype>
//class Stack
//{
//public:
//	//构造函数：1.分配栈数组内存 2.把栈顶指针初始化为0
//	Stack(int size = 3)
//	{
//		this->stacksize = size;
//		this->top = 0;
//		items = new Datatype[stacksize];
//	}
//	~Stack()
//	{
//		delete[] items;
//		items = nullptr;
//	}
//	//重写赋值运算 实现深拷贝
//	Stack& operator=(const Stack& v)
//	{
//		delete[] items;
//		stacksize = v.stacksize;
//		items = new Datatype[stacksize];
//		for (int i = 0; i < stacksize; i++)
//		{
//			items[i] = v.items[i];
//		}
//		top = v.top;
//		return *this;
//	}
//	//判断栈是否为空 是否以满
//	bool isempty() const {
//		if (top == 0) return true;
//		return false;
//	}
//	bool isfull() const {
//		if (top == stacksize) return true;
//		return false;
//	}
//	bool push(const Datatype& item) {
//		if (top < stacksize) {
//			items[top] = item;
//			top++;
//			return true;
//		}
//		return false;
//	}
//	bool pop(Datatype& item)
//	{
//		if (top >= 0) {
//			top--;
//			item = items[top];
//			return true;
//		}
//		return false;
//	}
//
//private:
//	Datatype* items;
//	int stacksize;
//	int top;
//};
//
//
//
//template<class T, int len>
//class Array {
//public:
//	Array()
//	{
//	}
//	~Array()
//	{
//	}
//	T& operator[](int i) {
//		return items[i];
//	}
//	const T& operator[](int i) const {
//		return items[i];
//	}
//private:
//	T items[len];
//};
//
//template<class T>
//class Vector {
//public:
//	Vector(int size = 2)
//	{
//		this->len = size;
//		items = new T[len];
//	}
//	~Vector()
//	{
//		delete[] items;
//		items = nullptr;
//	}
//	Vector& operator=(const Vector& v)//重写赋值运算符，实现深拷贝
//	{
//		delete[] items;
//		len = v.len;
//		items = new T[len];
//		for (int i = 0; i < len; i++)
//		{
//			items[i] = v.items[i];
//		}
//		return *this;
//	}
//	void resize(int size)
//	{
//		if (size <= len)
//		{
//			return;
//		}
//		T* tmp = new T[size];
//		for (int i = 0; i < len; i++)
//		{
//			tmp[i] = items[i];
//		}
//		delete[] items;
//		items = tmp;
//		len = size;
//	}
//	int size()const
//	{
//		return len;
//	}
//
//	T& operator[](int i) {
//		if (i >= len) resize(i + 1);
//		return items[i];
//	}
//	const T& operator[](int i) const {
//		return items[i];
//	}
//private:
//	T* items;
//	int len;
//};
//int main()
//{
//	//Vector的缺省值：2，Stack的缺省值：3
//	//创建Vector，容器中的元素用Stack
//	Vector<Stack<string> > vs;
//
//
//	//手工往容器中插入数据 vs[0]是一个栈,入栈3个元素;
//	vs[0].push("西施1"); vs[0].push("西施2"); vs[0].push("西施3");
//	vs[1].push("貂蝉1"); vs[1].push("貂蝉2"); vs[1].push("貂蝉3");
//	//自动扩展，深拷贝重写=
//	vs[2].push("貂蝉1"); vs[2].push("貂蝉2"); vs[2].push("貂蝉3");
//	//用嵌套的循环，把容器中的元素显示出来
//	for (int i = 0; i < vs.size(); i++)
//	{
//		while (!vs[i].isempty())
//		{
//			string item;
//			vs[i].pop(item);
//			cout << "item=" << item <<" ";
//		}
//		cout << endl;
//	}
//
//	//创建Stack容器
//	Stack<Vector<string>>  sv;
//	Vector<string> temp;
//
//	temp[0] = "西施1"; temp[1] = "西施2"; sv.push(temp);
//	temp[0] = "西瓜1"; temp[1] = "西瓜2"; sv.push(temp);
//	//嵌套循环 显示容器中元素
//	while (!sv.isempty())
//	{
//		sv.pop(temp);
//		for (int i = 0; i < temp.size(); i++)
//		{
//			cout <<"temp:" << temp[i] << endl;
//		}
//	}
//	
//
//	return 0;
//}