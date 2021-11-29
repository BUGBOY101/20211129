#define	_CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
int main() {
	//int a = 1234;
	//printf("%2d\n", a);//超出m位时，整数部分全部输出，宽度m失效
	int a;
	char b;
	cin >> a >> b;
	cout << a << "," << b;
}

//#include <stdio.h>
//#define N 10
//
//int main()
//{
//	int arr[N][N] = { 0 };
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		int m = 0;
//		for (m = 0; m < N - i; m++)
//		{
//			printf("  ");
//		}
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			if ((0 == j) || (i == j))
//			{
//				arr[i][j] = 1;
//
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//
//			}
//			printf("%4d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//#define N 20
//int main() {
//	int a[N][N] = { 0 }, i, j, n, k;
//	cin >> n;
//	for (i = 0; i < n; i++) {
//		for (k = 0; k <n-i; k++)
//			cout << "  ";
//		for (j = 0; j <=i; j++) {
//			if (j == 0 || j == i)
//				a[i][j] = 1;
//			else
//				a[i][j] = a[i - 1][j] + a[i-1][j - 1];
//			printf("%4d", a[i][j]);
//		}
//		cout << endl;
//	}
//}

//#include <stdio.h>
//int a[24][24];
//int main() {
//	int N;
//	a[0][1] = 1;
//	for (int i = 0; i < 24; i++)a[i][0] = 0;
//	for (int i = 1; i < 24; i++)a[i][i + 1] = 0;
//	printf("请输入打印杨辉三角的行数（1~23）:");
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++) {
//		for (int j = N - i; j > 0; j--)printf("    ");
//		for (int j = 1; j <= i; j++) {
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//			printf(" %7d", a[i][j]);
//		}
//		putchar('\n');
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main() {
//	char s[10] = "abcdef";
//	cout << s + 2 << endl;
//}

