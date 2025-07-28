// A menu driven program which has Insert, Search, Delete & Sort functions performed on an Array @Sreeraj Sreekumar 
// Using Local Variables
// 27th July 2025

#include <stdio.h>

void insertElement(int a[],int s,int val,int *pos) {         // Function to Insert values into the array
    if(*pos + 1 >= s) {
        printf("Array is full.\n");
        return;
    }
    ++(*pos);
    a[*pos] = val;
    printf("Succesfully inserted %d\n",val);
}

void searchElement(int a[],int val,int *pos) {              // Function to Search elements inside the array
    int found = 0;
    for(int i = 0; i <= *pos; i++) {
        if (a[i] == val) {
            printf("%d found at %d position\n",val,i);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("%d not found\n",val);
}

void deleteElement(int a[],int *pos,int val) {             // Function to Delete elements inside the array
    int found = 0;
    for(int i = 0; i <= *pos; i++) {
        if (a[i] == val) {
            found = 1;
            for(int j = i;j < *pos; j++) {
                a[j] = a[j + 1]; 
            }
            (*pos)--;
                break;  
        }
    }
    if(!found) {
        printf("%d not found\n",val);
    } else {
        printf("%d successfully deleted\n",val);
    }
}

void sortElements(int a[],int *pos) {                      //Function to Sort elements inside the array
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
    printf("Sorted array:\n");
    for (int i = 0; i <= *pos; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int s,ch,val,pos = -1;
    printf("Enter size of the array: ");
    scanf("%d",&s);
    int a[s];
    while (1) {
        printf("Enter your choice:\n1. Insert\n2. Search\n3. Delete\n4. Sort\n5. Exit\n");
        scanf("%d",&ch);
        switch (ch) {
            case 1: 
                printf("Enter value to Insert: ");
                scanf("%d",&val);
                insertElement(a,s,val,&pos);
                break;
            case 2:
                printf("Enter value to Search: ");
                scanf("%d",&val);
                searchElement(a,val,&pos);
                break;
            case 3:
                printf("Enter value to Delete: ");
                scanf("%d",&val);
                deleteElement(a,&pos,val);
                break;
            case 4:
                sortElements(a,&pos);
                break;
            case 5:
                printf("Exiting\n");
                return 0;
            default:
                printf("Enter a valid choice...\n");
        }
    }
    return 0;
}