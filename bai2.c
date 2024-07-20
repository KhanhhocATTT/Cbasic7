#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* lower(char c[]){
    for(int i = 0; i < strlen(c); i++){
        c[i] = tolower(c[i]);
    }
    return c;
}

int main(){
    char c[1000];
    gets(c);
    lower(c);
    printf("%s", c);

    return 0;
}