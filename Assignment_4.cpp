/*
1. Write a program to print MySirG 5 times on the screen

#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=5;i++)
    {
    printf("MysirG\n");
    }
    return 0;
}
2. Write a program to print the first 10 natural numbers.

#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
3. Write a program to print the first 10 natural numbers
     in reverse order

#include<stdio.h>
int main()
{
   int i;
   for(i=10;i>=1;i--)
   {
    printf("%d\n",i);
   }
    return 0;
}

4. Write a program to print the first 10 odd natural numbers

#include<stdio.h>
 int main()
 {
    int i;
    for(i=1;i<=20;i=i+2)
    {
        printf("%d\n",i);
    }
    return 0;
 }
 5. Write a program to print the first 10 odd natural numbers 
      in reverse order.
 
#include<stdio.h>
   int main()
   {
    int i;
    for(i=19;i>=1;i--)
    {
        printf("%d\n",i);
    }
    return 0;
   }
   6. Write a program to print the first 10 even natural numbers
   
  #include<stdio.h>
  int main()
  {
    int i;
    for(i=2;i<=20;i=i+2)
    {
        printf("%d\n",i);
    }
    return 0;
  }
  7. Write a program to print the first 10 even natural numbers
       in reverse order
  
 #include<stdio.h>
 int main()
 {
    int i;
    for(i=20;i>=2;i=i-2)
    {
        printf("%d\n",i);
    }
    return 0;
 }
 8. Write a program to print squares of the first 10 
       natural numbers
 
    #include<stdio.h>
    int main()
    {
        int i=1;
        while(i<=10)
        {
            printf("%d\n",i*i);
            i++;
        }
        return 0;
    }
    9. Write a program to print cubes of the first 
        10 natural numbers
    
   #include<stdio.h>
   int main()
   {
    int i=1;
   while(i<=10)
   {
    printf("%d\n",i*i*i);
    i++;
   }
    return 0;
   }
   10. Write a program to print a table of 5.
   */
  #include<stdio.h>
  int main()
  {
    int i=1;
    while(i<=10)
    {
        printf("%d\n",5*i);
        i++;
    }
    return 0;
  }