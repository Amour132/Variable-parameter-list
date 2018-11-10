//2.使用可变参数，实现函数，求函数参数的平均值。
#include <stdio.h>
#include <stdarg.h>
int averge(int n, ...)
{
	va_list arg;
	int i = 0;
	int sum = 0;
	va_start(arg, n);
	for (i = 0; i<n; i++)
	{
		sum += va_arg(arg, int);
	}
	return sum / n;
	va_end(arg);
}

int max(int n, ...)
{
	va_list arg;
	int i = 0;
	int max = 0;
	va_start(arg, n);
	max = va_arg(arg, int);
	for (i = 1; i<n; i++)
	{
		int temp = va_arg(arg, int);
		if (max<temp)
		{
			max = temp;
		}
	}
	return max;
	va_end(arg);
}

int main()
{
	int a = 1;
	int b = 2;
	int c = 6;
	int aver = averge(3, a, b, c);
	printf("aver = %d ", aver);
	return 0;
}