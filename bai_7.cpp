#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int tinhtich(int n){
	int s=1;
	if(n<0){
		printf("n khong hop le");
		exit(0);
	}
	else{
	
	for(int i=0;i<=n;i++){
		s=s*(2*i+1);
}
	return s;
}
}
int main(){
	int n,tich;
	printf("Nhap n= ");
	scanf("%d",&n);
	tich=tinhtich(n);
	printf("KQ 1.2.3...(2n+1)=  %d",tich);
	getch();
	return 0;
}
