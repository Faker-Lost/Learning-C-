//#include<iostream>
//#include<string>
//using namespace std;
////��ģ��
//template<class Datatype>
//class Stack
//{
//public:
//	//���캯����1.����ջ�����ڴ� 2.��ջ��ָ���ʼ��Ϊ0
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
//	//��д��ֵ���� ʵ�����
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
//	//�ж�ջ�Ƿ�Ϊ�� �Ƿ�����
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
//	Vector& operator=(const Vector& v)//��д��ֵ�������ʵ�����
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
//	//Vector��ȱʡֵ��2��Stack��ȱʡֵ��3
//	//����Vector�������е�Ԫ����Stack
//	Vector<Stack<string> > vs;
//
//
//	//�ֹ��������в������� vs[0]��һ��ջ,��ջ3��Ԫ��;
//	vs[0].push("��ʩ1"); vs[0].push("��ʩ2"); vs[0].push("��ʩ3");
//	vs[1].push("����1"); vs[1].push("����2"); vs[1].push("����3");
//	//�Զ���չ�������д=
//	vs[2].push("����1"); vs[2].push("����2"); vs[2].push("����3");
//	//��Ƕ�׵�ѭ�����������е�Ԫ����ʾ����
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
//	//����Stack����
//	Stack<Vector<string>>  sv;
//	Vector<string> temp;
//
//	temp[0] = "��ʩ1"; temp[1] = "��ʩ2"; sv.push(temp);
//	temp[0] = "����1"; temp[1] = "����2"; sv.push(temp);
//	//Ƕ��ѭ�� ��ʾ������Ԫ��
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