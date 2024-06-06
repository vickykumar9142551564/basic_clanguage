#include <stdio.h>
int Sort(int a[], int n);
int main(){
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        printf("enter the value of a[%d]",i);
        scanf("%d",&a[i]);
    }
    Sort(a,n);
}
int Sort(int a[],int n){
    int i, j, temp;
    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if (a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted Element List\n");
    for (i = 0; i < n; i++){
        printf("%d\n", a[i]);
    }
}