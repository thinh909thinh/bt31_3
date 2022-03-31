#include<stdio.h>
#include<math.h>
float get(float a, float b ,float c);
int main(){
    float a,b,c,d;
    printf("nhap a");
    scanf("%f",&a);
    printf("nhap b");
    scanf("%f",&b);
    printf("nhap c");
    scanf("%f",&c);
    if(a+b>c && a+c>b && b+c>a)
    {
    d=get(a,b,c);
    printf("%f",d);
    }else
    printf("khong hop le\n");

}
float get (float a, float b, float c){
    float s,p;
    p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    return s;
}