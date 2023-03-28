#include <stdio.h>
 int main(){
    int n;
    int i;
    int arr[100];
    int sum=0;
    
    scanf("%d", &n);
    for (i=0; i<n; i++){
        scanf("%1d", &arr[i]);
    }
    for (int j=0; j<i; j++){
        sum=sum+arr[j];
    }
    printf("%d", sum);

 }