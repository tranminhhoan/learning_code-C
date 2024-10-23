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

/*#include<stdio.h>
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
	
*/

/*#include<stdio.h>
//ham noi tuyen
inline int Tich(int a,int b){
	return a*b;
}
//ham doi so mac dinh
int TinhTien(int kw, int m3, int giadien=4, int gianuoc=10){
	return kw*giadien + m3*gianuoc;
}
//
int Mu(int a,int n=2){
	int s=1,i;
	for(i=1;i<=n;i++)
		s *=a;
	return s;
}
//chong ham
float TinhDT(float d, float r){
	return d*r;
}
float TinhDT(float r){
	return 3.14*r*r;
}
//
int main(){
	//su dung ham inline
	int a,b;
	printf("nhap 2 so nguyen:");
	scanf("%d%d",&a,&b);
	printf("Tich 2 so nguyen %d",Tich(a,b));
	//su dung ham tinh tien
	printf("Nhap so kw, m3:");
	scanf("%d%d",&a,&b);
	printf("Tien dien nuoc phai tra la %d",TinhTien(a,b));
	//tuong tu cho Mu
	//su dung chong ham
	float d,r;
	printf("Nhap chieu dai, rong:");
	scanf("%f%f",&d,&r);
	printf("Dien tich HCN %.2f",TinhDT(d,r));
	//tuong tu cho dien tich hinh tron
}*/
#include<stdio.h>
#define maxa 100
void nhapMang1D (int a[], int &n){
	do{
		printf("nhap kich thuoc thuc te cua mang: ");
		scanf("%d",&n);
	}while(!(n>0 && n<maxa));
	printf("moi nhap cac phan tu cua mang, canh nhau bag khoang trang: ");
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
}

void xuatmang1d(int a[], int n){
	printf("xuat cac phan tu cua mang 1 chieu la: ");
	for(int i=0;i<n;i++) printf("%d",a[i]);
}
void HoanVi (int &x, int &y){
	int tam=x; x=y; y=tam;
}
void sapxeptang(int a[], int n){
	int i,j;
	for( i=0;i<n-1;i++){
		for( j=i+1;j<n;j++){
			if (a[i]>a[j])
				HoanVi (a[i], a[j]);
		}
	}
}
int demcacsocogiatri_k(int a[], int n, int k){
	int dem =0;
	for(int i=0;i<n;i++)if(a[i]==k) dem++;
	return dem;
}
int Tiemkiem_x(int a[], int n, int x){
	for(int vt=0;vt<n;vt++)
		if(a[vt]==x)
			return vt;
	return -1;
}
int main(){
	int a[maxa],n, k,x;
	nhapMang1D(a,n);
	sapxeptang(a,n);
	xuatmang1d(a,n);
	printf("\nNhap k: "); scanf("%d",&k);
	printf("So luong bien K la :%d",demcacsocogiatri_k(a,n,k));
	printf("\n nhap x: "); scanf("%d",&x);
	printf(" vi trii cua x la: %d",Tiemkiem_x(a,n,x));
	
	

}