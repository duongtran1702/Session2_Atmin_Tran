#include<stdio.h>
int main(){
	int chieu_dai,chieu_rong;
	printf("Nhap chieu dai :");
	scanf("%d",&chieu_dai);
	printf("Nhap chieu rong :");
	scanf("%d",&chieu_rong);
	int chu_vi=(chieu_dai+chieu_rong)*2;
	int dien_tich=chieu_dai*chieu_rong;
	printf("chu vi la :%d",chu_vi);
	printf("\ndien tich la :%d",dien_tich);
	return 0;
}