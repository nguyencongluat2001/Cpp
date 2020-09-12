#include <stdio.h>
int main(){
	int num;
	printf("Nhap So Num = \n");
	scanf("%d",&num);
	printf("Binh Phuong Cua SO Do:%d ",num * num);
	int num1;
	int num2;
	printf("Nhap So Num1 = \n");
	scanf("%d",&num1);
printf("Nhap So Num2= \n");
	scanf("%d",&num2);
		int tong = 0;
	int hieu = 0;
	int tich = 0;
	tong = num1 + num2;
	hieu = num1 - num2;
	tich = num1 * num2;
	printf("Tong:%d \n",tong);
		printf("tich:%d \n",tich);
	printf("hieu:%d \n",hieu);
	
}

