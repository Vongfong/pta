#include<stdio.h>

// 7-15 厘米换算英尺英寸
int main() {
    int cm = 0;
    
    scanf("%d", &cm);
    
    int foot = cm / 30.48;
    int inch = (cm - foot*30.48)*12 / 30.48;
    
    printf("%d %d", foot, inch);
    
    return 0;
}
