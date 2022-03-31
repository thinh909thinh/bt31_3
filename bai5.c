#include<stdio.h>
int sum(int a,int b);
int sub(int a,int b);
int muti(int a,int b);
double div(int a,int b);
void menu();
void menu(){
    // int a;
    printf("nhap so\n");
    printf("Tinh toan\n");
    printf("1 tinh tong\n");
    printf("2 tinh hieu\n");
    printf("3 tinh tich\n");
    printf("4 tinh thuong\n");
    printf("T5 thoat\n");
    // printf("chon:\n");
    // scanf("%d",&a);
    // fflush(stdin);
    // switch (a)
    // {
    // case 1:
    //      printf("1");
    //     break;
    // case 2:
    //     printf("2");
    //     break;
    // case 3:
    //     printf("3");
    //     break;
    // case 4:
    //     printf("4");
    //     break;
    // case 5:
    //     printf("5");
    //     break;
    // case 6:
    //     printf("6");
    //     break;
    
    // default:
    //     break;
    // }
}
int main(){
    int x,y,q;
    printf("nhap x va y");
    scanf("%d%d",&x,&y);
    menu();
    printf("chon:\n");
    fflush(stdin);
    scanf("%d",&q);
  
    switch (q)
    {
    case 1:
         sum(x,y);
        break;
    case 2:
        sub(x,y);
        break;
    case 3:
        muti(x,y);
        break;
    case 4:
        div(x,y);
        break;
    case 5:
        return 0;
        break;
    
    default:
        break;
    }
}
int sum(int a,int b){
    int s; 
    s=a+b;
    printf("tong la :%d",s);
}
int sub(int a,int b){
    int t; 
    t=a-b;
    printf("hieu la :%d",t);
}
int muti(int a,int b){
    int h; 
    h=a*b;
    printf("hieu la :%d",h);
}
double div(int a,int b){
    double g; 
    if(b>0){
        g=(double)a/ (double) b;
        printf("hieu la :%f",g);
    }else
    printf("y khong hop le ");
}


