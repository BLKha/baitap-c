#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	
	int n;
	int i = 1;
   int  dem = 0;
   printf("nhap n= ");
   scanf("%d",&n);
    while(i <= n)
    {
        if(n % i == 0)
        {
            if(i % 2 == 0)
            {
            printf("Cac uoc so chan cua n la:  %d\n", i);
            dem++;
            }
        }
            i++;
    }
    printf("\nSo luong uoc so chan cua %d la: %ld", n, dem);
	getch();
	return 0;
}
