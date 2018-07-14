//////////#include<stdio.h>
//////////int sum(int, int);
//////////void print(int);
//////////double div2(int, int);
//////////
//////////int main()
//////////{
//////////	int v1, v2;
//////////	scanf("%d%d", &v1, &v2);
//////////	printf("%f\n", div2(v1, v2));
//////////
//////////	return 0;
//////////}
//////////
//////////int sum(int v1, int v2)
//////////{
//////////	return v1 + v2;
//////////}
//////////
//////////void print(int v1)
//////////{
//////////	printf("%d", v1);
//////////}
//////////
//////////double div2(int v1, int v2)
//////////{
//////////	return (double)v1 / v2;
//////////}
////////
////////#include<stdio.h>
////////int f(int n)
////////{
////////	if(n==0)
////////	{
////////		return 1;
////////	}
////////	else
////////	{
////////		return n*f(n - 1);
////////	}
////////		
////////}
////////
////////int main()
////////{
////////	printf("%d\n", f(5));
////////}
//////
//////#include<stdio.h>
//////int sum(int n) 
//////{
//////	if (n == 1)
//////	{
//////		return 1;
//////	}
//////	else
//////	{
//////		return n + sum(n - 1);
//////	}
//////}
//////
//////int main()
//////{
//////	printf("%d\n", sum(5));
//////}
////
//#include<stdio.h>
//
//int arr[100] = { 0 };
//
//int f(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//
//	else if (arr[n])
//	{
//		return arr[n];
//	}
//	
//	return arr[n] = f(n - 1) + f(n - 2);
//}
//
//
//
//int main()
//{
//	printf("%d\n", f(10));
//
//
//}

#include<stdio.h>

void f(int n)
{
	if (n == 1)
	{
		printf("1 ");
		return;
	}

	f(n / 2);
	printf("%d ", n % 2);
}


int main()
{
	f(124);
}