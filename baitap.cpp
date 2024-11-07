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

#include<stdio.h>
double sum(int n) {
	// Điều kiện dừng
	if (n == 1) {
		return 1.0; // Tổng của 1
	} else {
		// Tổng S(n) = 1/n + S(n-1)
		return 1.0 / n + sum(n - 1);
	}
}
long long Tich(int n){
	if(n==1){
		return 1;
	}else{
		return (2*n+1) * Tich(n-1);
	}
}
int TongHieu(int n){
	if(n==1){
		return 1;
	}else
		return TongHieu(n-1) + ((n % 2==0)? -n: n);
	
}

int main() {
	int n;
	printf("nhap n: ");
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("Vui long nhap n > 0.\n");
		return 1;
	}
	
	int result = TongHieu(n);// Tong(n); Tich(n);
//	printf("Tong S = 1 + 1/2 + ... + 1/%d = %.6f\n", n, result);
//	printf("Tich S = 1 * 3 * 5 * ... *(2* %d + 1)= %lld\n",n,result);
	printf("TongHieu S= 1-2+3-4+...+((-1)^%d+1)*%d= %d\n ", n,n,result);
	
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void ghiDS(){
	FILE *f=fopen("Dayso.inp", "w");
	if(!f){
		printf("err!");
		return;
	}else{
		int n,m;
		printf("nhap so luong so nguyen: ");
		scanf("%d", &n);
		fprintf(f,"%d\n",n);
		for(int i=0;i<n;i++){
			printf("Phan tu thu %d: ",i+1);
			scanf("%d",&m );
			fprintf(f,"%d\t", m);
		}
	}fclose(f);
}
void TaoMT(){
	srand(time(NULL));
	FILE *f=fopen("MaTran.txt","w");
	if(!f){
		printf("err!");
		return;
	}else{
		int n;
		do{
			printf("Nhap kich thu mang: ");
			scanf("%d", &n);
		}while(!(n>=2 && n<=30));
		
		fprintf(f,"%d*%d\n",n,n);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				int m=rand()%1000;
				fprintf(f,"%d\t", m);
			}fprintf(f,"\n");
		}
	}fclose(f);
	
	printf("da ghi du lieu vao file.");
}
int main(){
	ghiDS();
	TaoMT();
	return 0 ;
	
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void ghiDS(){
	FILE *f=fopen("Dayso.inp", "w");
	if(!f){
		printf("err!");
		return;
	}else{
		int n,m;
		printf("nhap so luong so nguyen: ");
		scanf("%d", &n);
		fprintf(f,"%d\n",n);
		for(int i=0;i<n;i++){
			printf("Phan tu thu %d: ",i+1);
			scanf("%d",&m );
			fprintf(f,"%d\t", m);
		}
	}fclose(f);
}
void TaoMT(){
	srand(time(NULL));
	FILE *f=fopen("MaTran.txt","w");
	if(!f){
		printf("err!");
		return;
	}else{
		int n;
		do{
			printf("Nhap kich thu mang: ");
			scanf("%d", &n);
		}while(!(n>=2 && n<=30));
		
		fprintf(f,"%d*%d\n",n,n);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				int m=rand()%1000;
				fprintf(f,"%d\t", m);
			}fprintf(f,"\n");
		}
	}fclose(f);
	
	printf("da ghi du lieu vao file.");
}
int main(){
	ghiDS();
	TaoMT();
	return 0 ;
	
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 30

// Hàm tạo ma trận ngẫu nhiên và ghi vào tệp "MaTran.inp"
void TaoMaTran(int A[MAX_SIZE][MAX_SIZE], int *n) {
	srand(time(NULL));
	do {
		printf("Nhap kich thuoc ma tran  (2 den 30): ");
		scanf("%d", n);
	} while (*n < 2 || *n > MAX_SIZE);
	
	FILE *f = fopen("MaTran.inp", "w");
	if (!f) {
		printf("Err!\n");
		return;
	}
	
	fprintf(f, "%d\n", *n); // Ghi kích thước ma trận vào tệp
	for (int i = 0; i < *n; i++) {
		for (int j = 0; j < *n; j++) {
			A[i][j] = rand() % 1001; // Sinh số ngẫu nhiên trong [0, 1000]
			fprintf(f, "%d ", A[i][j]); // Ghi số vào tệp
		}
		fprintf(f, "\n"); // Xuống dòng sau mỗi hàng
	}
	fclose(f);
}

// Hàm đọc ma trận từ tệp "MaTran.inp"
void DocMaTran(int A[MAX_SIZE][MAX_SIZE], int *n) {
	FILE *f = fopen("MaTran.inp", "r");
	if (!f) {
		printf("Err!\n");
		return;
	}
	
	fscanf(f, "%d", n); // Đọc kích thước ma trận từ tệp
	for (int i = 0; i < *n; i++) {
		for (int j = 0; j < *n; j++) {
			fscanf(f, "%d", &A[i][j]); // Đọc từng phần tử vào ma trận
		}
	}
	fclose(f);
}

// Hàm xuất ma trận ra màn hình
void XuatMaTran(int A[MAX_SIZE][MAX_SIZE], int n) {
	printf("Ma Tran %dx%d:\n", n, n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
}

// Hàm tính trung bình cộng các số trên đường chéo chính
float TinhTrungBinhDuongCheo(int A[MAX_SIZE][MAX_SIZE], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		tong += A[i][i]; // Cộng các phần tử trên đường chéo chính
	}
	return (float)tong / n; // Tính trung bình
}

// Hàm tìm số lớn nhất trong ma trận
int TimMax(int A[MAX_SIZE][MAX_SIZE], int n) {
	int max = A[0][0]; // Giả sử phần tử đầu tiên là lớn nhất
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (A[i][j] > max) {
				max = A[i][j]; // Cập nhật giá trị max
			}
		}
	}
	return max;
}

