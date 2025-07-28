// Program demonstrating the use of several storage classes in C @Sreeraj Sreekumar 
// Local Variale, Global variable, Static Variable, Register Variable
// 26th July 2027

#include <stdio.h>

// Global Variable
int globalVar = 10;

void storageClass() {
    int localVar = 5;               // Local Variable
    static int var = 1;             // Global Variable
    register int regVar = 2;        // Register Variable
    localVar++;
    var++;
    regVar++;
    globalVar++;
    printf("Value of Local Variable: %d\n",localVar);
    printf("Value of Register Variable: %d\n",regVar);
    printf("Value of Static Variable: %d\n",var);
    printf("Value of Global Variable: %d\n",globalVar);
}

int main() {
    printf("Initial Value of Global Variable: %d\n",globalVar);
    for (int i = 0; i < 3; i++) {
        printf("Call %d to function\n",i+1);
        storageClass();
    }
    printf("Final value of Global Variable: %d\n",globalVar);
    return 0;
}