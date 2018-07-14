#include <stdio.h>
// Example 1
int sum(int, int);
void print(int);
double div2(int, int);
// Example 2
int factorial(int n);
// Example 3
int sum2(int n);
// Example 4
int Fibonacci(int n);
// Example 5
void DecBin(int n)

/* 
	Function
	�Լ�

	A function is a group of statements that together perform a task.
	Every C program has at least one function, which is main(), 
	and all the most trivial programs can define additional functions.
	[tutorialspoint : https://www.tutorialspoint.com/cprogramming/c_functions.htm]

	ReturnType FunctionName(Parameter)
	{
	return ReturnValue;
	}

	�Լ� �Ǵ� ����� ù ��° ������ ������ �� ���Ҹ� �� ��° ������ ���� �� ���ҿ� ������Ű�� ���� �����̴�.
	[wikipedia : https://ko.wikipedia.org/wiki/%ED%95%A8%EC%88%98]
	
	��ȯ�� �Լ��̸�(�Ű�����)
	{
		return ��ȯ��;
	}
*/

/*
Example 1)
	�� ���� ����, �ҷ�����, ������
*/


int sum(int v1, int v2)
{
	return v1 + v2;
}

void print(int v1)
{
	printf("%d", v1);
}

double div2(int v1, int v2)
{
	return (double)v1 / v2;
}


/*
Example 2)
	1���� n������ �� ���ϱ�"(���丮��,Factorial)
*/
int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*factorial(n - 1);
	}
		
}

int main()
{
	// Example 1
	int v1, v2;
	scanf("%d%d", &v1, &v2);
	printf("%f\n", div2(v1, v2));

	// Example 2
	printf("%d\n", factorial(5));
}


/*
Example 3)
	1���� n������ �� ���ϱ�
*/

int sum2(int n) 
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n + sum2(n - 1);
	}
}

int main()
{
	//Example 3
	printf("%d\n", sum2(5));
}


/*
Example 4)
	Memorization�� ���� ����Լ��� ���� ���̱�(�Ǻ���ġ ����, Fibonacci Numbers)
*/

int arr[100] = { 0 };

int Fibonacci(int n)
{
	if (n <= 2)
	{
		return 1;
	}

	else if (arr[n])
	{
		return arr[n];
	}
	
	return arr[n] = Fibonacci(n - 1) + Fibonacci(n - 2);
}



int main()
{
	printf("%d\n", f(10));


}

/*
Example 5)
	10������ 2������ ��ȯ�ϱ�
*/


void DecBin(int n)
{
	if (n == 1)
	{
		printf("1 ");
		return;
	}

	DecBin(n / 2);
	printf("%d ", n % 2);
}


int main()
{
	// Example 5
	DecBin(124);



}