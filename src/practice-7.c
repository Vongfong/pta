#include<stdio.h>

// 7-1计算摄氏温度
int main() {
    int f = 0;
    scanf("%d", &f);
    
    int c = 5 * (f -32) / 9;
    
    printf("Celsius = %d", c);
    
    return 0;
}