#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int use_sixteen = 0;
int use_eight = 0;
int use_four = 0;
int use_two = 0;
int use_one = 0;

int cal_sixteen(int sixteen_gram_num, int total_gram)
{
    int temp = total_gram;
    int i = 0;

    if(sixteen_gram_num == 0)
    {
        return temp;
    }else if(sixteen_gram_num > 0)
    {
        for(i = 0; i < sixteen_gram_num; i++)
        {
            use_sixteen++;

            temp = temp - 16;

            if(temp < 16)
            {
                return temp;
            }
        }
    }

    return temp;
}

int cal_eight(int eight_gram_num, int total_gram)
{
    int temp = total_gram;
    int i = 0;

    if(eight_gram_num == 0)
    {
        return temp;
    }else if(eight_gram_num > 0)
    {
        for(i=0; i < eight_gram_num; i++)
        {
            use_eight++;

            temp = total_gram - 8;

            if(temp < 8)
            {
                return temp;
            }
        }
    }

    return temp;
}

int cal_four(int four_gram_num, int total_gram)
{
    int temp = total_gram;
    int i = 0;

    if(four_gram_num == 0)
    {
        return temp;
    }else if(four_gram_num > 0)
    {
        for(i = 0; i < four_gram_num; i++)
        {
            use_four++;

            temp = temp - 4;

            if(temp < 4)
            {
                return temp;
            }
        }
    }

    return temp;
}

int cal_two(int two_gram_num, int total_gram)
{
    int temp = total_gram;
    int i = 0;

    if(two_gram_num == 0)
    {
        return temp;
    }else if(two_gram_num > 0)
    {
        for(i = 0; i < two_gram_num; i++)
        {
            use_two++;

            temp = temp - 2;

            if(temp < 2)
            {
                return temp;
            }
        }
    }

    return temp;
}

int cal_one(int one_gram_num, int total_gram)
{
    int temp = total_gram;
    int i = 0;

    if(one_gram_num == 0)
    {
        return temp;
    }else if(one_gram_num > 0)
    {
        for(i = 0; i < one_gram_num; i++)
        {
            use_one++;

            temp = temp - 1;

            if(temp == 0)
            {
                return temp;
            }
        }
    }

    return temp;   
}

int main()
{
    int one_gram_num = 0;
    int two_gram_num = 0;
    int four_gram_num = 0;
    int eight_gram_num = 0;
    int sixteen_gram_num = 0;
    int total_gram = 0;

    int temp_gram = 0;

    printf("Enter the weight information!\n");
    scanf("%d %d %d %d %d %d", &sixteen_gram_num, &eight_gram_num, &four_gram_num, &two_gram_num, &one_gram_num, &total_gram);

    if(total_gram <= 0 || total_gram >= 200)
    {
        printf("Over the effective range!\n");
    }

    if(total_gram >= 16)
    {
        temp_gram = cal_sixteen(sixteen_gram_num, total_gram);

        printf("Using Sixteen : %d\n", use_sixteen);

        total_gram = temp_gram;
    }

    if(total_gram >= 8)
    {
        temp_gram = cal_eight(eight_gram_num, total_gram);

        printf("Using Eight : %d\n", use_eight);

        total_gram = temp_gram;
    }

    if(total_gram >= 4)
    {
        temp_gram = cal_four(four_gram_num, total_gram);

        printf("Using Four : %d\n", use_four);

        total_gram = temp_gram;
    }

    if(total_gram >= 2)
    {
        temp_gram = cal_two(two_gram_num, total_gram);

        printf("Using Two : %d\n", use_two);

        total_gram = temp_gram;
    }

    if(total_gram >= 1)
    {
        temp_gram = cal_one(one_gram_num, total_gram);

        printf("Using One : %d\n", use_one);

        total_gram = temp_gram;
    }

    if(total_gram > 0)
    {
        printf("Calculate Impossible!!!!\n");
    }
    
    return 0;
}