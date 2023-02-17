// #include <stdio.h>

// int main()
// {
//     int num;
//     FILE* fptr = NULL;
//     fptr = fopen("program.txt", "w");
//     if(fptr == NULL)
//     {
//         printf("Error opening file!");
//         return 0;
//     }
//     printf("Enter num: ");
//     scanf("%d", &num);
//     fprintf(fptr, "%d", num);
//     fclose(fptr);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int num;
    FILE* fptr;
    fptr = fopen("program.txt", "r");
    if(fptr == NULL)
    {
        printf("Error opening file");
        return 0;
    }

    fscanf(fptr, "%d", &num);
    printf("The number is:%d", num);
    fclose(fptr);
    return 0;
}