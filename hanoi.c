#include <stdio.h>
/*
x	y	z
|	|	|
|	|	|
|	|	|
---------

1.��ֻ��һ��ʱ����n==1��
	ֻ���x�Ƶ�z���ɡ�
2.����ֹһ��ʱ��
	����Ҫ��x�ϵ�n-1��������z�����Ƶ�y�ϡ�	//hanoi(n - 1, x, z, y);
	���ٰ�x�������һ��Ų��z�ϡ�			//printf("%c-->%c\n", x, z);
	������y����n-1��������z��Ų��x�ϡ�	//hanoi(n - 1, y, x, z);

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
	printf("�����뺺ŵ��������");
	scanf("%d", &n);

	hanoi(n, 'a', 'b', 'c');
}