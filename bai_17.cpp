#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
 int ucln(int a,int b){
 	if(b==0){
	 
 		return a;
	}
 		else{
 		return ucln(b,a%b);}
	 
 }
 int bcnn(int a,int b){
 	 int bc;
 	 bc=(a*b)/ucln(a,b);
 	 return bc;
 }
 int main(){
 	int a,b;
 	printf("nhap a= "); scanf("%d",&a);
 	printf("nhap b= "); scanf("%d",&b);
 	printf("uoc chung lon nhat cau %d va %d la:  %d\n",a,b,ucln(a,b));
 	printf("boi chunh nho nhat cua %d va %d la: %d",a,b,bcnn(a,b));
 	getch();
 	return 0;
 }
