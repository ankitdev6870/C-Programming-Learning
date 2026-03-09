#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    
    if(a>50)
    printf("Greater number");
    else
    printf("Less number");
    
    return 0;
}