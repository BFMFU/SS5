#include<stdio.h>
int main(){
	int n;
	int sum=0 ;
	printf("Nhap so n ma ban muon:");
	scanf("%d",&n);
	for(int i=0; i<=n ; i++){
	sum=sum+i;
	printf("Lan lap thu %d, ket qua la: %d\n",i+1, sum);
	}
	printf("Ket qua la: %d", sum);

	return 0 ;
}
