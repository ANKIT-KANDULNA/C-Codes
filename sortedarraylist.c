#include <stdio.h>
void displayMenu() {
    printf("\nMenu:\n");
    printf("1. Insert x\n");
    printf("2. Delete x\n");
    printf("3. Search x\n");
    printf("4. Update x with new value y\n");
    printf("5. Display list\n");
    printf("6. Exit\n");
}
void insertElement(int arr[], int *size, int x) {
    int i;
    for (i = *size - 1; i >= 0 && arr[i] > x; i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = x;
    (*size)++;
    printf("%d inserted successfully.\n", x);
}
void deleteElement(int arr[], int *size, int x) {
    int i;
    for (i = 0; i < *size && arr[i] != x; i++);
    
    if (i < *size) {
        for (int j = i; j < *size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        (*size)--;
        printf("%d deleted successfully.\n", x);
    } else {
        printf("%d not found in the list.\n", x);
    }
}
void searchElement(int arr[], int size, int x) {
    int i;
    for (i = 0; i < size && arr[i] != x; i++);
    if (i < size) {
        printf("%d found at index %d.\n", x, i);
    } else {
        printf("%d not found in the list.\n", x);
    }
}
void updateElement(int arr[], int size, int x, int y) {
    int i;
    for (i = 0; i < size && arr[i] != x; i++);
    
    if (i < size) {
        arr[i] = y;
        printf("%d updated to %d successfully.\n", x, y);
    } else {
        printf("%d not found in the list.\n", x);
    }
}
void displayList(int arr[], int size) {
    printf("List: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[100];
    int size = 0;
    int choice, x, y;
    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number to insert: ");
                scanf("%d", &x);
                insertElement(arr, &size, x);
                break;
            case 2:
                printf("Enter the number to delete: ");
                scanf("%d", &x);
                deleteElement(arr, &size, x);
                break;
            case 3:
                printf("Enter the number to search: ");
                scanf("%d", &x);
                searchElement(arr, size, x);
                break;
            case 4:
                printf("Enter the number to update: ");
                scanf("%d", &x);
                printf("Enter the new value: ");
                scanf("%d", &y);
                updateElement(arr, size, x, y);
                break;
            case 5:
                displayList(arr, size);
                break;
            case 6:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 6);
    return 0;
}