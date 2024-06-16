#include <stdio.h>
int main(){
    int n;
    printf("enter the size of array:");
    scanf("%d", &n);
    int arr[n], i, j, k;
    for (i = 0; i < n; i++){
        printf("enter the value of arr[%d]", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if (arr[i] == arr[j]){
                for (k = j; k <= n; k++){
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    for (i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
}