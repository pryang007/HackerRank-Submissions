#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;
    scanf("%d",&n);
    int sum=0;
    int *arr=(int*)malloc(n * sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0; j<n; j++)
    {
        sum=sum+arr[j];
        
    }
    free(arr);
    printf("%d",sum);
    
    return 0;
}
