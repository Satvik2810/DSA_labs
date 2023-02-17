#include "set.h"

int answer_checker(char arr[])
{
    int score = 0;
    char answer_key[] = {'C','C','C','C','C','C','C','D','D','D'};
    for(int i = 0; i<10;i++)
    {
        if(arr[i] == answer_key[i])
        {
            score += 4;
        }
        else if(arr[i] == 'N')
        {
            score += 0;
        }
        else if((arr[i] != answer_key[i]) && (arr[i] != 'N'))
        {
            score -= 1;
        }
    }
    if(score<0)
    {
        score = 0;
    }
    return score;
}