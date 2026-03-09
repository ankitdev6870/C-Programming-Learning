#include <stdio.h>

int main()
{
    int a;
    printf("Enter your marks:");
    scanf("%d",&a);
    
   if(a>=90)
   printf("Grade=A+",a);
   
   else if(a>=80)
  printf("Grade=A",a);
  
  else if(a>=70)
  printf("Grade=B+",a);
  
   else if(a>=60)
  printf("Grade=B",a);
  
   else if(a>=50)
  printf("Grade=C+",a);
  
   else if(a>=40)
  printf("Grade=C",a);
  
   else if(a>=35)
  printf("Grade=D",a);
  
   else 
  printf("Grade=NG",a);
    
    return 0;
}