#include<stdio.h>
int main(){
	int num ;
	printf("Nhap so tu 1-10 tuong ung voi bang cuu chuong:");
	scanf("%d",&num);
	if (num<0 && num>10){
	printf("Ban da nhap sai so");
}
	for(int i=1; i<=10;i++){
	printf("%d * %d = %d\n",num,i,num*i);
	}
	return 0 ;
}
