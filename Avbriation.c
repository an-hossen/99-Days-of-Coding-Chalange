#include<stdio.h>

#include<string.h>

int main() {
    int n,i;
    
    scanf("%d",&n);
    
    for( i = 0; i<n; i++) {
        
        char s[101];
        
        scanf("%s",s);
        
        int l = strlen(s);
        
        if(l>10) {
            
            printf("%c%d%c\n",s[0],l-2,s[l-1]);
        }
        
        else {
            printf("%s",s);
        }
    }
    return 0;

}