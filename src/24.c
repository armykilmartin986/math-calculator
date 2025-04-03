#include <stdio.h>

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    
    if (x > y) {
        for (int i = y; i >= x; i--) {
            printf("%d ", i);
        }
    } else {
        for (int i = x; i >= y; i--) {
            printf("%d ", i);
        }
    }

    return 0;
}
