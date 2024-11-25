#include <stdio.h>
int main(){
    int a, b, temp1, temp2, ucln;
    printf("Nhap vao so nguyen duong a: ");
    scanf("%d", &a);
    printf("Nhap vao so nguyen duong b: ");
    scanf("%d", &b);
    if (a <= 0 || b <= 0) {
    printf("Vui long nhap so nguyen duong.\n");
    return 1; 
    }
    temp1=b;
    temp2=a;
    while(temp1!=0){
    ucln=temp1;
    temp1=temp2%temp1;
    temp2=ucln;}
	printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, ucln);
    return 0;
}

