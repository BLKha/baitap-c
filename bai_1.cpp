#include <stdio.h>
#include <conio.h>

int main(){
	float x,y;
	float tong,hieu,tich,thuong;
	printf("nhap so x= ");
	scanf("%f",&x);
	printf("nhap so y= ");
	scanf("%f",&y);
	
	tong=x+y;
	hieu=x-y;
	tich=x*y;
	thuong=x/y;
	
	printf("KQ TONG= %0.3f\n",tong);
	printf("KQ HIEU= %0.3f\n",hieu);
	printf("KQ TICH= %0.3f\n",tich);
	printf("KQ THUONG= %0.3f\n",thuong);
	getch();
	return 0;
}
