#include<stdio.h>
int main(){
	int a,b,i,j,arr[100]={};
	char text[9][10]={"one","two","three","four","five","six","seven","eight","nine"};
	printf("Nhap so a: ");scanf("%d",&a);
	printf("Nhap so b: ");scanf("%d",&b);
	if(a<=b){
		j=0;
		for(i=a;i<=b;i++){
			arr[j]=i;
			j++;
		}
		printf("so chan: ");
		for(i=0;i<j;i++){
			if (arr[i]%2==0){
				printf("%d ",arr[i]);
			}
		}
		printf("\nso le: ");
		for(i=0;i<j;i++){
			if (arr[i]%2==1){
				printf("%d ",arr[i]);
			}
		}
	}
	
	return 0;
}
