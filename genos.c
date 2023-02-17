#include <stdio.h>

int findWeakest(int arr[]);
int findWeakest(int arr[], int number)
        { 
            int weak = arr[0];
            for(int i=0; i<number; i++)
            {
                if(arr[i]< a)
                {
                    weak = arr[i];
                }
            }
            return weak;
        }

void attack();
// void attack()
//         {
//             int weak = findWeakest(healths, number);
//             Gpower -= weak;
//         }

void Gattack();
void Gattack(int arr[], int Gpow, int number)
        {
            for(int k=0; k<number; k++)
            {
                arr[k] -= Gpow;
            }
        }


int main(void)
{
    int count;

    scanf("%d\n", &count);
    for(int i=0; i<count; i++)
    {
        int number;
        int Gpower;

        scanf("%d %d\n", &number &Gpower);
        int powers[number];
        int healths[number];

        for(int j=0; j<number ; j++)
        {
            int health;

            scanf("%d ",&health);
            healths[j] += health;
        }
        scanf("\n");

        for(int j=0; j<number ; j++)
        {
            int power;

            scanf("%d ",&power);
            powers[j] += power;
        }

        if(findWeakest(healths, number) == 0)
        {
            printf("YES");
        }
        else if((findWeakest(healths, number)>0) && (Gpower <= 0))
        {
            int weak = findWeakest(healths, number);
            Gpower -= weak;
        }
        else
        {
            printf("NO");
        }
    }
    return 0;
}