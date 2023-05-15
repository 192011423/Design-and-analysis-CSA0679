#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int numList[MAX_SIZE];
    int n, num, pos, i;
    
    printf("Enter the number of elements in the list (up to %d): ", MAX_SIZE);
    scanf("%d", &n);
    
    printf("Enter the list elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &numList[i]);
    }
    
    printf("Enter the number to insert: ");
    scanf("%d", &num);
    
    printf("Enter the position to insert the number (1 to %d): ", n + 1);
    scanf("%d", &pos);
    
    // Shift all elements after the insertion point to the right by one position
    for (i = n; i >= pos; i--) {
        numList[i] = numList[i - 1];
    }
    
    // Insert the number at the insertion point
    numList[pos - 1] = num;
    
    // Increment the number of elements in the list
    n++;
    
    printf("New list elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", numList[i]);
    }
    
    printf("\n");
    
    return 0;
}
