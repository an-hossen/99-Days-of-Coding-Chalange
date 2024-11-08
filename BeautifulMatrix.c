//https://codeforces.com/problemset/problem/263/A

#include<stdio.h>
#include<stdlib.h>
int main() {

    int mat[5][5],i,j,x,y;

    for( i = 0; i<5; i++) {

        for( j = 0; j<5; j++) {

            scanf("%d",&mat[i][j]);

            if(mat[i][j]==1) {

               x=i;
               y=j;
            }
        }
    }
    
    printf("%d\n",abs(x-2) + abs(y-2));

    return 0;
}