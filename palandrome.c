#include <stdio.h>
#include <string.h>
int main() {
   char a[50];
   int i, flag=0;
   printf("\nEnter a number or word: ");
   scanf("%s",a);
   for(i=0; i<((strlen(a))/2); i++) {
     if (a[i]!=a[strlen(a)-1-i])
    {
       printf("\nNot a palindrome");
       flag=1;	
       break;
       }
  
   }
  if(flag=0) {printf("\npalindrome");}
}
