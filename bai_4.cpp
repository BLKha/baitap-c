#include <stdio.h>
#include <conio.h>

int main(){
	int n,m;
	printf("Nhap n= ");
	scanf("%d",&n);
	
	if(n%2==0){
		m =n*2;
		printf("vi %d la so chan nen n=%d",n,m);
	}
	else{
		printf("%d la so le",n);
	}
	getch();
	return 0;
}
