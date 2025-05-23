﻿#include <iostream>
using namespace std;
#include<string>


/*
C++面向对象的三大特性为：==封装、继承、多态
C++认为==万事万物都皆为对象，对象上有其属性和行为

**例如：

​	人可以作为对象，属性有姓名、年龄、身高、体重...，
	行为有走、跑、跳、吃饭、唱歌...

​	车也可以作为对象，属性有轮胎、方向盘、车灯...,
	行为有载人、放音乐、放空调...

​	具有相同性质的==对象==，我们可以抽象称为==类
	人属于人类，车属于车类
*/

//设计一个圆类，求圆的周长
// 公式： 2*PI*半径 2Πr
const double PI = 3.14;

// class 代表设计一个类，类后面紧跟着的就是类名称

class Circle {
	// 访问权限
	// 公共权限
public:
	//属性
	int m_r;  //半径

	//行为
	//获取周长
	double calculateZC()  //函数
	{
		return 2 * PI * m_r;

	}
};

/*
封装意义一：

​在设计类的时候，属性和行为写在一起，表现事物

语法：class 类名
{   访问权限： 属性  
			   行为  
};
*/

int main1()
{
	// 通过圆类，创建具体的圆（具体的圆——称为对象）
	//实例化： 通过一个类，创建一个对象的过程
	Circle c1;  //具体的圆

	//给圆对象的属性进行赋值
	c1.m_r = 10;  //半径

	//  2 * PI * m_r=62.8
	cout << "圆的周长为： " << c1.calculateZC() << endl;



	system("pause");
	return 0;
}