/*
1. Write a program to find the Nth term of the Fibonnaci series.

#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,i;
    printf("number of terms of the Fibonnaci series:");
    scanf("%d",&n);
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("\n the nth term be is %d",c);
    return 0;
}
    2. Write a program to print first N terms of Fibonacci series

    #include<stdio.h>
    int main()
    {
        int a=0,b=1,c,n,i;
         printf("The number of terms of the fibonnaci series:");
         scanf("%d",&n);
         printf("The fibbonaci series be:");
         printf("0\t1");
         for(i=1;i<=n-2;i++)
         {
            c=a+b;
            printf("\t %d",c);
            a=b;
            b=c;

         }        
         return 0;
    }
    3. Write a program to check whether a given number is there in the Fibonacci
       series or not.
    
   #include<stdio.h>
   int main()
   {
    int a=0,b=1,c,i,n,ctr=0,key;
    printf("number of terms in  the fibonacci series: ");
    scanf("%d",&n);
    printf("Enter the element to be serched:");
    scanf("%d",&key);
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        if(c==key)
          ctr++;
          a=b;
          b=c;
    }
        if(ctr>0)
        printf("The given element is in the fibonacci series ");
        else
        printf("It is not present in the fibonacci series");
       return 0;
   }
    4. Write a program to calculate HCF of two numbers
   
        #include<stdio.h>
        int main()
        {
            
             int i,a,b,lcm,lim,hcf=0;
             printf("Enter first number: ");
             scanf("%d",&a);
             printf("Enter second number:");
             scanf("%d",&b);
             lim=(a>b)?b:a;
             for(i=1;i<=lim;i++)
             {
                if((a%i==0) && (b%i==0))
                {
                    
                  hcf=i;
                }
             }
                
                
                
                 printf("Hcf of two numbers is %d",hcf);
            return 0;
        }
        5. Write a program to check whether two given numbers are co-prime
           numbers or not
        // two numbers are said to be co prime if their gcd is 1
        
       #include<stdio.h>
       int main()
       {
        int hcf,a,b,i,min;
        printf("Enter a number ");
        scanf("%d",&a);
        printf("Enter a number ");
        scanf("%d",&b);
        min=(a>b)?b:a;
        for(i=1;i<=min;i++)
        {
            if((a%i==0) && (b%i==0))
              hcf=i;
        }
        if(hcf==1)
         printf("It is co-prime");
         else
         printf("It is not co-prime");
        return 0;
       }
       6. Write a program to print all Prime numbers under 100
       
      #include<stdio.h>
        int main()
        {
            int n,i,ctr=0;
            printf("Enter a number:");
            scanf("%d",&n);
            for(i=2;i<=n/2;i++)
            {
                if(n%i==0)
                ctr++;
            }
            if(ctr>0)
            printf("%d is not prime ",n);
            else
            printf("%d is  prime",n);
            return 0;
        }
        7. Write a program to print all Prime numbers between two given numbers.
        
       #include<stdio.h>
       int main()
       {
        int i,n,ctr=0;
        
        for(n=2;n<=100;n++)
        {     
            ctr=0;
            for(i=2;i<=n/2;i++)
            {
                if(n%i==0)
                {
                ctr++;
                break;
                }
            
            }
            if(ctr==0)
            printf(" %d ",n);
            
        }
        return 0;
       }
       7. Write a program to print all Prime numbers between two given numbers.
       
      #include<stdio.h>
        int main()
        {
            int a,b,ctr=0,i,j;
            printf("Enter first number:");
            scanf("%d",&a);
             printf("Enter second number:");
            scanf("%d",&b);
            for(i=a;i<=b;i++)
            {
                ctr=0;
                for(j=2;j<=a/2;j++)
                {
                    if(i%j==0)
                    {
                        ctr++;
                        break;
                    }
                }
                if(ctr==0)
                printf("%d ",i);                    
            }

            return 0;
        }
        8. Write a program to find next Prime number of a given number.
        
        #include<stdio.h>
        int main()
        {
            int a,i,j,ctr=0;
            printf("enter a number: ");
            scanf("%d",&a);
            for(i=a+1;i<=i*2;i++)
               {
                ctr=0;
                for(j=2;j<=i/2;j++)
                {
                     if(i%j==0)
                     {
                         ctr++;
                         break;
                     }                        
                }
                if(ctr==0)
                  {
                  
                    break;
                  }
               }

                 printf("%d ",i);
            return 0;
        }
    9. Write a program to check whether a given number is an Armstrong number
        or not
        
       #include<stdio.h>
       #include<math.h>
         int main()
         {
            int n ,num,ncopy,sum=0,rem ,ctr=0;
            printf("Enter a number: ");
            scanf("%d",&n);
            num=n;
            ncopy=num;
               while(n)
               {
                ctr++;
                n=n/10;
               }
               while(num)
               {
                rem=num%10;
                sum=sum+pow(rem,ctr);
                num=num/10;
               }
               
                if(ncopy==sum)
                printf("%d is armstrong number",ncopy);
                else
                printf("%d is not armstrong number ",ncopy);
            return 0;
         }
            10. Write a program to print all Armstrong numbers under 1000
         */
            #include<stdio.h>
            #include<math.h>
               int main()
               {
                int n,i,sum=0,rem,ctr=0,m;
                
                for(i=1;i<=1000;i++)
                {
                    n=i;
                    m=i;
            
                    while(m)
                    {
                        ctr++;
                        m=m/10;
                    
                    }
                    while(n)
                    {
                        rem=n%10;
                        sum=sum+pow(rem,ctr);
                        n=n/10;
                    }
                    ctr=0;
                    if(sum==i)
                    printf("%d ",i);
                    sum=0;
                }
                return 0;
               }