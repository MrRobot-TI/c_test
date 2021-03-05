#include <stdio.h>
/*
x	y	z
|	|	|
|	|	|
|	|	|
---------

1.当只有一层时，即n==1；
	只需把x移到z即可。
2.当不止一层时，
	①需要把x上的n-1个，借助z，先移到y上。	//hanoi(n - 1, x, z, y);
	②再把x上那最后一个挪到z上。			//printf("%c-->%c\n", x, z);
	③最后把y上那n-1个，借助z，挪到x上。	//hanoi(n - 1, y, x, z);

*/



void hanoi(int n, char x, char y, char z)
{
	if (n == 1)
	{
		printf("%c-->%c\n", x, z);
	}
	else
	{
		hanoi(n - 1, x, z, y);
		printf("%c-->%c\n", x, z);
		hanoi(n - 1, y, x, z);
	}


}

int main()
{
	int n;
	printf("请输入汉诺塔层数：");
	scanf("%d", &n);

	hanoi(n, 'a', 'b', 'c');
}