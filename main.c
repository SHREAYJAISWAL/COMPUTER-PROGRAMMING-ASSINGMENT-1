#include <stdio.h>
#include "mylib.h"
#include "arraylib.h"

int main() {
    int choice, num;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Check Armstrong Number\n");
        printf("2. Check Adams Number\n");
        printf("3. Check Prime Palindrome Number\n");
        printf("4. Test Array Utilities\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting program. Goodbye!\n");
            break;
        }

        if (choice >= 1 && choice <= 3) {
            printf("Enter a number: ");
            scanf("%d", &num);
        }

        switch (choice) {
            case 1:
                if (isArmstrong(num))
                    printf("%d is an Armstrong number.\n", num);
                else
                    printf("%d is NOT an Armstrong number.\n", num);
                break;

            case 2:
                if (isAdams(num))
                    printf("%d is an Adams number.\n", num);
                else
                    printf("%d is NOT an Adams number.\n", num);
                break;

            case 3:
                if (isPrimePalindrome(num))
                    printf("%d is a Prime Palindrome number.\n", num);
                else
                    printf("%d is NOT a Prime Palindrome number.\n", num);
                break;

            case 4: {
                int arr[100], size, val;
                printf("Enter array size: ");
                scanf("%d", &size);
                printf("Enter %d elements:\n", size);
                for (int i = 0; i < size; i++)
                    scanf("%d", &arr[i]);

                printf("\nOriginal Array: ");
                displayArray(arr, size);

                printf("Max at index %d\n", findMaxIndex(arr, size));
                printf("Min at index %d\n", findMinIndex(arr, size));
                printf("Average = %.2f\n", findAverage(arr, size));

                reverseArray(arr, size);
                printf("Reversed Array: ");
                displayArray(arr, size);

                sortArray(arr, size);
                printf("Sorted Array: ");
                displayArray(arr, size);

                printf("Enter value to search: ");
                scanf("%d", &val);
                int index = linearSearch(arr, size, val);
                if (index != -1)
                    printf("Value %d found at index %d\n", val, index);
                else
                    printf("Value %d not found in array\n", val);
                break;
            }

            default:
                printf("Invalid choice! Please select between 1-5.\n");
        }
    } while (choice != 5);

    return 0;
}