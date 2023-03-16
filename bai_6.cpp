#include <stdio.h>
#include <conio.h>
int tinhgiaithua(int n){
	int giaithua=0;
	if(n==0){
		return 1;
	}
	else{
	giaithua= tinhgiaithua(n-1)*n;
}
}

int main(){
	int n;
	int giaithua;
	printf("Nhap n= ");
	scanf("%d",&n);
	giaithua=tinhgiaithua(n);
	printf(" n!= %d",giaithua);
	getch();
	return 0;
}
