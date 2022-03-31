#include <stdio.h>
void reverse(int arr[], int size)
{
    int i;
    printf("Array alements are:\n");
    for(i=size-1;i>=0;i--)
    {
        printf("Number %d: %d\n",i,arr[i]);
    }
}
int main() {
    int arr[5],i;

    for(i=0;i<5;i++)
    {
        printf("Enter number %d: ",i);
        scanf("%d",&arr[i]);
    }
    reverse(arr, 5);
    return 0;
}