// Program to Sort elements in an array in Ascending Order(Using 3 functions) @Sreeraj Sreekumar 
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

void disp(int a[],int *pos) {                       // Function to Display Elements
    printf("Array elements: \n");
    for(int i = 0; i <= *pos; i++) {
        printf("%d\t",a[i]);
    }
    printf("\n");
}

void sort(int a[],int *pos) {                       // Function to sort in Ascending Order
    int temp;
    for(int i = 0; i < *pos; i++) {
        for(int j = 0; j < *pos - i; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int ch,val,s,pos = -1;
    printf("Enter size of Array:\n");
    scanf("%d",&s);
    int a[s];
    while (1) {
        printf("Enter choice: \n1. Insert\n2. Display\n3. Sort\n4. Exit\n");
        scanf("%d",&ch);
        switch (ch) {
            case 1: 
                printf("Enter value to Insert: \n");
                scanf("%d",&val);
                read(a,s,&pos,val);
                break;
            case 2:
                disp(a,&pos);
                break;
            case 3: 
                sort(a,&pos);
                break;
            case 4:
                printf("Exiting Program\n");
                exit(0);
            default:
                printf("Invalid Choice\n");
                break;
        }
    }
    return 0;
}