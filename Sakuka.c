#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);  // Number of games

    while (t--) {
        scanf("%d", &n);
        
        int x = 0;          // Start position
        int i = 1;          // Move count
        int lastPlayer = 0; // 0 for Sakurako, 1 for Kosuke
        
        while (1) {
            int move = 2 * i - 1;
            
            if (lastPlayer == 0) {
                x -= move;  // Sakurako's move (negative direction)
                lastPlayer = 1;
            } else {
                x += move;  // Kosuke's move (positive direction)
                lastPlayer = 0;
            }
            
            if (x < -n || x > n) {
                break;
            }
            
            i++;
        }
        
        if (lastPlayer == 1) {
            printf("Sakurako\n");  // Sakurako made the last move
        } else {
            printf("Kosuke\n");    // Kosuke made the last move
        }
    }

    return 0;
}
