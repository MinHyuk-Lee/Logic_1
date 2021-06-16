#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* It's about how to convert Decimal to Hexadecimal */

int main()
{
    char Input[100];
    int Decimal[100];
    int count = 0;

    char *token;

    /* Can insert a number of Input Decimal Value, It sorts ',' */
    printf("Enter the Decimal Value : ");
    fgets(Input, 100, stdin);   /* Using fgest becaus of space bar (gets func don't recognize space bar) */

    /* Counting decimal value numbers */
    for(int i=0; Input[i] != '\0'; i++)
    {
        if(Input[i] == ',')
        {
            count++;
        }else
        {
            if(Input[i] == '\n')
            {
                count++;
            }
        }
    }

    /* Store Decimal Value in int array using strtok, token = ',' */
    token = strtok(Input, ",");
    for(int i=0; i<count; i++)
    {
        Decimal[i] = atoi(token);

        token = strtok(NULL, ",");
    }

    if(count == 0)
    {
        printf("The Number of Input Decimal 1 or 0\n");
    }else
    {
        printf("The Number of Input Decimal : %d\n", count);
    }

    

    
    return 0;
}