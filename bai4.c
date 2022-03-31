#include<stdio.h>
#include <stdio.h>
int Min(int a[], int size)
{
    int i,min;
    for(i=0;i<size;i++)
    {   min=a[0];
        if(a[i] < min)
        {
            min = a[i];
        }
    }printf("Min value: %d",min);
}
// void reverse(int arr[], int size)
// {
//     int i;
//     printf("Array alements are:\n");
//     for(i=size-1;i>=0;i--)
//     {
//         printf("Number %d: %d\n",i,a[i]);
//     }
// }
int main() {
    int a[100],i,n;
    printf("nhap n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter number %d: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("number: %d\n",a[i]);
    }
    Min(a,n);
    // reverse(a,6)
    return 0;
}