#include<stdio.h>
void Nhap(){
	int x;
	printf("\nnhap vao 1 so:");
	scanf("%d" ,&x);
	
	for(int i=1; i<=x; i++){
		printf("nhap phan tu thu %d:  ", i);
		int nhap;
		scanf("%d", &nhap);
		if (i != nhap){
			printf("nhap sai, nhap lai!");
			i=0;
		}
	}
    return;
}