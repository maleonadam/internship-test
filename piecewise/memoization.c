#include <stdio.h>

#define MAX_SIZE 1000
int memo[MAX_SIZE];

int F(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else if (memo[n] != -1)
        return memo[n];
    else {
        memo[n] = F(F(n - 3)) * 3 + F(n - 2);
        return memo[n];
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = 0; i < MAX_SIZE; i++)
        memo[i] = -1;
    
    printf("F(%d) = %d\n", n, F(n));
    
    return 0;
}
