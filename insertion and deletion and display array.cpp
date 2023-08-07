#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int array[MAX_SIZE];
    int n, pos, value;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    
    printf("Enter the position where the element should be inserted: ");
    scanf("%d", &pos);
    
    switch (pos) {
        case 1:
            // Insert element at the beginning of the array
            // Shift elements to the right
            for (int i = n - 1; i >= 0; i--) {
                array[i + 1] = array[i];
            }
            
            // Prompt for the value of the new element
            printf("Enter the value of the new element: ");
            scanf("%d", &value);
            
            // Assign the value to the specified position
            array[0] = value;
            
            // Increment the size of the array
            n++;
            
            printf("Element inserted successfully.\n");
            break;
        
        case 2:
            // Insert element at the end of the array
            // Prompt for the value of the new element
            printf("Enter the value of the new element: ");
            scanf("%d", &value);
            
            // Assign the value to the specified position
            array[n] = value;
            
            // Increment the size of the array
            n++;
            
            printf("Element inserted successfully.\n");
            break;
        
        default:
            if (pos >= 3 && pos <= n + 1) {
                // Insert element at the specified position
                // Shift elements to the right
                for (int i = n - 1; i >= pos - 1; i--) {
                    array[i + 1] = array[i];
                }
                
                // Prompt for the value of the new element
                printf("Enter the value of the new element: ");
                scanf("%d", &value);
                
                // Assign the value to the specified position
                array[pos - 1] = value;
                
                // Increment the size of the array
                n++;
                
                printf("Element inserted successfully.\n");
            } else {
                printf("Invalid position.\n");
            }
            break;
    }
    
    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    
    return 0;
}
