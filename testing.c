#include <stdio.h>
#include<stdlib.h>
//#include<string.h>

int main(void)
{
    int size;

    printf("Please enter the number of strings:\n");
    scanf("%d", &size);
    char *arr = (char*) calloc(size, sizeof(char));
    printf("Enter the strings separated by new line:\n");
    for(int i=0; i<size; i++)
    {
        scanf("%s", &arr[i]); // backslash n? &?
    }
    printf("%s", arr[0]);
}