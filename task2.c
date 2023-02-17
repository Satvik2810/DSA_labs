#include <stdio.h>
#include <stdlib.h>

typedef struct arr{
    char stringg[20];
} Array;

void addStr1( Array koi[], int size)
{
    koi = realloc(koi, (size+1)*(sizeof(Array)));
    
    for(int i = size-1; i>0; i--)
    {
        koi[i-1] = koi[i];
    }
    scanf("%s", koi[0].stringg);
}
void addStr2(Array koi[], int size)
{
    koi = realloc(koi, (size+1)*(sizeof(Array)));
    
    for(int i = 0; i < size; i++)
    {
        koi[i] = koi[i+1];
    }
    scanf("%s", koi[size-1].stringg);
}
void deleteStr(Array koi[], int index)
{

}
int dsply_len(Array koi[])
{
    int arr_size = sizeof(koi)/sizeof(Array);
    return arr_size;
}
void showStr(Array koi[])
{
    int arr_size = sizeof(koi)/sizeof(koi[0]);
    for(int i=0; i<arr_size; i++){
        printf("%s", koi[i].stringg);
    }
}

int main(void)
{
    int size;
    // char arr[][];

    printf("Please enter the number of strings:\n");
    scanf("%d", &size);
    // arr = (char*) malloc(sizeof(char) * size);
    // 

    Array*  fin = calloc(size, sizeof(Array));

    for(int i=0; i<size; i++)
    {
        scanf("%s", fin[i].stringg); // backslash n? &?
    }
    printf("Your strings have been stored, awesome!\n");
    printf("Press 1 to add a string to the end of array\n");
    printf("Press 2 to add a string at the beginning of array\n");
    printf("Press 3 to delete an element at given index\n");
    printf("Press 4 to see the length of array\n");
    printf("Press 5 to see all the strings\n");
    printf("Press 6 to exit menu\n");

    int response;
    scanf("%d", &response);
    
    switch(response)
    {
        case 1:
            addStr1(fin, size);
        case 2:
            addStr2(fin, size);
        case 3:

        case 4:

        case 5:

        case 6:
        return 0;

        default:
        printf("Invalid Input, please try again\n");
    }

}
