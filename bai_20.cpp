#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int x;
	printf("nhap x= ");scanf("%d",&x);
	int sqr=sqrt(x);
	if (sqr*sqr==x){
		printf("%d la so chinh phuong",x);
	}
	else{
		printf("%d khong la so chinh phuong",x);
	}
//	printf("%d la so chinh phuong",x);
	
	getch();
	return 0;
}
