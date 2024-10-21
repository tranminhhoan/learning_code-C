/*
#include<stdio.h>
#define Max 50

void nhap_day_so(int a[], int &n){
	do{									// câu lệnh điều kiện 
		printf("nhap so phan tu n: ");
		scanf("%d", &n);
	}while(!(n>3 && n<50 ) );
	for(int i=0;i<n;i++){	// truy suát tới từng vị trí
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
}
int Dem(int a[], int n, int x){
	int linhcanh=-99999;
	a[n]=linhcanh;
	int i=0, dem=0;
	while(a[i]!=linhcanh){
		if(a[i]==x)
			dem++;
		i++;
	}
	return dem;
	
}
bool KTGiam(int a[], int n){
	bool flag=true;
	for(int i=0;i<n-1;i++)
		if(a[i+1]>a[i]){
			flag=false;
			break;
			
		}
	return flag;
}

	int main(){
		int a[Max], n,x;
		nhap_day_so(a,n);
		printf("nhap gia tri can dem so luong: ");
		scanf("%d",&x);
		printf("dem so luong phan tu x: %d\n",Dem(a,n,x));
		if(KTGiam(a,n))
			printf("day so thu tu giam dan");
		else
			printf("day so khong theo thu tu giam dan");
		
		
		
		
	}
	*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 100

// Hàm nhập dãy số nguyên và ghi vào file
void nhapDS(int a[], int &n){
		printf("nhap so phan tu: ");
		scanf("%d", &n);
	FILE* file = fopen(	"DaySo.inp","w");
	if(file==NULL){
		printf("Err!");
		return;
		
	}
	printf("nhap %d so nguyen: \n", &n);
	for(int i=0;i<n;i++){
		printf("phan tu thu %d: ", i+1);
		scanf("%d", &a[i]);
		fprintf(file,"%d\n",a[i]); // ghi vao file
		
		
	}
	fclose(file); // dong file
	
}
void TaoMT(int n){
	int matrix[MAX][MAX];
	srand(time(NULL));
	FILE* f=fopen("MaTran.inp","w");
	if(f==NULL){
		printf("Err!");
		return;
		
	}
	else {
		do{
			printf("nhap kich thuoc ma tran n:");
			scanf("%d",&n);
			
		}while(!(n>=2 && n<=30));
		fprintf(f,"%d\n",n);
	}
	