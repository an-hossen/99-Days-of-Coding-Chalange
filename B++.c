// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

int main() {
   int n,x = 0,i;
   
   scanf("%d",&n);
   
   for(i=0;i<n;i++) {
       
      char s[100];
      
      scanf("%s",&s);
      
      if(strstr(s,"++")) {
          
          x++;
      }
      
      else if(strstr(s,"--")) {
          
          x--;
      }
   }
   
   printf("%d\n",x);
   
    return 0;
}