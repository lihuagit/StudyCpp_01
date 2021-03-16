#include<iostream>
using namespace std;
int main() {
	//应用类似于指针常量 可以以此理解
	int a;
	//语法： 数据类型& 变量名称 = 被引用变量；
	int& b = a;
	//a,b 的地址为同一个块内存
	cout << "a的地址为：" << &a << endl;
	cout << "b的地址为：" << &b << endl;
	int c;
	//b = &c; //非法！！！  引用相当于指针常量 只能在定义时进行赋值 并且之后不能引用其他变量
	//证明 int& 变量==const int* 变量
	const int* p = &a;
	cout << "p的地址为：" << p << endl;

	system("pause");
	return 0;
}