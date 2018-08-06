#include<stdio.h>

// 逆序的三位数
int main() {
	int x = 0;
	scanf("%d", &x);

	int m = 100*(x%10) + 10*((x/10)%10) + x/100;
	printf("%d\n", m);
	return 0;
}