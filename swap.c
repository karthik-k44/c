 #include<stdio.h>

int main() {
    int arr[10];
    int m, i, j, temp;



    // inputing the array
    printf("Enter the size of the array ");
    scanf("%d", &m);
    printf("Enter the elements of the array ");
    for(i = 0; i < m; i ++) {
        scanf("%d", &arr[i]);
    }
    
    // Swaping the elements 
    for (i = 0; i < m - 1; i++) {
        for (j = 0; j < m - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Printing the sorted array
    for(i = 0; i <m; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}