﻿#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//关系操作符：值得一提的是==和=是两个不同的概念，=是将右边的值赋予左边，==是判断左右是否相等同时返回一个布尔值，真1，假0.！=是用来判断不相等的

//逻辑运算符：&& 逻辑与运算 ||逻辑或运算
//int main()
//{
//	int a = 1;
//	int b = -1;
//	printf("%d\n", a&&b);//输出为1，说明只要一个数不为0就是真，逻辑运算只会判断真假0,1
//	return 0;
//}


//三目操作符（条件操作符）：exp1 ? exp2 : exp3
//意思是如果1成立则输出2，如果1不成立则输出3；

//逗号表达式：用逗号隔开的表达式（exp1,exp2,exp3,...,expn）他的特性就是从左到右进行运算结果等于最右边的表达式的结果

//下标引用操作符[]：
//int main()
//{
//	int arr[5] = {1,2,3,4,5};//这里的[]是定义数组的符号
//	printf("%d\n", arr[3]);//这里的[]就是下标引用操作符
//	return 0;
//}

//函数调用操作符（）：printf（）后面这个括号就是函数调用操作符

//操作符.（点操作符）用于访问结构体和联合体（structs 和 unions）的成员。通常用定义的结构体变量+.+成员名来访问结构体例如
//int mian()
//{
//	struct Person {
//		char name[50];
//		int age;
//	};//定义了一个结构体
//	struct Person person1;//定义了一个结构变量person1
//	person1.age = 30;                //访问成员age
//	strcpy(person1.name, "John");     // 访问结构体成员name，strcpy函数，将John复制到name里面
//	return 0;
//}


//关于结构体和联合体：主要区别如下：

/*内存分配：

结构体会为每个成员分配内存，并将它们按顺序存储在内存中，所以结构体的大小等于所有成员大小之和。
联合体会为所有成员共享同一块内存，所以联合体的大小等于其中最大的成员的大小。
存储方式：

结构体的不同成员可以同时存储不同的数据，每个成员都有自己的内存空间。
联合体的不同成员共享相同的内存空间，只能存储其中一个成员的值，访问一个成员会覆盖其他成员的值。
用途：

结构体通常用于组合不同类型的数据，例如表示一个人的名字和年龄。
联合体通常用于表示多个成员中只会有一个被使用的情况，例如在一个数据包中可以有整数、浮点数或字符串，但只有其中一种类型会被使用。*/

//操作符->:
//-> 操作符在C语言中用于访问结构体和联合体成员，
// 但与.操作符略有不同。它通常用于访问指向结构
// 体或联合体的指针的成员。具体来说，->操作符
// 用于解引用指针并访问其指向的结构体或联合体
// 的成员。
//int mian()
//{
//	struct Person {
//		char name[50];
//		int age;
//	};
//
//	struct Person person1; // 声明一个结构体变量
//	struct Person* ptr = &person1; // 声明一个指向结构体的指针
//
//	// 使用 -> 操作符访问结构体成员
//	ptr->age = 30;
//	strcpy(ptr->name, "John");
//	return 0;
//}

//常见字符值得提的几个：1.auto：用于修饰局部变量，其实局部变量都有一个隐藏的auto，只是未显示，现在的编译器很聪明不需要打出来
//2.register:建议存放到寄存器里，ps：只是建议，编译器存进去了才是存进去了，，，这里牵扯着一个背景说是：计算机发展过程中内存的读取速度逐渐跟不上
//CPU的运算速度，为了避免CPU被闲置，于是出现了寄存器，拥有更快的读取速度，编译中如果能将反复，频繁出现的值放入寄存器的话可以大大提高效率
//但是如今的编译器很聪明，自己会判断是否放入寄存器，不需要建议。
//3.signed：有符号的，定义的变量是有符号位的，相对的有unsigned
//4.void 无-空
//define,include不是关键字是预处理指令