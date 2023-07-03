#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    struct Node* left;
    struct Node* right;
} Node;

Node* makeFunc(int value)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int evaluateNode(Node* node)
{
    if (node == NULL)
        return 0;

    int leftValue = evaluateNode(node->left);
    int rightValue = evaluateNode(node->right);

    if (node->value == 0)
        return leftValue + rightValue;
    else if (node->value == 1)
        return leftValue * rightValue;
    else if (node->value == 2)
        return leftValue - rightValue;
    else if (node->value == 3)
        return leftValue / rightValue;

    return node->value;
}

int fibonacci(int n)
{
    if (n <= 0)
        return 0;

    int* memo = (int*)malloc((n + 1) * sizeof(int));

    memo[0] = 0;
    memo[1] = 1;

    for (int i = 2; i <= n; i++)
        memo[i] = memo[i - 1] + memo[i - 2];

    int result = memo[n];
    free(memo);

    return result;
}

void calc(Node* node)
{
    int result = evaluateNode(node);
    printf("Result: %d\n", result);
}

int main()
{
    Node* add = makeFunc(0);
    add->left = makeFunc(10);
    add->right = makeFunc(6);

    Node* mul = makeFunc(1);
    mul->left = makeFunc(5);
    mul->right = makeFunc(4);

    Node* sub = makeFunc(2);
    sub->left = add;
    sub->right = mul;

    Node* fibo = makeFunc(2);
    fibo->left = makeFunc(abs(sub->value));
    fibo->right = NULL;

    calc(add);
    calc(mul);
    calc(sub);
    calc(fibo);

    free(add->left);
    free(add->right);
    free(mul->left);
    free(mul->right);
    free(sub);
    free(fibo);

    return 0;
}
