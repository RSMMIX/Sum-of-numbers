#include <stdio.h>
int main()
{
    for (int i = 1; i <= 10000; i++)
    {
        int p = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                p+=j;
            }
            
        }
        if (p == i)
        {
            printf("%d\n",i);
        }   
    }
    return 0;
}