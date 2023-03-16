#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int n,i;
	printf("nhap day so n= ");
	scanf("%d",&n);
	if(n<0){
		printf("nhap n>0");
		exit(0);
	}
	else{
		do{
			i=n%10;
		}while(n/=10);
	}
	printf("so dau tien cua n la  %d",i);
	getch();
	return 0;
}
