/* bai2.1
#include<stdio.h>
#define Maxa 100

void nhapDS(int a[], int &n){
	do{
		printf("nhap vao so luong phan tu n: ");
		scanf("%d", &n);
	}while(!(3<n && n<50));
	for(int i=0;i<n;i++){
		printf("phan tu thu a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

int Dem(int a[], int n, int x){
	int linhcanh=-99999;
	linhcanh=a[n];
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]==x){
			dem++;
			
		}
		if(a[i]==linhcanh){
			break;
		}
	}
	return dem;
	
}
bool KTGD(int a[], int n){
	bool flag=true;
	for(int i=0;i<n;i++){
		if(a[i+1]>a[i]){
			flag=false;
			break;
			
		}
	}
	return flag;
	
}
int main(){
	int a[Maxa], n, x;
	nhapDS(a,n);
	printf("nhap so phan tu can dem: ");
	scanf("%d", &x);
	printf("so lan x xuat hien: %d\n",Dem(a,n,x));
	if(KTGD(a,n)){
		printf("day so giam dan. ");
	}
	else printf("day so khong giam dan. ");
	
}
*/
#include<stdio.h>
#define Maxa 50
void docDL( const char *Filename,  int a[], int *n){
	FILE *f=fopen("DaySo.inp", "r");
	if(!f){
		printf("err!");
		return;
		
	}	else{
		*n=0;
		while(fscanf(f,"%d", &a[*n])==1){
			(*n)++;
		}
		
	}fclose(f);
}
void xuat(int a[], int n ){
	printf("So luong phan tu la : %d\n", n-1);
	for (int i = 1; i < n; i++) {
		printf("Phan tu %d: %d\n", i , a[i]); 
	}
}
int dem(int a[], int n,int x){
	int linhcanh=-999;
	linhcanh=a[n];
	int dem=0;
	for(int i=1;i<n;i++){
		if(a[i]==x){
			dem++;
		}if(a[i]==linhcanh){
			break;
		}
		
	}
	return dem;
}
int main(){
	int a[Maxa], n, x;
	docDL("DaySo.inp", a, &n);
	xuat(a,n);
	printf("nhap vao x can tim: ");
	scanf("%d", &x);
	printf("so lan ma x xuat hien la: %d", dem(a,n,x));
}