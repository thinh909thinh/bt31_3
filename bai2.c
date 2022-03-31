#include<stdio.h>
int boi(int x);
int main(){
    int a[150] ,n,k;
    printf("nhap n");
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
        printf("nhap so thu %d",j);
        scanf("%d",&a[j]);
    }
     for(int j=0;j<n;j++)
    {
        int d;
    
        d=boi(a[j]);
        if(d==1){
            printf("%d",a[j]);
        }
    }
}
int boi(int x){
    // int a;
    int o;
    o=x%50;
    if(o==0){
        return 1;

    }else
    return 0;

}