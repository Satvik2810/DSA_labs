#include <stdio.h>

int main(){
    FILE* fptr;
    char code[1000];
    fptr = fopen("task5.c", "r");
    
    while(fgets(code, 100, fptr))
    {
    printf("%s", code);
    }
    // printf("%s", __FILE__);
    return 0;
}