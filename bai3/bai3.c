#include<stdio.h>
#include<stdlib.h>
typedef struct{
	char hoTen[50];
	int ma;
	float diem1,diem2,diem3;
}sinhvien;
int main(){
	int n;
	scanf("%d",&n);
	sinhvien *arr=(sinhvien*)malloc(n*sizeof(sinhvien));
	for(int i=0;i<n;i++){
			scanf("%s",&arr[i].hoTen);
			scanf("%d",&arr[i].ma);
			scanf("%f",&arr[i].diem1);
			scanf("%f",&arr[i].diem2);
			scanf("%f",&arr[i].diem3);
	}
	for(int i=0;i<n;i++){
			printf("%s    ",arr[i].hoTen);
			printf("%d  ",arr[i].ma);
			printf("%f  ",arr[i].diem1);
			printf("%f  ",arr[i].diem2);
			printf("%f  ",arr[i].diem3);
					printf("\n");	
			}
	free(arr);

	}