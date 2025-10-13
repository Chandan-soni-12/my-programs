#include<stdio.h>
#include<stdlib.h>
void mergesort(int arr[], int low, int high);
void merge(int arr[], int low, int mid, int high);
int main(){
    int n;
    int i;
    printf("Enter the elments");
    scanf("%d",&n);
    int arr[n];         
    printf("Enter the array");
    for ( i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    mergesort(arr, 0, n - 1);
    printf("The final mergesort is :");
    for ( i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

void mergesort(int arr[], int low, int high) {
    if (low < high){
        int mid = low + (high - low) / 2;

        mergesort(arr, low, mid);
        mergesort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

void merge(int arr[], int low, int mid, int high){
    int i, j, k;
    int a1 = mid - low + 1;
    int a2 = high - mid;
    int lowArr[a1], highArr[a2];
    for (i = 0; i < a1; i++)
        lowArr[i] = arr[low + i];
    for (j = 0; j < a2; j++)
        highArr[j] = arr[mid + 1 + j];
    i = 0;
    j = 0;
    k = low;
    while (i < a1 && j < a2) {
        if (lowArr[i] <= highArr[j]) {
            arr[k] = lowArr[i];
            i++;
        }
        else {
            arr[k] = highArr[j];
            j++;
        }
        k++;
    }
    while (i < a1) {
        arr[k] = lowArr[i];
        i++;
        k++;
    }

    while (j < a2) {
        arr[k] = highArr[j];
        j++;
        k++;
    }
}
