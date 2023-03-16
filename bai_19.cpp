#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
int main (){
	int x;
	printf("nhap x= ");scanf("%d",&x);
	if(x<2){
		printf("%d khong la SNT",x);
		exit(0);
	}
	else	if(x==2){
	printf	("%d la SNT",x);
		exit(0);
	}
	else if(x%2==0){
		printf("%d khong la SNT",x);	exit(0);
	}
	else{
		int limit = sqrt(x);
		for(int i=3;i<limit;i+=2){
			if (x%i ==0){
				printf("%d khong la SNT",x);	exit(0);
			}
		}
	}
	printf("%d la SNT",x);
	getch();
	return 0;
}
