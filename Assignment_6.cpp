/*
1. Write a program to calculate sum of first N natural numbers.

  #include<stdio.h>
    
    int main()
    {
        int sum=0,n;
        printf("Enter the number of trms to be printed:");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            sum=sum+i;
        }
        printf("Sum of the number is %d",sum);
        return 0;
    }
    2. Write a program to calculate sum of first N even natural numbers
   
  #include<stdio.h>
    int main()
    {
        int sum=0,n;
        printf("Enter the number of terms to be printed");
//scanf("%d",&n);
     scanf("%d",&n);
        for(int i=2;i<=n;i=i+2)
        {
            sum=sum+i;
        }
        
            printf("Sum of first even natural number is %d",sum);
           
        return 0;
    }
    
    3. Write a program to calculate sum of first N odd natural numbers.
    
   #include<stdio.h>
   int main()
   {
    int n,sum=0;
    printf("Enter the number of terms whose sum is to be printed:");
    scanf("%d",&n);
       for(int i=1;i<=n;i=i+2)
       {
        sum=sum+i;
       
       }
        printf("Sum of n odd natural number is %d",sum);
    return 0;
   }
        4. Write a program to calculate sum of squares of first N natural numbers
   
  #include<stdio.h>
  int main()
  {
    int n,sum=0;
    printf("Enter the number of terms whose sum is to be printed:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       sum=sum+i*i;
    }
    printf("Sum of squares of first n natural numbr is %d",sum);
    return 0;
  }
      5. Write a program to calculate sum of cubes of first N natural numbers
  
     #include<stdio.h>
     int main()
     {
        int n,sum=0;
        printf("Enter the number of terms whose sum is to be printed:");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            sum=sum+i*i*i;
        }
        printf("Sum of the cubes of n natural number is %d",sum);
        return 0;
     }
        6. Write a program to calculate factorial of a number

     
    #include<stdio.h>
      int main()
      {
        int fact=1,num;
        printf("Enput a number whose factorial is to be found:");
        scanf("%d",&num);
        for(int i=1; i<=num;i++)
        {
            fact=fact*i;

        }
        printf("Factorisl of %d=%d",num,fact);
        return 0;

      }

    7. Write a program to count digits in a given number

    #include<stdio.h>
        int main()
        {
            int num,ctr=0;
            printf("Enter a number: ");
            scanf("%d",&num);
            while(num)
            {
                num=num/10;
                ctr++;
            }
            printf("number of digit in the given number=%d",ctr);
            return 0;
        }
        8. Write a program to check whether a given number is a Prime number or not

        #include<stdio.h>
        int main()
        {
            int num,ctr=0;
            printf("Enter a number:");
            scanf("%d",&num);
            for(int i=2;i<=num/2;i++)
            {
                if(num%i==0)
                ctr++;
                
            }
                if(ctr>0)
                printf("number is not prime");
                else
                printf("number is  prime");
            return 0;
        }
        
       9. Write a program to calculate LCM of two numbers.
       
       #include<stdio.h>
       int main()
       {
        int a,b,i;
        printf("Enter two numbers:");
        //scanf("%d",&a);
        scanf("%d%d",&a,&b);
        for( i=1;i<=a*b;i++)
        {
            if((i%a==0) && (i%b==0))
            break;
        }
        printf("Lcm of a and b is %d",i);
        return 0;
       }

       10. Write a program to reverse a given number.
    
   
   #include<stdio.h>
   #include<math.h>
   int main()
   {
     int num,rev=0,rem;
     printf("Enter a number:");
     scanf("%d",&num);
    
     
     while(num)
     {
        rem=num%10;
        rev=rev*10+rem;
       num=num/10;
     }
     printf("\n The reversed number is %d ",rev);


    return 0;
   }
*/      

