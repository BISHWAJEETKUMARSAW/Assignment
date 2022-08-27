/*
1. Write a program to print unit digit of a given number.

#include<stdio.h>
int main()
{
    int num,rem;
    printf("Enter a number");
    scanf("%d",&num);
    rem=num%10;
    printf("The unit digit of %d is %d",num,rem);
    return 0;
}

2. Write a program to print a given number without its last 
digit.

#include<stdio.h>
int main()
{
    int num,rev;
    printf("Enter a number:");
    scanf("%d",&num);
    rev=num/10;
    printf("%d without it's last digit is %d",num,rev);
    return 0;

}
3. Write a program to swap values of two int variables

#include<stdio.h>
int main()
{
    int a=5,b=10;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value of a=%d and b=%d: ",a,b);
    return 0;
}
4. Write a program to swap values of two int variables with 
using a third variable.

#include<stdio.h>
int main()
{
    int a=6,b=10,temp;
    printf("Before mswaping\n");
    printf("The value of a=%d and b=%d:",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapiing");
    printf("The value of a=%d and b=%d ",a,b);
    return 0;
}
5. Write a program to input a three-digit number and display 
the sum of the digits.

#include<stdio.h>
int main()
{
    int n,rem, num,sum=0;
    printf("Input a number:\n");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
    rem=n%10;
    sum=sum+rem;
    n=n/10;
    }
    printf("The value of the sum of %d is %d",num,sum);
    return 0;

}
6. Write a program which takes a character as an input and displays 
   its ASCII code.

#include<stdio.h>
int main()
{
    char ch;
    int code;
    printf("Enter a character\n");
    scanf("%c",&ch);
    printf("ASCII code of that %$c is %d ",ch,code);
    return 0;
}
7. Write a program to find the position of first 1 in LSB.

#include<stdio.h>
int main()
{
   int num=16,ncopy,ctr=0;
   while(num)
   {
    ncopy=num;
    
    ncopy=ncopy&1;
    ctr++;
    if(ncopy==1)
    break;
    
    num=num>>1;
   } 
   printf("First 1 is found at %d",ctr);
    return 0;
}
8. Write a program to check whether the given number is even 
or odd using a bitwise operator.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num&1==1)
    printf("%d is odd ",num);
    else
    printf("%d is even ");
    return 0;
}
9. Write a program to print size of an int, a float, a char 
and a double type variable.

#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;
     
     printf("size of a=%d\n",sizeof(a));
       printf("size of b=%d\n",sizeof(b));
         printf("size of c=%d\n",sizeof(c));
           printf("size of d=%ld\n",sizeof(d));
    return 0;

}
10. Write a program to make the last digit of a number stored in
 a variable as zero. (Example - if x=2345 then make it x=2340)

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    num=num/10;
    num=num*10;
    printf("The value of num=%d",num);

    return 0;

}
11. Write a program to input a number from the user and also 
input a digit. Append a digit in the number and print the 
resulting number. 
(Example-number=234 and digit=9 then the resulting number is 2349)

#include<stdio.h>
int main()
{
    int num,append;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter a numer to be append :");
    scanf("%d",&append);
    num=num*10+append;
    printf("The number=%d,",num);
    return 0;
}
12. Assume price of 1 USD is INR 76.23. Write a program to take
    the amount in INR and convert it into USD.

#include<stdio.h>
int main()
{
    int inr;
    double usd;
    printf("Enter the amount in indian rupees: ");
    scanf("%d",&inr);
    usd=inr/76.23;
    printf("The equivalent usd=%lf",usd);
    return 0;
}
13. Write a program to take a three-digit number from the user and
     rotate its digits by one position towards the right.

#include<stdio.h>
int main()
{
    int num,rem,sum;
    printf("Enter a number:");
    scanf("%d",&num);
    
    rem=num%10;
     num=num/10;
     sum=rem*100+num;
     printf("The rotated number is=%d",sum);
    return 0;
}*/