// Program to find the occurances of an element in an array(positions) @Sreeraj Sreekumar
// 27th July 2025 

#include <stdio.h>

int main() {
    int s,val,found = 0,count = 0;
    printf("Enter the size of the array: ");
    scanf("%d",&s);
    int a[s];
    printf("Enter values into the array:\n");
    for(int i =0; i < s; i++) {
        scanf("%d",&a[i]);
    }
    printf("\nEnter value to find its occurance/s in the array: ");
    scanf("%d",&val);
    for(int i = 0; i < s; i++) {
        if(a[i] == val) {
            printf("Found %d at position %d\n",val,i);
            found = 1;
            count++;                                        // For keeping track of all the occurances of the element inside the array
        }
    }
    if(found) {
        printf("Element %d occurs %d times in the array",val,count);
    } else {
        printf("Element not found in array");
    }
    return 0;
}