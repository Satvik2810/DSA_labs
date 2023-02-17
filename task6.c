#include <stdio.h>

int main()
{
    char text[1000];
    FILE *fptr1, *fptr2, *fptr3;
    fptr1 = fopen("text1.txt", "r");
    fptr2 = fopen("text2.txt", "w");
    if(fptr1 == NULL)
    {
        printf("Unable to read");
        return 0;
    }
    if(fptr2 == NULL)
    {
        printf("Unable to write");
        return 0;
    }
    
    while(fgets(text, 10000, fptr1))
    {
        fputs(text, fptr2);
    }
    fptr3 = fopen("text1.txt", "w");
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}