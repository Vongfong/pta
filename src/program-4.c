#include <stdio.h>

// ÆæÅ¼¸öÊý
int main(int argc, char **argv) {
    int a = 0;
    int odd = 0, even = 0;
    
    do{
        scanf("%d", &a);
        if (a != -1) {
            if (a % 2 == 0) {
                even ++;
            } else {
                odd ++;
            }
        }
    } while (a != -1);
    printf("%d %d", odd, even);
}
