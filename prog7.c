#include <stdio.h>

int main()
{
    int i, n;
    
    
    printf("Print odd numbers till: ");
    scanf("%d", &n);

    printf("All odd numbers from 1 to %d are: \n", n);

    
    for(i=1; i<=100; i++)
    {
        
        if(i%2!=0)
        {
            printf("%d\n", i);
        }
        else
        {
            printf("invalid number");
        }
    }

    
}
