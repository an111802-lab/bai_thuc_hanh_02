#include<stdio.h>
#include<stdlib.h>
void nhap(float *a,int n){
    for(int i=0;i<n;++i){
        scanf("%f",a+i);
    }
}
void xuat(float *a,int n){
    for(int i=0;i<n;++i){
        printf("%.2f ",*(a+i));
    }
}
int main(){
    int n;
    scanf("%d",&n);
    float *a=malloc(n*sizeof(float));
    if(a==NULL){
        printf("Cap phat khong thanh cong\n");
        return 0;
    }
    nhap(a,n);
    xuat(a,n);
    free(a);
}
