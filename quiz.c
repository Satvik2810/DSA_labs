#include <stdio.h>
#include "set.h"

int main(void)
{
    char arr2[10];
    for(int i = 0; i<10; i++){
        printf("%s","Enter the element");
        printf("%d",i);
        scanf("%c", &arr2[i]);
    }
    printf("%d", answer_checker(arr2));
}