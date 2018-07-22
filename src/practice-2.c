#include <stdio.h>
#include <string.h>

// 7-8 I Love GPLT
int main(int argc, char **argv) {
    char str[] = "I Love GPLT";
    for(int i = 0; i < strlen(str); i++) {
        printf("%c\n", str[i]);
    }
    return 0;
}