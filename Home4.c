#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("msg.txt", "r");
    char text[100];
    int a;
    while(fgets(text, 1, fptr))
    {
        printf("H");
    }
    return 0;
}