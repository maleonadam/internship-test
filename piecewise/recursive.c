#include <stdio.h>

int F(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
        return F(F(n - 3)) * 3 + F(n - 2);
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("F(%d) = %d\n", n, F(n));
    
    return 0;
}