// Hàm ghi kết quả vào tệp "KetQua.out"
void GhiKetQua(float avg, int max) {
	FILE *f = fopen("KetQua.out", "w");
	if (!f) {
		printf("Err!\n");
		return;
	}
	
	fprintf(f, "Trung binh cong duong cheo: %.2f\n", avg);
	fprintf(f, "So lon nhat trong ma tran: %d\n", max);
	
	fclose(f);
}

int main() {
	int A[MAX_SIZE][MAX_SIZE], n;
	
	// Tạo ma trận và ghi vào tệp
	TaoMaTran(A, &n);
	
	// Đọc ma trận từ tệp
	DocMaTran(A, &n);
	
	// Xuất ma trận ra màn hình
	XuatMaTran(A, n);
	
	// Tính trung bình cộng trên đường chéo chính
	float avg = TinhTrungBinhDuongCheo(A, n);
	
	// Tìm số lớn nhất trong ma trận
	int max = TimMax(A, n);
	
	// Ghi kết quả vào tệp
	GhiKetQua(avg, max);
	
	return 0;
}

#include<stdio.h>
#define maxa 010
void nhapmang1D(int a[], int &n){
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
int tong_le(int a[], int n){
	int s=0;
	for(int i=0;i<n;i++) if(a[i]%2!=0) s=s+a[i];
	return s;
}
int main(){
	int a[maxa], n;
	nhapmang1D(a,n);
	xuatmang1d(a,n);
	printf("\n\tTong cac so le trong mang la: %d",tong_le(a,n));
	
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MaxHocPhan 50
#define MaxTenHP 100

// Định nghĩa cấu trúc Học Phần
typedef struct {
	char maHP[10];       // Mã học phần
	char tenHP[MaxTenHP]; // Tên học phần
	int soTinChi;       // Số tín chỉ
} HocPhan;

// Hàm ghi dữ liệu vào file
void GhiHocPhan(const char *filename, HocPhan hocPhans[], int n) {
	FILE *f = fopen("HocPhan.txt", "w");
	if (!f) {
		printf("Khong the mo file %s!\n", filename);
		return;
	}
	
	fprintf(f, "%d\n", n); // Ghi số lượng học phần
	for (int i = 0; i < n; i++) {
		fprintf(f, "%s %s %d\n", hocPhans[i].maHP, hocPhans[i].tenHP, hocPhans[i].soTinChi);
	}
	
	fclose(f);
}void DocHocPhan(const char *filename, HocPhan hocPhans[], int *n) {
	FILE *f = fopen("HocPhan.txt", "r");
	if (!f) {
		printf("Khong the mo file %s!\n", filename);
		return;
	}
	
	fscanf(f, "%d", n); // Đọc số lượng học phần
	for (int i = 0; i < *n; i++) {
		fscanf(f, "%s %s %d", hocPhans[i].maHP, hocPhans[i].tenHP, &hocPhans[i].soTinChi);
	}
	
	fclose(f);
}

// Hàm xuất danh sách học phần
void XuatHocPhan(HocPhan hocPhans[], int n) {
	printf("Danh sach hoc phan:\n");
	printf("%-10s %-30s %-10s\n", "Ma HP", "Ten HP", "So Tin Chi");
	for (int i = 0; i < n; i++) {
		printf("%-10s %-30s %-10d\n", hocPhans[i].maHP, hocPhans[i].tenHP, hocPhans[i].soTinChi);
	}
}

int main() {
	HocPhan hocPhans[MaxHocPhan];
	int n;
	
	// Nhập số lượng học phần
	printf("Nhap so luong hoc phan (2 <= n < 50): ");
	scanf("%d", &n);
	while (n < 2 || n >= 50) {
		printf("So luong hoc phan khong hop le! Nhap lai: ");
		scanf("%d", &n);
	}
	
	// Nhập thông tin cho từng học phần
	for (int i = 0; i < n; i++) {
		printf("Nhap thong tin cho hoc phan %d:\n", i + 1);
		printf("Ma hoc phan: ");
		scanf("%s", hocPhans[i].maHP);
		printf("Ten hoc phan: ");
		scanf(" %[^\n]", hocPhans[i].tenHP); // Đọc chuỗi có khoảng trắng
		printf("So tin chi: ");
		scanf("%d", &hocPhans[i].soTinChi);
	}
	
	// Ghi dữ liệu vào file HocPhan.txt
	GhiHocPhan("HocPhan.txt", hocPhans, n);
	printf("Du lieu da duoc ghi vao file HocPhan.txt\n");
	DocHocPhan("HocPhan.txt", hocPhans, &n);
	
	// Xuất danh sách học phần
	XuatHocPhan(hocPhans, n);

	return 0;
}*/
#include<stdio.h>
double sum(int n) {
	// Điều kiện dừng
	if (n == 1) {
		return 1.0; // Tổng của 1
	} else {
		// Tổng S(n) = 1/n + S(n-1)
		return 1.0 / n + sum(n - 1);
	}
}
long long Tich(int n){
	if(n==1){
		return 1;
	}else{
		return (2*n+1) * Tich(n-1);
	}
}
int TongHieu(int n){
	if(n==1){
		return 1;
	}else
		return TongHieu(n-1) + ((n % 2==0)? -n: n);
	
}
long long GiaiThua(int n){
	if(n==0 || n==1){
		return 1;
	}else return GiaiThua(n-1)*n ;
	
}
long long TongGiaiThua (int n){
	if(n==1){
		return GiaiThua(1);
	}else return TongGiaiThua(n-1) + GiaiThua(n);
}

int main() {
	int n;
	printf("nhap n: ");
	scanf("%d", &n);
	
	if (n <= 0) {
		printf("Vui long nhap n > 0.\n");
		return 1;
	}
	
	long long result = TongGiaiThua(n);// Tong(n); Tich(n);
//	printf("Tong S = 1 + 1/2 + ... + 1/%d = %.6f\n", n, result);
//	printf("Tich S = 1 * 3 * 5 * ... *(2* %d + 1)= %lld\n",n,result);
//	printf("TongHieu S= 1-2+3-4+...+((-1)^%d+1)*%d= %d\n ", n,n,result);
	printf("Tong GiaiThua S= 1! + 2! + 3! + ... + %d!: %d", n, result);
	
	return 0;
}