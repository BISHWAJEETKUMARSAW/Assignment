/*
// w.a.p to print Hello Student in the screen
#include<stdio.h>
using namespace std;
int main()
{
printf("Hello Student");
    return 0;
}

//w.a.p to print Hello  in the first line and Student in the 
second line  
#include<stdio.h>
//using namespace std;
int  main()
{
printf("Hello\n");
printf("Student");
    
}

//w.a.p to print "MySirG" on the screen(remember to print in double quates )
#include<stdio.h>
int main()
{
    char quate='"';
    printf("\"MySirG\"");
    return 0;
}

// w.a.p to find area of the circle.Take the radius from the user
//as input and print the result in below given format .
    EXPECTED OUTPUT FORMAT:-"Area of the circle is A having the 
    radius R". replace A with area and R with radius.

   #include<stdio.h>
   int main()
   {
    float area,rad;
    printf("Enter the radius of the circle:");
    scanf("%f",&rad);
    area=3.14*rad*rad;
    printf("\"The area of the circle is %f having the radius %f\"",area,rad);
   }
   
  //5.w.a.p to find length of the string using printf()function.
  #include<stdio.h>
  int main()
  {
  int n=printf("Hello");
  printf("\n");
  printf("Length of the String is:%d",n);
  }
  
 6.w.a.p to print the name of the user in double quates.
 
#include<stdio.h>
int main()
{
    printf("\"Bishwajeet\"");
}

7.W.a.p to print "%d" in the screen.

#include<stdio.h>
int main()
{
    printf("\"%%d\"");
}
8.W.a.p to print "\n" in  the screen

#include<stdio.h>
int main()
{
    printf("\"\\n\"");
}
9.w.a.p to print "\\" in the screen.
#include<stdio.h>
int main()
{
    printf("\" \\\\  \"");
}
10. WAP to take date as an input in below given format and 
convert the date format and display the result as given below.
    User Input date format – “DD/MM/YYYY” (27/11/2022)
    Output format–“Day–DD,Month–MM,Year–YYYY”
    (Day–27,Month–07,Year– 2022)

 #include<stdio.h>
 int main()
 {
 int day,month,year;
 printf("Enter day/month/year: ");
 scanf("%d/%d/%d",&day,&month,&year);

 printf(" Day-%d,Month-%d,Year-%d ",day,month,year);
  return 0;
 }
 11. WAP to take time as an input in below given format and convert the time format and display the result as given below.
     User Input date format – “HH:MM”
     Output format – “HH hour and MM Minute”
     Example –
     “11:25” converted to “11 Hour and 25 Minute”
 
 #include<stdio.h>
  int main()
  {
    int hour,min;
    printf("Enter time:");
    scanf("%d:%d",&hour,&min);
    printf("\"%d Hour and %d Minute\"",hour,min);
    return 0;
  }
  12. Find output of below code:
  
 #include<stdio.h>
int main()
{
int x = printf(“ineuron”);
printf(“%d”,x);
return 0;
}

  

 #include<stdio.h>
 int main()
 {
    int x=printf("ineuron");
    printf("\t");
    printf("%d",x);
    return 0;

 }
ans=7
*/