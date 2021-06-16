#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* It's about how to convert Decimal to Hexadecimal */

int print_hex(int value)
{
    int mod = 0;
    int decimal = 0;
    int position = 0;
    char hexa[20] = {0, };

    decimal = value;

    while(1)
    {

        mod = decimal % 16;

        if(mod < 10)
        {
            hexa[position] = 48 + mod;
        }else
        {
            hexa[position] = 65 + (mod - 10);
        }

        decimal = decimal / 16;

        position++;

        if(decimal == 0)
        {
            break;
        }
    }

    printf("Decimal : %d convert Hexadecimal = ", value);

    for(int i = position-1; i>=0; i--)
    {
        printf("%c", hexa[i]);
    }

    printf("\n");

    return 0;
}

int main()
{
    char Input[100];
    int Decimal[100];
    int count = 0;
    int ret = 0;
    int i, j;

    char *token;

    /* Can insert a number of Input Decimal Value, It sorts ',' */
    printf("Enter the Decimal Value : ");
    fgets(Input, 100, stdin);   /* Using fgest becaus of space bar (gets func don't recognize space bar) */

    /* Counting decimal value numbers */
    for(i = 0; Input[i] != '\0'; i++)
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
    for(i = 0; i<count; i++)
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

    /* Calculate Hexadecimal using Decimal Array */

    for(i = 0; i<count; i++)
    {
        ret = print_hex(Decimal[i]);
    }
    
    return 0;
}