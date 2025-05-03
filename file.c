// #include <stdio.h>

// int main() {
//     int a[10][10], transpose[10][10];
//     int row, col, i, j;

//     printf("Enter number of rows and columns: ");
//     scanf("%d %d", &row, &col);

//     printf("Enter elements of the matrix:\n");
//     for (i = 0; i < row; i++) {
//         for (j = 0; j < col; j++) {
//             printf("a[%d][%d] = ", i, j);
//             scanf("%d", &a[i][j]);
//         }
//     }

//     // Transpose logic
//     for (i = 0; i < row; i++) {
//         for (j = 0; j < col; j++) {
//             transpose[j][i] = a[i][j];
//         }
//     }

//     // Display original matrix
//     printf("\nOriginal Matrix:\n");
//     for (i = 0; i < row; i++) {
//         for (j = 0; j < col; j++) {
//             printf("%d\t", a[i][j]);
//         }
//         printf("\n");
//     }

//     // Display transposed matrix
//     printf("\nTransposed Matrix:\n");
//     for (i = 0; i < col; i++) {
//         for (j = 0; j < row; j++) {
//             printf("%d\t", transpose[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int arr[100], n = 0, i, pos, val, choice, found;

//     printf("Enter initial number of elements: ");
//     scanf("%d", &n);

//     printf("Enter %d elements:\n", n);
//     for (i = 0; i < n; i++) {
//         printf("Element [%d]: ", i);
//         scanf("%d", &arr[i]);
//     }

//     while (1) {
//         printf("\n--- Array Operations Menu ---\n");
//         printf("1. Insert\n2. Update\n3. Delete\n4. Display\n5. Search\n6. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1: // Insert
//                 if (n == 100) {
//                     printf("Array is full! Cannot insert more elements.\n");
//                     break;
//                 }
//                 printf("Enter position to insert (0 to %d): ", n);
//                 scanf("%d", &pos);
//                 if (pos < 0 || pos > n) {
//                     printf("Invalid position!\n");
//                     break;
//                 }
//                 printf("Enter value to insert: ");
//                 scanf("%d", &val);
//                 for (i = n; i > pos; i--) {
//                     arr[i] = arr[i - 1];
//                 }
//                 arr[pos] = val;
//                 n++;
//                 printf("Element inserted successfully.\n");
//                 break;

//             case 2: // Update
//                 printf("Enter index to update (0 to %d): ", n - 1);
//                 scanf("%d", &pos);
//                 if (pos < 0 || pos >= n) {
//                     printf("Invalid index!\n");
//                     break;
//                 }
//                 printf("Enter new value: ");
//                 scanf("%d", &val);
//                 arr[pos] = val;
//                 printf("Element updated successfully.\n");
//                 break;

//             case 3: // Delete
//                 printf("Enter position to delete (0 to %d): ", n - 1);
//                 scanf("%d", &pos);
//                 if (pos < 0 || pos >= n) {
//                     printf("Invalid position!\n");
//                     break;
//                 }
//                 for (i = pos; i < n - 1; i++) {
//                     arr[i] = arr[i + 1];
//                 }
//                 n--;
//                 printf("Element deleted successfully.\n");
//                 break;

//             case 4: // Display
//                 printf("Array elements:\n");
//                 for (i = 0; i < n; i++) {
//                     printf("%d ", arr[i]);
//                 }
//                 printf("\n");
//                 break;

//             case 5: // Search
//                 printf("Enter value to search: ");
//                 scanf("%d", &val);
//                 found = 0;
//                 for (i = 0; i < n; i++) {
//                     if (arr[i] == val) {
//                         printf("Element found at index: %d\n", i);
//                         found = 1;
//                         break;
//                     }
//                 }
//                 if (!found) {
//                     printf("Element not found in the array.\n");
//                 }
//                 break;

//             case 6: // Exit
//                 printf("Exiting program.\n");
//                 return 0;

//             default:
//                 printf("Invalid choice! Please try again.\n");
//         }
//     }

//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[20];
//     char str2[20];
//     gets(str);
//     gets(str2);
//     printf("the length of the string is :%d\n",strlen(str));
//     printf("the new string formed after copying the value is %s\n",strcpy(str,str2));
//     printf("the concatation string is %s\n",strcat(str,str2));
//     printf("the cimaprsion based on ascii value %d\n",strcmp(str,str2));
//     printf("the reverse of the string is %s\n",strrev(str));
// }
