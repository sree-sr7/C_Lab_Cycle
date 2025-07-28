// Program to Reverse a String using Stack @Sreeraj Sreekumar
// 28th July 2025

#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    if (top < MAX - 1)
        stack[++top] = c;
    else
        printf("Stack Overflow\n");
}

char pop() {
    if (top >= 0)
        return stack[top--];
    else {
        printf("Stack Underflow\n");
        return '\0';
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);                                   // Doesn't handle spaces
    for (int i = 0; i < strlen(str); i++) {
        push(str[i]);
    }
    printf("Reversed string: ");
    while (top != -1) {
        printf("%c", pop());
    }
    printf("\n");
    return 0;
}
