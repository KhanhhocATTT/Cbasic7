#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char c[1000];
    gets(c);
    printf("%d", strlen(c));

    return 0;
}