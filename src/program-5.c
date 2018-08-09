#include<stdio.h>
// 求素数和
int main() {
    int x = 2;
    int cnt = 0;
    
    int n, m;
    scanf("%d %d", &n, &m);
    int sum = 0;
    while(cnt <= 200) {
        int isPrime = 1;
        int i;
        for(i = 2; i < x; i++) {
            if(x % i == 0) {
                isPrime = 0;
                break;
            }
        }
        
        if(isPrime == 1) {
            cnt++;
            if(cnt >= n && cnt <= m) {
                sum += x;
            }
        }
        
        x++;
    }
    printf("%d\n", sum);
    return 0;
}
