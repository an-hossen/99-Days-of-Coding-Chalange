#include<stdio.h>

int main() {
    int n,i,count,solution=0;
    
    scanf("%d",&n);
    
    for( i = 0; i<n; i++) {
        
        int s[101],count = 0;
        
        for(int j=0;j<3;j++) {
            
            scanf("%d",&s[j]);
            
            if(s[j]==1) {
                
                count++;
            }
        }
        if(count>1) {
            solution++;
        }
    }
    printf("%d\n",solution);
    return 0;

}