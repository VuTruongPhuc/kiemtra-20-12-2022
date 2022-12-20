#include<stdio.h>
int main(){
	int n;
	char text[9][10]={"one","two","three","four","five","six","seven","eight","nine"};
	printf("Nhap so nguyen: ");scanf("%d",&n);
	while(1){
		if (n>=1 && n<=9){
			printf("%s",text[n-1]);
			break;
		}
		printf("Nhap lai so nguyen: ");scanf("%d",&n);
	}
	return 0;
}
