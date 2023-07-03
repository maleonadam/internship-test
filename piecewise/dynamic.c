#include <stdio.h>

#define MAX_SIZE 1000
int dp[MAX_SIZE];

int F(int n) {
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++)
        dp[i] = F(F(i - 3)) * 3 + F(i - 2);

    return dp[n];
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("F(%d) = %d\n", n, F(n));
    
    return 0;
}
