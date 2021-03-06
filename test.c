//假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
//
//每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？
//
//注意：给定 n 是一个正整数。
//
//示例 1：
//
//输入： 2
//输出： 2
//解释： 有两种方法可以爬到楼顶。
//1.  1 阶 + 1 阶
//2.  2 阶
//示例 2：
//
//输入： 3
//输出： 3
//解释： 有三种方法可以爬到楼顶。
//1.  1 阶 + 1 阶 + 1 阶
//2.  1 阶 + 2 阶
//3.  2 阶 + 1 阶

//实现 int sqrt(int x) 函数。
//
//计算并返回 x 的平方根，其中 x 是非负整数。
//
//由于返回类型是整数，结果只保留整数的部分，小数部分将被舍去。
//
//示例 1:
//
//输入 : 4
//输出 : 2
//	 示例 2 :
//
// 输入 : 8
//  输出 : 2
//   说明 : 8 的平方根是 2.82842...,
//		由于返回类型是整数，小数部分将被舍去。
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
int climbStairs(int n) {

	int num1 = 1;
	int num2 = 2;
	int tep = 0;
	if (n <= 2)
	{
		return n;
	}
	else
	{
		for (int i = 2; i < n; i++)
		{
			tep = num1 + num2;
			num1 = num2;
			num2 = tep;
		}
		return tep;
	}


}
int mySqrt(int x) {
	if (x>1)
	{
		for (int i = 1; i <= x / 2; i++)
		{
			if ((i <= x / 2) && ((i + 1)>x / (i + 1)))
			{
				return i;
			}
		}
	}
	return x;
}
int main()
{
	int n = 0;
	printf("请输入一个正整数->");
	scanf("%d", &n);
	int a=mySqrt(n);
	//int a = climbStairs(n);

	printf("%d\n", a);
	system("pause");
	return 0;
}