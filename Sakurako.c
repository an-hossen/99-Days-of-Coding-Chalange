//https://codeforces.com/contest/2033/submission/289388949

#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        
        int x = 0;
        int i = 1;
        int lastPlayer = 0;
        
        while (1) {
            int move = 2 * i - 1;
            
            if (lastPlayer == 0) {
                x -= move;
                lastPlayer = 1;
            } else {
                x += move;
                lastPlayer = 0;
            }
            
            if (x < -n || x > n) {
                break;
            }
            
            i++;
        }
        
        if (lastPlayer == 1) {
            printf("Sakurako\n");
        } else {
            printf("Kosuke\n");
        }
    }

    return 0;
}