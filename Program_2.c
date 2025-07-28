// A menu driven program which has Insert, Search, Delete & Sort functions performed on an Array @Sreeraj Sreekumar 
// Using Global Variables
// 26th July 2025

#include <stdio.h>
#define MAX 100

int arr[MAX],pos = -1;

void insertElement(int val) {           // Function to Insert elements into the Array
    if (pos >= MAX -1) {
        printf("Array is Full. Cannot Insert more elements\n");
        return;
    }
    ++pos;
    arr[pos] = val;
    printf("Successfully inserted %d at position: %d\n",val,pos);
}

void searchElement(int val) {            // Function to Search for elements in the Array
    int found = 0;    
    for(int i = 0; i <= pos; i++) {
        if(arr[i] == val) {
            printf("Element %d found at index %d\n",val,i);
            found = 1;
            break;
        }        
    }  
    if (!found) {
        printf("%d element not found in array\n",val);
    }
}

void deleteElement(int val) {
    int found = 0;
    for(int i =0; i < pos; i++) {
        if(arr[i] == val) {
            found = 1;
            for(int j = i; j < pos; j++) {
                arr[j] = arr[j + 1];
            }  
            pos--;
            break;  
        }          
    }
    if(!found) {
        printf("Element %d not found to be deleted.\n",val);
    } else {
        printf("%d successfully deleted.\n",val);
    }
}

void sortElements() {
    int temp;
    for(int i = 0; i <= pos; i++) {
        for(int j = 0; j < pos - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
        }
    }
}

int main() {
    int val,ch;
    while (1) {
        printf("1. Insert\n2. Delete\n3.Search\n4. Sort\n5. Exit\n");
        scanf("%d",&ch);
        switch (ch) {
            case 1: 
                printf("Enter value to insert: ");
                scanf("%d",&val);
                insertElement(val);
                break;
            case 2:
                printf("Enter element to delete: ");
                scanf("%d",&val);
                deleteElement(val);
                break;
            case 3:
                printf("Enter element to be searched for: ");
                scanf("%d",&val);
                searchElement(val);
                break;
            case 4:
                sortElements();
                printf("Array after sorting:\n");
                    for(int i = 0; i <= pos; i++) {
                        printf("%d\t",arr[i]);
                    }
                    printf("\n");
                    break;
            case 5: 
                printf("Exiting the Program.\n");
                return 0;
            default:
                    printf("Invalid Choice.\n");
        }
    }
    return 0;
}