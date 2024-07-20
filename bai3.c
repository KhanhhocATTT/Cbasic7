#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* upper(char c[]){
    for(int i = 0; i < strlen(c); i++){
        c[i] = toupper(c[i]);
    }
    return c;
}

int main(){
    char c[1000];
    gets(c);
    upper(c);
    printf("%s", c);

    return 0;
}