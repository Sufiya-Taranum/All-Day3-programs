#include <stdio.h>
#include <assert.h>
#include "Day3_header.h"
#define AddNum(a,b) a+b
#define SquareNum(r) r*r;
#include <math.h>

int main()
{
    //int n;
    //n=convert_binary_to_decimal(1010);

   // n=convert_decimal_to_binary(10);

    //generate_sequence_of_numbers(7);
    //printf("%d",n);

    //generate_inverted_pattern(4);

    //generate_pattren_using_single_loop(4);

    //print_two_digit_number_sum_is_9();

    /*assert(print_power_of_number(2,4)==16);
    assert(print_power_of_number(16,2)==256);
    assert(print_power_of_number(2,0)==1); */

    /*assert(factorial(2)==2);
    assert(factorial(5)==120);
    assert(factorial(1)==1);  */

    /*float s;
    s=evaluation_of_expression(2,3);
    printf("%f",s); */

    /*int add=0;
    add=AddNum(5,8);
    printf("%d",add);*/

    /*int sq=0;
    sq=SquareNum(6);
    printf("%d",sq);*/

    int choice=-1,num,n,nl,x,m,l;
    printf("Enter a choice to perform mathematical operation\n");
    printf("1.Square Root \n 2.Natural log \n 3.log 10x \n 4.power(x,n) \n 5.cos(x)\n");
    scanf("%d",&choice);
    while(1)
    {
    switch(choice)
        {
            case 1: printf("Enter number to square root\n");
                    scanf("%d",&num);
                    printf("Square root is %lf",sqrt(num));


            case 2: printf("\n Enter number to calculate natural log of number\n");
                    scanf("%d",&n);
                    printf("Log of number is %lf",log(num));

            case 3: printf("\n Enter number to calculate log10 of number\n");
                    scanf("%d",&nl);
                    printf("Log 10 of number is %lf",log10(nl));

            case 4: printf("\n Enter two numbers to calculate power\n");
                    scanf("%d%d",&x,&m);
                    printf("power of number is %lf",pow(x,m));

            case 5: printf("\n Enter number to calculate cos of a number\n");
                    scanf("%d",&l);
                    printf("cos of number %lf",cos(l));
        }

    }
    return 0;
}
