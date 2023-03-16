#include <stdio.h>
#include <conio.h>

int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	
	if(n>5){
		n+=2;
		printf("vi n lon hon 5 nen n=%d",n,n);
		return n;
}
	else{
		printf("vi n<5 nen n= 0");
		
		return 0;
	}
	getch();
	return 0;
}
