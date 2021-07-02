/* KAKAO Coding Test_1 Program */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void remove_space(char *s);

int main()
{
    char Input[1000];
    int length = 0;
    int i = 0;

    /* For check empty string, need to Initialize */
    Input[0] = 0;

    printf("Plz enter New_ID (Length under 1000)\n");

    fgets(Input, 1000, stdin);

    length = strlen(Input);

    /* Step 1 */
    for(i=0; i<length; i++)
    {
        if((Input[i]>='A') && (Input[i]<='Z'))
        {
            Input[i] = Input[i] - 'A' + 'a';
        }
    }

    /* Step 2 */
    for(i=0; i<length; i++)
    {
        if((Input[i]>='a') && (Input[i]<='z'))
        {
            continue;
        }else if(Input[i] == '-')
        {
            continue;
        }else if(Input[i] == '_')
        {
            continue;
        }else if(Input[i] == '.')
        {
            continue;
        }else
        {
            Input[i] = ' ';
        }
    }/* Covert disallowd char to space */

    /* Remove Space */
    remove_space(Input);
    length = strlen(Input);
    
    /* Step 3 */
    for(i=0; i<length-1; i++)
    {
        if(Input[i] == '.' && Input[i+1] == '.')
        {
            Input[i] = ' ';
        }
    }

    /* Remove Space */
    remove_space(Input);
    length = strlen(Input);

    /* Step 4 */
    if(Input[0] == '.')
    {
        Input[0] = ' ';
    }
    
    if(Input[length-1] == '.')
    {
       Input[length-1] = ' '; 
    }

    /* Remove Space */
    remove_space(Input);
    length = strlen(Input);

    /* Step 5 */
    if(Input[0] == 0)
    {
        Input[0] = 'a';
    }

    /* Step 6 */
    if(length >= 16)
    {
        for(i=16; length-i>=0; i++)
        {
            Input[i-1] = ' ';
        }

        if(Input[14] == '.')
        {
            Input[14] = ' ';
        }
    }

    /* Remove Space */
    remove_space(Input);
    length = strlen(Input);

    /* Step 7 */
    if(length < 3)
    {
        for(i=length; i<3; i++)
        {
            Input[i] = Input[i-1];
        }

        Input[3] = '\0';
    }


    printf("Output = %s\n", Input);

    return 0;
}

void remove_space(char *s)
{
    char *d = s;
    
    do{
        while(isspace(*d))
        {
            ++d;
        }
        *s++ = *d++;

    }while(*s!='\0');
}