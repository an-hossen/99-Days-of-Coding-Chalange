//https://codeforces.com/problemset/problem/158/A

#include<stdio.h>
int main() {
    
    int n,k,i,s[101],count = 0;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++) {
        
       scanf("%d",&s[i]);
    }
    for(i=1;i<=n;i++) {
            if(s[i]>=s[k] && s[i]>0) {
                count++;
            }
        }
        printf("%d\n",count);
        return 0;
    }