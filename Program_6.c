// Program to Display elements in an array using Recursion @Sreeraj Sreekumar 
//28th July 2025

#include <stdio.h>
#include <stdlib.h>                                 // Library Function for exit(0);

void read(int a[],int s,int *pos,int val) {         // Function to Read Elements
    if(*pos + 1 >= s) {
        printf("Array is full\n");
        return;
    }
    ++(*pos);
    a[*pos] = val;
    printf("Inserted %d successfully\n",val);
}

void dispRec(int a[], int index, int pos) {                       // Function to Display Elements in Recursive Manner
    if(index > pos) {
        return;
    }
    printf("%d\t",a[index]);
    dispRec(a, index + 1, pos);
}

int main() {
    int ch,val,s,pos = -1;
    printf("Enter size of Array:\n");
    scanf("%d",&s);
    int a[s];
    while (1) {
        printf("Enter choice: \n1. Insert\n2. Recursive Display\n3. Exit\n");
        scanf("%d",&ch);
        switch (ch) {
            case 1: 
                printf("Enter value to Insert: \n");
                scanf("%d",&val);
                read(a,s,&pos,val);
                break;
            case 2:
                if (pos == -1) {
                    printf("Array is Empty\n");
                } else {
                    printf("Array Elements displayed Recursively:\n");
                    dispRec(a,0,pos);
                    printf("\n");
                }
                break;
            case 3: 
                printf("Exiting Program\n");
                exit(0);
            default:
                printf("Invalid Choice\n");
                break;
        }
    }
    return 0;
}