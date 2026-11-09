#include<stdio.h>
#include<stdlib.h>
void nhap(float **a,int h,int c){
    for(int i=0;i<h;++i){
        for(int j=0;j<c;++j){
            scanf("%f",&a[i][j]);
        }
    }
}
void xuat(float **a,int h,int c){
    for(int i=0;i<h;++i){
        for(int j=0;j<c;++j){
            printf("%f ",a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int h,c;
    scanf("%d %d",&h,&c);
    float ** mtr=(int **)malloc(h*sizeof(float*));
    if(mtr==NULL){
        printf("Cap phat bo nho khong thanh cong\n");
    }
    nhap(mtr,h,c);
    xuat(mtr,h,c);
    for(int i=0;i<h;++i){
        free(mtr[i]);
    }
    free(mtr);
    return 0;
}