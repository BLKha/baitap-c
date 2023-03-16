#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int tinhtong(int n){
	int s=0;
	if(n>=0){
	
	for(int i=1;i<=n;i+=2){
		s=s+(2*i+1);
}
	return s;
}
	else{
			printf("n khong hop le\n");
		exit(0);
	}
}
int main(){
	int n,tong;
	printf("Nhap n= ");
	scanf("%d",&n);
	tong=tinhtong(n);
	printf("KQ 1+3+5...(2n+1)=  %d",tong);
	getch();
	return 0;
}
