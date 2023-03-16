#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	int x;
	printf("nhap x= ");scanf("%d",&x);
	int sum =0;
	for(int i=1;i<x;i++){
		if(x%i==0){
			sum=sum+i;
		}
	}
	if(sum==x){
	printf(" %d la so hoan thien ",x);
	}
	else {
		printf("%d khong la so hoan thien",x);
	}
	getch();
	return 0;
}
