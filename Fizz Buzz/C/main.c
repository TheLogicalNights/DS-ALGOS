/*
    Fizz and Buzz refer to any number that's a multiple of 3 and 5 respectively. In other words, if a number is divisible
    by 3, it is substituted with ﬁzz; if a number is divisible by 5, it is substituted with buzz. If a number is simultaneously
    a multiple of 3 AND 5, the number is replaced with "ﬁzz buzz." In essence, it emulates the famous children game
    "ﬁzz buzz"
*/

#include "header.h"
#include "helper.c"
int main()
{
    int iNo = 0;

    printf("Enter a number\n");
    scanf("%d",&iNo);

    fizzBuzz(iNo);

    return 0;
}