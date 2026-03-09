#include <stdio.h>

int main()
{
    char a;
    printf("Enter character:");
    scanf("%c",&a);
    
  if(a >= 'A' && a <= 'Z')
    printf("Uppercase");
else
    printf("Lowercase");
    
    return 0;
}