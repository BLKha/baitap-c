#include <stdio.h>
#include <conio.h>
int main(){
	int a,b,c;
	printf("-------KIEM TRA TAM GIAC------\n");
	printf("Nhap do dai canh AB= \n");
	scanf("%d",&a);
	printf("Nhap do dai canh BC= \n");
	scanf("%d",&b);
	printf("Nhap do dai canh AC= \n");
	scanf("%d",&c);
	if(a<b+c && b<a+c && c<a+b){
		if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
			printf("Day la tam giac vuong");
		}
		else if(a==b && b==c){
			printf("Day la tam giac deu");
		}
		else if(a==b || a==c || b==c){
			printf("Day la tam giac can");
		}
		else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b && a==b && a==c && b==c){
			printf("Day la tam giac vuong can");
		}
		else {
			printf("Day la tam giac thuong");
		}
	}
			else{
				printf("\n");
			printf("3 canh vua nhap khong phai là tam giac");
}
	
	
	getch();
	return 0;
}
