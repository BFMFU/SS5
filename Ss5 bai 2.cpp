#include<stdio.h>
int main(){
	int correctNumber = 49 ;
	int number; 
	int check = 0;
	while (check==0){
	printf("Nhap so bat ki: ");
	scanf("%d",&number);
	if (number<correctNumber) {
	printf("So ban nhap lon hon so can doan\n");	
	}
	if (number>correctNumber) {
	printf("So ban nhap lon hon so can doan\n");
	}
	if (number==correctNumber){
	printf("Ban doan dung roi. Ket qua la: %d",number);
	check = 1;
	}
	}
	return 0 ;
}
