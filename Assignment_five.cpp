/*
1. Write a program to print MySirG N times on the screen

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter numer of times mysirg has to be printed:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("MysirG\n");
    }
    return 0;
}
   2. Write a program to print the first N natural numbers.

#include<stdio.h>
int main()
{
    int n, i=1;
    printf("Enter the number of term to be printed:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}
3. Write a program to print the first N natural numbers 
     in reverse order

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of terms to be printed:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}
4. Write a program to print the first N odd natural numbers

#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter the number of terms to be printed:");
    scanf("%d",&n);
    while(n>=i)
    {
      printf("%d\n",i);
      i=i+2;
    }
    return 0;
}
5. Write a program to print the first N odd natural
      numbers in reverse order.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms to be printed");
    scanf("%d",&n);
    while(n>=1)
    {
        printf("%d\n",n);
        n--;
    }
    return 0;
}
  6. Write a program to print the first N even natural numbers

#include<stdio.h>
int main()
{
    int i=2,n;
    printf("Enter the number of terms to be printed:");
    scanf("%d",&n);
    while(n>=i)
    {
        printf("%d\n",i);
        i=i+2;
    }
    return 0;
}
7. Write a program to print the first N even natural numbers in
     reverse order

#include<stdio.h>
int main()
{
    int n,i=2;
    printf("Enter the number of terms to be printed: ");
    scanf("%d",&n);
    while(n>=2)
    {
        printf("%d\n",n);
        n=n-2;
    }
    return 0;
}
  8. Write a program to print squares of the first N natural
       numbers

    #include<stdio.h>
    int main()
    {
        int n,i;
        printf("Enter the number of terms to be printed:");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
         printf("%d\n",i*i);
        }
        return 0;

    }
      9. Write a program to print cubes of the first N natural numbers
    
   #include<stdio.h>
   int main()
   {
    int i,n;
    printf("Enter the number of terms to be printed:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i*i*i);
    }
    return 0;
   }
   10. Write a program to print a table of N.
   */
  #include<stdio.h>
  int main()
  {
    int i,n;
    printf("Enter the number whose table to be printed:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d\n",n*i);
    }
    return 0;
  }