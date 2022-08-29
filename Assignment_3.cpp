/*
1. Write a program to check whether a given number is 
   positive or non-positive.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num<=0)
    printf("%d is non-positive",num);
    else 
    printf("%d is positive",num);
    return 0;

}
2. Write a program to check whether a given number is divisible
    by 5 or not
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num%5==0)
    printf("%d is divisible by 5",num);
    else 
    printf("%d is not divisible by 5",num);

    return 0;

}
3. Write a program to check whether a given number is an even
    number or an odd number.
#include<stdio.h>
int main()
{
    int num,n;
    printf("Enter a number :");
    scanf("%d",&num);
    n=num&1;
    if(n==1)
    printf("%d is odd number",num);
    else
    printf("%d is even number",num);
    return 0;
}
4. Write a program to check whether a given number is an even 
   number or an odd number without using % operator.

#include<stdio.h>
int main()
{
    int num,res;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num%2==0)
    printf("%d is even number",num);
    else
    printf("%d is odd number",num);
    return 0;
}
5. Write a program to check whether a given number is a 
    three-digit number or not.

#include<stdio.h>
int main()
{
    int ctr=0,num;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num)
    {
     num=num/10;
     ctr++;
    }
    if(ctr==3)
    printf("it is a three digit number");
    else
    printf("it is not a three digit number");

    return 0;
}

6. Write a program to print greater between two numbers. 
   Print one number of both are the same.

#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a:");
    scanf("%d",&a);
     printf("enter the value of b:");
    scanf("%d",&b);
    if(a==b)
    printf("both the numbers are same");
    else
    {
        if(a>b)
        printf("%d is greater than %d",a,b);
        else
        printf("%d is greater than %d",b,a);
    }

    return 0;
}
7. Write a program to check whether roots of a given quadratic 
   equation are real & distinct, real & equal or imaginary roots.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);
        if((b*b-4*a*c)>0)
           printf("Root is real and distinct");
         else if((b*b-4*a*c)==0)
         printf("Roots are real and equal");
         else
         printf("Roots are imaginary");

    return 0;

}
  8. Write a program to check whether a given year is a leap year 
      or not.

 #include<stdio.h>
  int main()
  {
   int year;
   printf("Enter a year:");
   scanf("%d",&year);
   if(year%400==0)
    printf("%d is a leap year",year);
    else
    {
        if(year%4==0)
        printf("%d is a leap year",year);
        else
        printf("%d is not aleap year",year);
    } 

    return 0;

  }
  9. Write a program to find the greatest among three given
      numbers.Print number once if the greatest number appears 
       two or three times.
  
 #include<stdio.h>
 int main()
 {
    int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
     printf("Enter second number:");
    scanf("%d",&b);
     printf("Enter third number:");
    scanf("%d",&c);
    if(a==b && a==c)
    printf("All are equel");
    else if(a==b)
    {
        if(a>c)
        printf("%d is greatest ,a");
        else
        printf("%d is greatest",c);
    }
    else
    {
        if(a>b)
        {
            if(a>c)
            printf("%d is greatest",a);
            else
            printf("%d is greatest",c);
        }
        else
        {
            if(b>c)
            printf("%d is greatest",b);
        }
    }

    return 0;
 }

 10. Write a program which takes the cost price and selling price 
     of a product from the user. Now calculate and print 
     profit or loss percentage.
 
#include<stdio.h>
 int main()
 {
    float cp,sp ,profit_percentage,loss_percentage;
    printf("Enter cost price:");
    scanf("%f",&cp);
     printf("Enter selling price:");
    scanf("%f",&sp);
    if(cp>sp)
    {
        loss_percentage=((cp-sp)/cp)*100;
        printf("loss percentage is %.2f",loss_percentage);
    }
    else
    {
     profit_percentage=((sp-cp)/cp)*100;
     printf("profit percentage is %.2f%",profit_percentage);
    }
    return 0;

 }
 11. Write a program to take marks of 5 subjects from the user.
     Assume marks are given out of 100 and passing marks is 33. 
     Now display whether the candidate passed the examination
      or failed.
 
#include<stdio.h>
int main()
{
    int maths,eng,phy,chem,comp;
    printf("Enter the marks of Mathematics:");
    scanf("%d",&maths);
     printf("Enter the marks of English:");
    scanf("%d",&eng);
     printf("Enter the marks of Physics:");
    scanf("%d",&phy);
     printf("Enter the marks of Chemistry");
    scanf("%d",&chem);
     printf("Enter the marks of computer:");
    scanf("%d",&comp);
    if(maths>=33 && phy>=33 && chem>=33 && eng>=33 && comp>=33)
    printf("Student is pass");
    else
    printf("Student is fail");
    return 0;
}
12. Write a program to check whether a given alphabet is in
      uppercase or lowercase.

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    printf("character is in uppercase");
    else
    {
        if(ch>='a' && ch<='z')
        printf("character is in lowercase");
    }
    return 0;
}
13. Write a program to check whether a given number is 
    divisible by 3 and divisible by 2.

  #include<stdio.h>
  int main()
  {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num%2==0 && num%3==0)
    printf("%d is divisible by 2 and 3",num);
    else
     printf("%d is not divisible by 2 and 3",num);
    return 0;
  }
  14. Write a program to check whether a given number is 
       divisible by 7 or divisible by 3.
  
 #include<stdio.h>
 int main()
 {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num%3==0)
    {
        if(num%7==0)
        printf("%d is divisible by 3 and 7 both",num);
        else
        printf("%d is divisible by 3 only",num);
    }
    
    else 
    printf("%d is neither divisible by 3 nor divisible by 7",num);
    return 0;
 }
 15. Write a program to check whether a given number is positive,
       negative or zero.
 
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>0)
    printf("it is psitive");
    else
    {
        if(num<0)
        printf("it is negative");
        else
        printf("it is zero");
    }
    return 0;
}
16. Write a program to check whether a given character is an 
    alphabet (uppercase), an alphabet (lower case), a digit or a 
    special character.

#include<stdio.h>
   int main()
   {
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>=48 && ch<=57) // 0-48  9-57
    printf("It is a digit");
    else 
    {
        if(ch>=65 && ch<=90)   // A-65     Z-90
        printf(" It is in uppercase.");
        else if(ch>=97 && ch<=122)   // a-97   z-122
        printf("it is in lowercase.");
        else 
        printf("it is special character.");
    }

    return 0;
   }

   17. Write a program which takes the length of the sides of 
       a triangle as an input.Display whether the triangle is
        valid or not.
   
  #include<stdio.h>
  int main()
  {
    int a,b,c;
    printf("Enter the  first side of the triangle");
    scanf("%d",&a);
    printf("Enter the  second side of the triangle");
    scanf("%d",&b);
    printf("Enter the  third side of the triangle");
    scanf("%d",&c);
    if(a<b+c && b<a+c && c<a+b)
    printf("it is a triangle.");
    else 
    printf("it is not a triangle");
    return 0;
  }
  18. Write a program which takes the month number as an input and display number of days in
        that month.
  
 #include<stdio.h>
    int main()
    {
       int num;
       printf("Enter month number between (1-12)");
       scanf("%d",&num);
       if(num==1)
       printf("January\n");
       else if(num==2)
       printf("February\n");
        else if(num==3)
       printf("March\n");
        else if(num==4)
       printf("April\n");
        else if(num==5)
       printf("May\n");
        else if(num==6)
       printf("june\n");
        else if(num==7)
       printf("july\n");
        else if(num==8)
       printf("August\n");
        else if(num==9)
       printf("September\n");
        else if(num==10)
       printf("October\n");
        else if(num==11)
       printf("November\n");
       else
       printf("December");
        return 0;
    }*/