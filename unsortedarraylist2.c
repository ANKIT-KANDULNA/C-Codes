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
    arr[*size] = x;
    (*size)++;
}
void deleteElement(int arr[], int *size, int x) {
    int i;
    for (i = 0; i < *size; i++) {
        if (arr[i] == x) {
            for (int j = i; j < *size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            (*size)--;
            printf("%d deleted successfully.\n", x);
            return;
        }
    }
    printf("%d not found in the list.\n", x);
}
void searchElement(int arr[], int size, int x) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            printf("%d found at index %d.\n", x, i);
            return;
        }
    }
    printf("%d not found in the list.\n", x);
}
void updateElement(int arr[], int size, int x, int y) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            arr[i] = y;
            printf("%d updated to %d successfully.\n", x, y);
            return;
        }
    }
    printf("%d not found in the list.\n", x);
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