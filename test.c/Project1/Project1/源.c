

#include<stdio.h>

#include<string.h>

#define N 100

int a[N][N], b[N][N], c[N][N];

int main()

{
	int n, i, j, tot = 1;

	scanf_s("%d", &n);



	for (i = 0; i < n; i++)

		for (j = 0; j < n; j++)

		{

			a[i][j] = tot++;

			b[n - j - 1][i] = a[i][j];

			c[j][n - i - 1] = a[i][j];

		}


	for (i = 0; i < n; i++) {

		for (j = 0; j < n; j++)

			printf("%3d", a[i][j]);

		printf("\n");

	}

	printf("\n");


	printf("ԭ����˳ʱ����ת90�Ⱥ�\n");

	for (i = 0; i < n; i++) {

		for (j = 0; j < n; j++)

			printf("%3d", c[i][j]);

		printf("\n");

	}

}