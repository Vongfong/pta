#include<stdio.h>

// 时间换算
int main(int argc, char **argv) {
	int bjt = 0;
	int utc = 0;
	scanf("%d", &bjt);
	
	if (bjt >= 800) {
		utc = bjt - 800;
	} else {
		utc = 1600 + bjt; // 2400 + bjt -800
	}
	
	printf("%d", utc);
	
	return 0;
}
