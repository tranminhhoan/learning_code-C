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
#include<stdio.h>
#include<stdlib.h>
#include<float.h>

struct nut{
	float giatri;
	struct nut *tiep;
};typedef struct nut Node;

Node *chenDau(Node *dau, int x){
	Node *moi;
	moi = (Node*) malloc(sizeof(Node));
	moi->giatri=x;
	moi->tiep=dau;
	dau=moi;
	return dau;
}
Node *NhapDs(Node *dau){
	int n;
	float x;
	printf("Nhap so luong so thuc ban muon thm vao danh sach: ");
	scanf("%d", n);
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d: ",i+1);
		scanf("%f", &x);
		chenDau(dau,x);
		
	}return 0;
}
float SoDNN(Node *dau){
	float min=FLT_MAX;
	Node *tam=dau;
	while(tam!=NULL){
		if(tam->giatri>0 && tam->giatri<min){
			min=tam->giatri;
		}
		tam=tam->tiep;
	}return min;
	
}
float SoALN(Node *dau){
	float max=FLT_MIN;
	Node *tam=dau;
	while(tam!=NULL){
		if(tam->giatri<0 && tam->giatri>max){
			max=tam->giatri;
		}
		tam=tam->tiep;
	}
	return ((max=FLT_MIN ) ? -1 : max);
	
}
float TongDuong(Node *dau){
	float tong=0;
	Node *tam=dau;
	while(tam!=NULL){
		if(tam->giatri>0){
			tong+=tam->giatri;
		}
		tam=tam->tiep;
		
	}return tong;
	
}
float TongAm(Node *dau){
	float tong=0;
	Node *tam=dau;
	while(tam!=NULL){
		if(tam->giatri<0){
			tong+=tam->giatri;
		}
		tam=tam->tiep;
	}return tong;
}
int SoLDT(Node *dau){
	Node *tam=dau;
	while(tam!=NULL){
		if(tam->giatri / 2 !=0){
			return tam->giatri;
		}
		tam=tam->tiep;
		
	}return -1;
	
}// macro
#include <stdio.h>

#define Cong(x, y, z) ((z) + (x) + (y))

int main() {
	float a, b, c;
	printf("Nhap vao 3 so thuc: ");
	scanf("%f %f %f", &a, &b, &c);

	// Tinh tong bang macro Cong
	double Tong = Cong(a, b, c);

	printf("Tong 3 so thuc: %.2f\n", Tong);

	return 0;
}
#include<stdio.h>
#define max 50
void DocFile(int a[], int *n , int *x){
	FILE *f=fopen("DaySoNguyen.txt", "r");
	if(!f){
		perror ("err!");
		return ;
		
	}else{
		fscanf(f,"%d %d", n,x);
		for(int i=0;i<*n;i++){
			fscanf(f, "%d", &a[i]);
			
		}
	}
	fclose(f);
	
	
}
int DemUocSo(int a[], int n, int x){
	int dem =0;
	for(int i=0;i<n;i++){
		if(a[i]>0 && x%a[i]==0){
			dem++;
			
		}
	}return dem;
}
void GhiKetQua(int demUocSo){
	FILE *f=fopen("Ketqua.txt", "w");
	if(!f){
		perror("Err!");
		return;
		
	}else{
		fprintf(f,"So luong so nguyen la uoc so cua x: %d ", demUocSo);
		
	}
}
int main(){
	int a[max],n ,x;
	DocFile(a,&n,&x);
	printf("%d %d\n", n ,x);
	printf("Day so: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
		
	}printf("\n");
	int demUocSo=DemUocSo(a,n,x);
	printf("so luong uoc so: %d	", demUocSo);
	
	GhiKetQua(demUocSo);
	
	return 0;
	
}
#include <stdio.h>
#include <stdlib.h>

int main(int n, char *a[]) {
	if (n < 4 || n > 31) {
		printf("So luong doi so.\n");
		return 1;
	}
	double sum_positive = 0.0;
	for (int i = 1; i < n; i++) {
		double num = atof(a[i]);  
		if (num > 0) {
			sum_positive += num;
		}
	}
	printf("Sum: %.2f\n", sum_positive);
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

// Định nghĩa một nút trong cây nhị phân
typedef struct Node {
    union {
        int int_value;    // Dữ liệu kiểu số nguyên
        float float_value; // Dữ liệu kiểu số thực
        char char_value;  // Dữ liệu kiểu ký tự
    };
    struct Node* left;
    struct Node* right;
} Node;

// Hàm tạo một nút mới
Node* create_node(int type, void* value) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->left = NULL;
    new_node->right = NULL;

    // Gán giá trị cho nút tùy theo kiểu dữ liệu
    if (type == 1) { // Số nguyên
        new_node->int_value = *(int*)value;
    } else if (type == 2) { // Số thực
        new_node->float_value = *(float*)value;
    } else if (type == 3) { // Ký tự
        new_node->char_value = *(char*)value;
    }
    
    return new_node;
}

// Hàm chèn một giá trị vào cây nhị phân tìm kiếm
Node* insert(Node* root, int type, void* value) {
    if (root == NULL) {
        return create_node(type, value);
    }

    // Chèn vào cây theo kiểu số nguyên, số thực hoặc ký tự
    if (type == 1) { // Số nguyên
        int val = *(int*)value;
        if (val < root->int_value) {
            root->left = insert(root->left, type, value);
        } else {
            root->right = insert(root->right, type, value);
        }
    } else if (type == 2) { // Số thực
        float val = *(float*)value;
        if (val < root->float_value) {
            root->left = insert(root->left, type, value);
        } else {
            root->right = insert(root->right, type, value);
        }
    } else if (type == 3) { // Ký tự
        char val = *(char*)value;
        if (val < root->char_value) {
            root->left = insert(root->left, type, value);
        } else {
            root->right = insert(root->right, type, value);
        }
    }

    return root;
}

// Hàm duyệt cây theo thứ tự trung vị (Inorder Traversal)
void inorder(Node* root, int type) {
    if (root != NULL) {
        inorder(root->left, type);
        
        // In ra giá trị của nút tùy theo kiểu dữ liệu
        if (type == 1) {
            printf("%d ", root->int_value);
        } else if (type == 2) {
            printf("%.2f ", root->float_value);
        } else if (type == 3) {
            printf("%c ", root->char_value);
        }
        
        inorder(root->right, type);
    }
}

// Hàm đếm số nút chỉ có 1 nhánh
int count_one_branch_nodes(Node* root) {
    if (root == NULL) {
        return 0;
    }
    
    int count = 0;
    
    // Kiểm tra nếu nút chỉ có một nhánh (hoặc con trái hoặc con phải)
    if ((root->left && !root->right) || (!root->left && root->right)) {
        count = 1;
    }
    
    return count + count_one_branch_nodes(root->left) + count_one_branch_nodes(root->right);
}

int main() {
    Node* root_int = NULL;
    Node* root_float = NULL;
    Node* root_char = NULL;

    // Thêm các phần tử vào cây số nguyên
    int int_values[] = {10, 5, 15, 3};
    for (int i = 0; i < 4; i++) {
        root_int = insert(root_int, 1, &int_values[i]);
    }

    // Thêm các phần tử vào cây số thực
    float float_values[] = {3.14, 2.71, 1.41, 0.57};
    for (int i = 0; i < 4; i++) {
        root_float = insert(root_float, 2, &float_values[i]);
    }

    // Thêm các phần tử vào cây ký tự
    char char_values[] = {'d', 'b', 'f', 'a'};
    for (int i = 0; i < 4; i++) {
        root_char = insert(root_char, 3, &char_values[i]);
    }

    // Duyệt cây số nguyên và in ra các giá trị
    printf("Duyet cay so nguyen:\n");
    inorder(root_int, 1);
    printf("\n");

    // Duyệt cây số thực và in ra các giá trị
    printf("Duyet cay so thuc:\n");
    inorder(root_float, 2);
    printf("\n");

    // Duyệt cây ký tự và in ra các giá trị
    printf("Duyet cay ky tu:\n");
    inorder(root_char, 3);
    printf("\n");

    // Đếm số nút chỉ có một nhánh trong các cây
    printf("\nSo nut chi co 1 nhánh (Cay so nguyen): %d\n", count_one_branch_nodes(root_int));
    printf("So nut chi co 1 nhánh (Cay so thuc): %d\n", count_one_branch_nodes(root_float));
    printf("So nut chi co 1 nhánh (Cay ky tu): %d\n", count_one_branch_nodes(root_char));

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

// Định nghĩa cấu trúc của một nút cây nhị phân
typedef struct Node {
    int data;
    struct Node *left, *right;
} Node;

// Tạo một nút mới
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Thêm nút vào cây nhị phân tìm kiếm
Node* insertNode(Node* root, int data) {
    if (root == NULL)
        return createNode(data);
    
    if (data < root->data)
        root->left = insertNode(root->left, data);
    else if (data > root->data)
        root->right = insertNode(root->right, data);
    
    return root;
}

// Duyệt cây theo thứ tự giữa (in-order)
void inOrderTraversal(Node* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

// Đếm số nút chỉ có 1 nhánh
int countOneChildNodes(Node* root) {
    if (root == NULL) return 0;
    
    int count = 0;
    if ((root->left == NULL && root->right != NULL) || (root->left != NULL && root->right == NULL))
        count = 1;
    
    return count + countOneChildNodes(root->left) + countOneChildNodes(root->right);
}

// Tính chiều cao của cây
int calculateHeight(Node* root) {
    if (root == NULL)
        return 0;
    
    int leftHeight = calculateHeight(root->left);
    int rightHeight = calculateHeight(root->right);
    
    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}

// Tìm nút có giá trị bất kỳ
Node* searchNode(Node* root, int value) {
    if (root == NULL || root->data == value)
        return root;
    
    if (value < root->data)
        return searchNode(root->left, value);
    
    return searchNode(root->right, value);
}

// Tìm mức của một nút trong cây
int findLevel(Node* root, int value, int level) {
    if (root == NULL)
        return -1;
    if (root->data == value)
        return level;
    
    int leftLevel = findLevel(root->left, value, level + 1);
    if (leftLevel != -1)
        return leftLevel;
    
    return findLevel(root->right, value, level + 1);
}

// Đếm số nút lá của một nút
int countLeafNodes(Node* root) {
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    
    return countLeafNodes(root->left) + countLeafNodes(root->right);
}

// Chương trình chính
int main() {
    Node* root = NULL;
    int choice, value;

    // Thêm các giá trị vào cây
    int arr[] = {50, 30, 20, 40, 70, 60, 80};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < n; i++) {
        root = insertNode(root, arr[i]);
    }

    while (1) {
        printf("\nMenu:\n");
        printf("1. Duyệt cây và in ra giá trị các nút\n");
        printf("2. Đếm số nút chỉ có 1 nhánh\n");
        printf("3. Tính chiều cao của cây\n");
        printf("4. Tìm một nút và tính mức cùng số nút lá\n");
        printf("0. Thoát\n");
        printf("Lựa chọn của bạn: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Duyệt cây theo thứ tự giữa (In-Order): ");
                inOrderTraversal(root);
                printf("\n");
                break;
            case 2:
                printf("Số nút chỉ có 1 nhánh: %d\n", countOneChildNodes(root));
                break;
            case 3:
                printf("Chiều cao của cây: %d\n", calculateHeight(root));
                break;
            case 4:
                printf("Nhập giá trị cần tìm: ");
                scanf("%d", &value);
                Node* found = searchNode(root, value);
                if (found) {
                    printf("Nút %d tìm thấy ở mức: %d\n", value, findLevel(root, value, 1));
                    printf("Số nút lá của nút %d: %d\n", value, countLeafNodes(found));
                } else {
                    printf("Không tìm thấy nút %d trong cây\n", value);
                }
                break;
            case 0:
                exit(0);
            default:
                printf("Lựa chọn không hợp lệ!\n");
        }
    }

    return 0;
}
#include<stdio.h>

long long luyThua(int a , int n){
	if(n==0){
		return 1;
	}
	long long nua = luyThua(a, n/2);
	
	if(n%2==0){
		return nua * nua;
		
	}else{
		return nua * nua * a;
		
	}
}
int main(){
	int a,n;
	printf("nhap vao co so n: ");
	scanf("%d", &a);
	printf("Nhap vao so mu x: ");
	scanf("%d", &n);
	printf("%d^%d=%lld\n", a,n,luyThua(a,n));
	return 0;
}
#include<stdio.h>
#define Max 50
void Docfile(int a[], int &n){
	FILE *f=fopen("Lab3_1.inp" , "r");
	if(!f){
		printf("Err!");
		return;
	}else{
		fscanf(f,"%d", &n);
		for(int i=0;i<n;i++){
			fscanf(f,"%d", &a[i]);
		}
		
	}
	fclose(f);
	
}
int SoLonNhat(int a[], int n){
	int max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
void Xuat(int a[], int n){
	printf("so luong phan tu: %d\n ", n);
	for(int i=0;i<n;i++){
		printf("%5d", a[i]);
	}printf("\n");
}
long long Tong(int a[], int n, int i ){
	if(i==n){
		return 0;
	}
	return a[i] + Tong(a,n, i+1);
	
}
int main(){
	int a[Max],n,i;
	Docfile(a,n);
	Xuat(a,n);
	printf("so lon nhat: %d\n", SoLonNhat(a,n));
	printf("Tong cac phan tu cua mang a: %lld",Tong(a,n,i));
	
}
#include<stdio.h>

long luyThua(int a ,  int n){
	if (n==1){
		return a;
	}return a * luyThua(a , n-1);
}
long Fibonaci(int x){
	if(x==0 || x==1){
		return 1;
		
	}return Fibonaci(x-1) + Fibonaci(x-2);
}
int main(){
	int x;
/*	printf("nhap vao a: ");
	scanf("%d", &a);
	while(!(1<n && n<30)){
		printf("Nhap vao n: ");
		scanf("%d", &n);
	}
	printf("S(n)= %d", luyThua(a,n));
	
	do{
		printf("nhap vao x: ");
		scanf("%d", &x);
	}while(!(3<x && x <20));
	printf("So Fibonaci thu %d: %d ", x, Fibonaci(x));
	return 0;
	
}
#include <stdio.h>
int n, s;
int menhGia[30]; // Mệnh giá các tờ tiền
int cachTra[30]; // Mảng lưu cách trả tiền
int soCach = 0; // Biến đếm số cách trả tiền

// Hàm đệ quy quay lui
void quayLui(int viTri, int tong, int batDau) {
	if (tong > s) return;
	if (tong == s) { 
		soCach++;
		// Ghi kết quả vào file
		FILE *output = fopen("ATM_out.out", "a");
		fprintf(output, "Cach %d: ", soCach);
		for (int i = 0; i < viTri; i++) {
			fprintf(output, "%d ", cachTra[i]);
		}
		fprintf(output, "\n");
		fclose(output);
		return;
	}
	
	for (int i = batDau; i < n; i++) {
		cachTra[viTri] = menhGia[i]; // Lưu mệnh giá vào mảng cachTra
		quayLui(viTri + 1, tong + menhGia[i], i); // Gọi lại với tổng mới
	}
}

int main() {
	FILE *input = fopen("ATM.inp", "r");
	fscanf(input, "%d %d", &n, &s);
	for (int i = 0; i < n; i++) {
		fscanf(input, "%d", &menhGia[i]);
	}
	fclose(input);
	
	FILE *output = fopen("ATM_out.out", "w");
	fprintf(output, "Cac cach tra tien:\n");
	fclose(output);
	
	quayLui(0, 0, 0);
	
	if (soCach == 0) {
		output = fopen("ATM_out.out", "w");
		fprintf(output, "-1\n");
		fclose(output);
	}
	
	return 0;
}
#include <stdio.h>

int n;
int phanTich[20]; // Mảng lưu các phần tử của phân tích
int tong[20]; // Mảng lưu tổng các phần tử đến bước đang xét
int soCach = 0; // Biến đếm số cách phân tích

void thuThap(int i, int giaTriCuoi) {
	for (int j = giaTriCuoi; j <= n; j++) { // Xét các giá trị từ giaTriCuoi đến n
		phanTich[i] = j; 
		tong[i] = (i == 0) ? j : tong[i - 1] + j; 
		
		if (tong[i] == n) {
			soCach++;
			FILE *fileXuat = fopen("Lab4_3.out", "a");
			for (int k = 0; k <= i; k++) {
				fprintf(fileXuat, "%d ", phanTich[k]);
			}
			fprintf(fileXuat, "\n");
			fclose(fileXuat);
		} else if (tong[i] < n) {
			thuThap(i + 1, j);
		}
	}
}

int main() {
	printf("Nhap n (0 < n < 20): ");
	scanf("%d", &n);
	
	if (n <= 0 || n >= 20) {
		printf("Gia tri n khong hop le!\n");
		return 1;
	}
	FILE *fileXuat = fopen("Lab4_3.out", "w");
	fclose(fileXuat); 
	thuThap(0, 1);
	if (soCach == 0) {
		fileXuat = fopen("Lab4_3.out", "w");
		fprintf(fileXuat, "-1\n");
		fclose(fileXuat);
	}
	
	return 0;
}
#include<stdio.h>

long tong(int n){
	if(n==1){
		return 1;
	}return n + tong( n-1) ;
}
int main(){
	int n;
	do{
		printf("nhap n: " );
		scanf("%d", &n);
	}while(!(n>5 && n<100));
	printf("tong n so nguyen duong dau tien: %d", tong(n));
	return 0;
}


#include<stdio.h>

long long TongBinhPhuong(int n){
	if(n==1){
		return 1;
		
	}return n*n + TongBinhPhuong(n-1);
}
int main(){
	int n;
	while(!(n>5 && n< 30)){
		printf(" nhap n: ");
		scanf("%d", &n);
	}
	printf("tong binh phuong: %d", TongBinhPhuong(n));
	return 0;
}
#include<stdio.h>
#define maxa 100

long long TongPhanTu(int a[], int n ){
	if(n==1){
		return a[0];
	}return a[n-1] + TongPhanTu(a, n-1);
}
int PhanTuNhoNhat(int a[], int n){
	if(n==1){
		return a[0];
	} int min= PhanTuNhoNhat(a, n-1);
	return (a[n-1] < min) ? a[n-1] : min;
	
}
int main(){
	int a[maxa], n , i;
	do{
		printf("nhap so long phan tu: ");
		scanf("%d", &n);
	}while(!(n>5 && n<100));
	for( i=0;i<n;i++){
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	printf("tong cac phan tu: %d\n",TongPhanTu(a,n));
	printf("Phan tu nho nhat trong mang a: %d", PhanTuNhoNhat(a,n));
	return 0;
}
#include<stdio.h>
#define maxa 100
#define maxb 100

float a[maxa][maxb]; // Khai báo ma trận toàn cục

// Hàm nhập ma trận
void nhapmang2(int &m, int &n) {
	do {
		printf("Nhap so hang (2 <= m <= 5) va so cot (2 <= n <= 10): ");
		scanf("%d%d", &m, &n);
	} while (!(m >= 2 && m <= 5 && n >= 2 && n <= 10)); // Kiểm tra điều kiện
	
	printf("Nhap cac phan tu cua ma tran:\n");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%f", &a[i][j]); // Nhập từng phần tử
		}
	}
}

// Hàm xuất ma trận
void xuat(int m, int n) {
	printf("Cac phan tu cua ma tran:\n");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%.2f ", a[i][j]); // In từng phần tử với 2 chữ số thập phân
		}
		printf("\n"); // Xuống dòng sau mỗi hàng
	}
}

int main() {
	int m, n;          // Khai báo số hàng và số cột
	nhapmang2(m, n);   // Nhập ma trận
	xuat(m, n);        // Xuất ma trận
	return 0;
}
#include <stdio.h>

// Hàm rút tiền theo kỹ thuật tham lam
void rutTienThamLam(int soTien) {
	// Các mệnh giá tiền
	int menhGia[] = {200000, 100000, 50000, 20000, 10000};
	int soLoaiTien = sizeof(menhGia) / sizeof(menhGia[0]);
	int soLuongTo[soLoaiTien]; // Mảng lưu số lượng tờ tiền của từng mệnh giá
	
	// Khởi tạo số lượng tờ tiền của từng mệnh giá là 0
	for (int i = 0; i < soLoaiTien; i++) {
		soLuongTo[i] = 0;
	}
	
	// Áp dụng thuật toán tham lam
	for (int i = 0; i < soLoaiTien; i++) {
		if (soTien >= menhGia[i]) {             // Chọn mệnh giá lớn nhất có thể
			soLuongTo[i] = soTien / menhGia[i]; // Số lượng tờ tiền cần lấy
			soTien = soTien % menhGia[i];       // Cập nhật số tiền còn lại
		}
	}
	
	// Nếu không thể rút đủ số tiền
	if (soTien != 0) {
		printf("Không the rut du so tien yeu cau!\n");
		return;
	}
	
	// Hiển thị kết quả
	printf("Phuong an tra tien :\n");
	for (int i = 0; i < soLoaiTien; i++) {
		if (soLuongTo[i] > 0) {
			printf("%d x %d\n", soLuongTo[i], menhGia[i]);
		}
	}
}

int main() {
	int soTien;
	printf("Nhap so tien can rut: ");
	scanf("%d", &soTien);
	
	// Kiểm tra điều kiện nhập
	if (soTien % 10000 != 0) {
		printf("So tien can rut !\n");
	} else {
		rutTienThamLam(soTien);
	}
	
	return 0;
}
#include <stdio.h>

// Hàm chia để trị tìm phần tử lớn nhất
int timPhanTuLonNhat(int mang[], int trai, int phai) {
    if (trai == phai) {
        return mang[trai];  // Mảng chỉ có 1 phần tử
    }
    int giua = (trai + phai) / 2;
    int maxTrai = timPhanTuLonNhat(mang, trai, giua);
    int maxPhai = timPhanTuLonNhat(mang, giua + 1, phai);
    return (maxTrai > maxPhai) ? maxTrai : maxPhai;
}

int main() {
    int mang[] = {1, 5, 3, 9, 2, 9, 7};
    int n = sizeof(mang) / sizeof(mang[0]);
    int lonNhat = timPhanTuLonNhat(mang, 0, n - 1);
    printf("Phần tử lớn nhất trong mảng là: %d\n", lonNhat);
    return 0;
}
#include<stdio.h>

void SelectionSort(int a[], int n){
	int min, t;
	for(int i=0;i<n-1;i++){
		min = i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min = j;
			}
		}
		if(min != i){
			t = a[min];
			a[min]=a[i];
			a[i]=t;
		}
	}
}

int max, t;
for(int i=0;i<n-1;i++){
max = i;
for(int j=i+1;j<n;j++){
if(a[j]>a[max]){
max = j;
}
}
if(max != i){
t = a[max];
a[max]=a[i];
a[i]=t;
}
}
}

int main(){
	int a[]={54,56,76,6,4,5,9};
	int n= sizeof(a)/sizeof(a[0]);
	
	printf("mang ban dau: ");
	for(int i=0;i<n;i++){
		printf("%d  ", a[i]);
	}printf("\n");
	SelectionSort(a,n);
	
	printf("mang sau khi sap xep:");
	for(int i=0;i<n;i++){
		printf("%d  ", a[i]);
	}printf("\n");
	return 0;
	
	
}
#include<stdio.h>
#define Max 50

int n;
int a[Max][Max];
int x[Max];
int kq[Max];
int chuaxet[Max];
int best_sum = 1000;
int sum;
void Docfile(){
	FILE *f=fopen("DULICH.inp", "r");
	if(!f){
		printf("Err! ");
		return;
	}else{
		fscanf(f,"%d", &n);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				fscanf(f, "%d", &a[i][j]);
			}fscanf(f, "\n");
		}
		
	}fclose(f);
}
void XuatNghiem(){
	printf("%d\n ", n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d  ", a[i][j]);
		}printf("\n");
	}
}
void khoitao(){
	// thanh pho xuat phat la 1 
	x[1]=1;
	//danh dau cach thanh pho chua xet 
	for(int i=2;i<=n;i++){
		chuaxet[i]=1;
	}
}
// cap nhat cac nghiem tot nhat
void danhgia(){
	if(sum<best_sum){
		best_sum=sum;
		for(int i=1;i<=n;i++){
			kq[i]=x[i];
		}
	}
}
void Thu(int i){
	if(sum<best_sum){
		for(int j=2;j<=n;j++){
			if(chuaxet[j]){
				x[i]=j;
				chuaxet[j]=0;
				sum=sum +a[x[i-1]][j];
				if(i==n) danhgia();
				else Thu(i+1);
				sum=sum-a[x[i-1]][j];
				chuaxet[j]=1;
				
			}
		}
	}
}
void inketqua(){
	printf("TP1 ->");
	for(int i=2;i<=n;i++)
		printf("TP%d ->", kq[i]);
	printf("TP1\n");
	printf("Tong chi phi la: %d",best_sum+a[kq[n]][1]);
		
	
}
int main(){
	Docfile();
	XuatNghiem();
	khoitao();
	Thu(2);	
	inketqua();
	
	
}
#include<stdio.h>

int max(int a[], int left, int right){
	if(left == right){
		return a[left];
	}
	int m = (left + right)/2;
	int leftMax = max(a,left,m);
	int rightMax = max(a, m+1,right);
	return leftMax > rightMax ? leftMax : rightMax ;
}

int count(int a[], int left, int right, int x){
	if(left==right){
		if(a[left]==x){
			return 1;
		}else return 0;
	}
	int m= (left + right)/2 ;
	return count(a,left,m,x) + count(a,m+1,right,x);
}
int find(int a[], int left, int right){
	if(left=right){
		return a[left];
	}
	int mid = (left +right)/2;
	int lMajor = find(a,left,mid);
	int rMajor = find(a, mid +1,right);
	
	int lCount = count(a, left, right, lMajor);
	int rCount= count(a,left,rMajor,right);
	
	return (lCount >= rCount) ? lMajor : rMajor;
}
int main(){
	int x;
	int a[]={56,23,45,34,34,65,34};
	int n= sizeof(a)/ sizeof(a[0]);
	printf(" nhap so can dem: ");
	scanf("%d", &x);
	printf("phan tu lon nhat trong mang: %d\n", max(a,0,n-1));
	printf("So lan xuat hien cua gia tri %d: %d\n",x, count(a,0,n-1,x));
	printf("Phan tu xo so lan xuat hien nhieu nhat trong mang: %d", find(a,0,n-1));
	return 0;
}
#include<stdio.h>
//#define max 50

void InsertionSort(int a[], int n){
	int t,j;
	for(int i=1;i<n;i++){
		j = i-1;
		t=a[i];
		while(t>a[j] && j>=0){// tang (t>a[j]) giam (t<a[j])
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
		
	}
}
int main(){
	int a[]={43,75,96,85,76,84,34};
	int n=sizeof(a)/sizeof(a[0]);
	
	printf("Mang ban dau: ");
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}printf("\n");
	InsertionSort(a,n);
	printf("Mang sau khi sap xep: ");
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
	return 0;
}
#include<stdio.h>
void BubbleSort(int a[], int n){
	int t;
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>i;j--){
			if(a[j]<a[j-1]){   // tang a[j]<a[j-1]; giam a[j]>a[j-1]
				t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
		}
	}
}
int main(){
	int a[]={67,98,56,76,96,66,36};
	int n=sizeof(a)/sizeof(a[0]);
	
	printf("Mang ban dau: ");
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}printf("\n");
	BubbleSort(a,n);
	printf("Mang sau khi sap xep: ");
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
	return 0;
}
#include<stdio.h>
int min(int a[], int left, int right){
	if(left == right){
		return a[left];
	}
	int m = (left + right)/2;
	int leftMax = min(a,left,m);
	int rightMax = min(a, m+1,right);
	return leftMax < rightMax ? leftMax : rightMax ;
}
int count(int a[], int left, int right, int x){
	if(left==right)
		return (a[left] % x == 0) ? 1 : 0;
		else return 0;
	int m= (left + right)/2 ;
	return count(a,left,m,x) + count(a,m+1,right,x);
}

int main(){
	int x=3;
	int a[]={56,18,45,34,34,65,34};
	int n= sizeof(a)/ sizeof(a[0]);
	printf("phan tu nho nhat trong mang: %d\n", min(a,0,n-1));
	 printf("So phan tu la boi cua %d: %d\n",x, count(a,0,n-1,x));
	return 0;
}
#include<stdio.h>

int Phanvung(int a[], int l , int r){
	int t;
	int x =a[l];
	int i = l +1;
	int j = r;
	do{
		while((i<=j) & (a[i]<=x)){
			i++;
		}
		while((i<=j) & (a[j]>x)){
			j--;
		}
		if(i<j){
			t=a[i];
			a[i]=a[j];
			a[j]=t;
			
		}
	}while(i<j);
	t=a[l];
	a[l]=a[j];
	a[j]=t;
	return j;
}
void QuickSort(int a[], int l, int r){
	if(l<r){
		int	k= Phanvung(a,l,r);
		
		QuickSort(a,l,k-1);
		QuickSort(a,k+1,r);
	}
}
int main(){
	int a[]={43,75,96,85,76,84,34};
	int n=sizeof(a)/sizeof(a[0]);
	
	printf("Mang ban dau: ");
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}printf("\n");
	
	QuickSort(a,0,n-1);
	
	printf("Mang sau khi sap xep: ");
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
	return 0;
}
#include<stdio.h>
#define max 50
int n;
int a[max];
int i;
void DocFile(){
	FILE *f=fopen("Dulieu.inp", "r");
	if(!f){
		printf("Err!");
		return;
	}else{
		fscanf(f,"%d", &n);
		for(int i=0;i<n;i++){
			fscanf(f,"%d  ", &a[i]);
			
		}
		
	}fclose(f);
}
void Xuat(){
	printf("So luong day so: %d\n ", n);
	for(int i=0;i<n;i++){
		printf("%d  ", a[i]);
	}printf("\n");
	
}
int DemAmViTriLe(int i) {
	if (i >= n) return 0;
	int dem = 0;
	if (i % 2 != 0 && a[i] < 0) { 
		dem ++;
	}
	
	return dem + DemAmViTriLe(i + 1);
}
bool KiemTra(int a[], int n, int i){
	if(i==n){
		return true;
	}
	if(a[i]%2==0){
		return false;
	}
	return KiemTra(a,n,i+1);
}
int main(){
	DocFile();
	Xuat();
	printf("So luong so nguyen am o vi tri le: %d\n", DemAmViTriLe(0));
	  if (Kiemtra(a,n,i+1)) {
        printf("Tất cả các phần tử trong mảng đều là số lẻ.\n");
    } else {
        printf("Không phải tất cả các phần tử trong mảng đều là số lẻ.\n");
    }
	
	return 0;
	
}
#include<stdio.h>
#define max 50
float a[max];
int n;
void DocFile(){
	FILE *f=fopen("MangSoThuc.inp", "r");
	if(!f){
		printf("Err!");
		return;
	}else{
		fscanf(f, "%d\n", &n);
		for(int i=0;i<n;i++){
			fscanf(f, "%f", &a[i]);
		}
	}fclose(f);
}
void Xuat(){
	printf("So luong so thuc: %d\n", n);
	for(int i=0;i<n;i++){
		printf("%6.2f", a[i]);
	}
}
double TongMangThuc(int a[], int n, int i){
	if(i==n){
		return a[i];
	}
	double tong;
	return tong + TongMangThuc(a,n,i+1);
}
int main(){
	DocFile();
	Xuat();
	printf("Tong cac phan tu trong day so: %.2f ",TongMangThuc());
	return 0;
}
Parse 	Phân tích cú pháp
Fault Tolerance	Khả năng chịu lỗi
High Availability	Tính sẵn sàng cao
High Performance	Hiệu suất cao
Disaster Recovery	Khả năng phục hồi
Algorithm	Thuật toán
Execution	Thực thi
Proxy 	Ủy quyền
Site Generation	Tạo trang web
Side Rendering	Kết xuất trang web
Interpreter	Thông dich
Per	Mỗi
Monitoring	Giám sát
Atomicity	Nguyên Tử
Consistency	Nhất quán
Concurrency	Đồng thời
Isolation	Cô lập
Durability	Lâu bền, bền bỉ
Cost	Chi phí
Accelerate	Tăng tốc
Parse 	Phân tích cú pháp
#include <stdio.h>
#include <math.h>  // Dùng cho hàm floor()

double tinh_tien(double X, double a, double b, int N) {
	// Số tiền sau N năm với lãi suất gộp vào gốc
	double tien = X * pow(1 + a, N);
// Số lần quà tặng (mỗi 10 năm)
	int so_qua = N / 10;
// Cộng quà tặng vào tài khoản sau mỗi 10 năm
	tien += so_qua * b;
	return tien;
}
int main() {
	double X, a, b;
	int N;
	// Nhập số tiền ban đầu, lãi suất, quà tặng và số năm
	printf("Nhap so tien ban dau X: ");
	scanf("%lf", &X);
	printf("Nhap lai suat hang nam a (dinh dang phan tram, 5%% la 0.05): ");
	scanf("%lf", &a);
	printf("Nhap gia tri qua tang b: ");
	scanf("%lf", &b);
	printf("Nhap so nam N: ");
	scanf("%d", &N);
	
	// Tính và in số tiền sau N năm
	double so_tien = tinh_tien(X, a, b, N);
	printf("So tien sau %d nam la: %.2f\n", N, so_tien);
	
	return 0;
}
#include<stdio.h>
#define max 50
#define SWAP(a,b,c){c=a,a=b,b=c;}
float v[]={4,7,10,2};// gia tri cua tung mon hang 
float w[]={5,3,6,4};
int n=sizeof(v)/sizeof(v[0]);
int x[max];
float p[max];
float T,M=9;
void init(){
	T=M;
	for(int i=0;i<n;i++){
		p[i]=v[i]/w[i];
	}
	float temp;
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++){
		if(p[i]<p[j]){
			SWAP(p[i],p[j],temp);
			SWAP(v[i],v[j],temp);
			SWAP(w[i],w[j],temp);
		}
	}
}
void Print(){
	printf("Trong luong tui dung do vat: %.1f\n",M-T);
	T=0;
	float k=0;
	for(int i=0;i<n;i++){
		if(x[i]!=0){
		printf("x:%d v:%.2f | w;%2.f\t", x[i], v[i], w[i]);
			T=T + x[i]*v[i];
			k=k +x[i]*w[i];
			
		}
	}
	printf("\ngia tri lon nhat la %.1f voi tong trong luong la %.1f\n",T,k);
}
void Greedy(){
	int i= 0;
	while(T>0 && i<n){
		if(T>= w[i]){
			x[i]++;
		}
		else{
			i++;
		}
	}
}
int main(){
	init();
	Print();
	Greedy();
	return 0;
}
int DemChuSo(int n){
	n = abs(n);// tri tuyet doi
	if(n==0){
		return 1;
	}
	int dem=0;
	while(n>0){
		n/=10;
		dem++;
	}
	return dem;
}
int mani(){
	printf("nhap n: ");
	scanf("%d", &n);
printf("So luong chu so cua n la: %d\n", DemChuSo(n));
}
#include <stdio.h>
#include <stdlib.h>

// Định nghĩa một nút trong danh sách liên kết
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Hàm tạo một nút mới
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Thêm phần tử vào đầu danh sách
void addFirst(Node** head, int data) {
    Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// Thêm phần tử vào cuối danh sách
void addLast(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Thêm phần tử vào vị trí bất kỳ (chỉ số bắt đầu từ 0)
void addAt(Node** head, int index, int data) {
    if (index == 0) {
        addFirst(head, data);
        return;
    }
    Node* temp = *head;
    for (int i = 0; i < index - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Chỉ số vượt quá giới hạn\n");
        return;
    }
    Node* newNode = createNode(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

// Xóa phần tử ở đầu danh sách
void deleteFirst(Node** head) {
    if (*head == NULL) {
        printf("Danh sách rỗng\n");
        return;
    }
    Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

// Xóa phần tử ở cuối danh sách
void deleteLast(Node** head) {
    if (*head == NULL) {
        printf("Danh sách rỗng\n");
        return;
    }
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }
    Node* temp = *head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

// Xóa phần tử ở vị trí bất kỳ (chỉ số bắt đầu từ 0)
void deleteAt(Node** head, int index) {
    if (index == 0) {
        deleteFirst(head);
        return;
    }
    Node* temp = *head;
    for (int i = 0; i < index - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        printf("Chỉ số vượt quá giới hạn\n");
        return;
    }
    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    free(toDelete);
}

// In danh sách liên kết
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    Node* head = NULL;

    addFirst(&head, 10);
    addLast(&head, 20);
    addAt(&head, 1, 15);
    printList(head); // Output: 10 -> 15 -> 20 -> NULL

    deleteFirst(&head);
    printList(head); // Output: 15 -> 20 -> NULL

    deleteLast(&head);
    printList(head); // Output: 15 -> NULL

    addLast(&head, 25);
    addLast(&head, 30);
    deleteAt(&head, 1);
    printList(head); // Output: 15 -> 30 -> NULL

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <float.h> // Để sử dụng FLT_MAX

// Định nghĩa cấu trúc của một nút trong danh sách liên kết
typedef struct Node {
	float data;
	struct Node* next;
} Node;

// Hàm tạo một nút mới
Node* createNode(float data) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

// Hàm thêm một phần tử vào cuối danh sách liên kết
void append(Node** head, float data) {
	Node* newNode = createNode(data);
	if (*head == NULL) { // Nếu danh sách rỗng
		*head = newNode;
		return;
	}
	Node* current = *head;
	while (current->next != NULL) {
		current = current->next;
	}
	current->next = newNode;
}

// Hàm tìm số dương nhỏ nhất trong danh sách liên kết
float findMinPositive(Node* head) {
	float minPositive = FLT_MAX; // Giá trị lớn nhất có thể của kiểu float
	Node* current = head;
	int foundPositive = 0; // Cờ để kiểm tra xem có số dương nào không
	
	while (current != NULL) {
		if (current->data > 0 && current->data < minPositive) {
			minPositive = current->data;
			foundPositive = 1;
		}
		current = current->next;
	}
	
	return foundPositive ? minPositive : -1; // Trả về -1 nếu không tìm thấy số dương
}

// Hàm giải phóng bộ nhớ của danh sách liên kết
void freeList(Node* head) {
	Node* current = head;
	Node* next;
	while (current != NULL) {
		next = current->next;
		free(current);
		current = next;
	}
}

// Chương trình chính
int main() {
	Node* head = NULL;
	float numbers[] = {-1.5, 3.2, 0.0, -2.8, 1.1, 4.5, -0.3};
	int n = sizeof(numbers) / sizeof(numbers[0]);
	
	for (int i = 0; i < n; i++) {
		append(&head, numbers[i]);
	}
	
	float minPositive = findMinPositive(head);
	if (minPositive != -1) {
		printf("So duong nho nhat trong danh sach la: %.2f\n", minPositive);
	} else {
		printf("Danh sach khong chua so duong.\n");
	}
	
	freeList(head);
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <float.h>

// Cấu trúc của một nút trong danh sách liên kết
typedef struct Node {
    float data;
    struct Node* next;
} Node;

// Hàm tạo một nút mới
Node* createNode(float value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Lỗi cấp phát bộ nhớ.\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
void chendau(Node* dau, int x){
	Node *new = (Node*)malloc(sizeof(Node));
	new->giatri=x;
	new->tiep;
	dau = new;
	return dau;
}

// Hàm thêm một nút vào cuối danh sách liên kết
void appendNode(Node** head, float value) {
    Node* newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Hàm tìm số âm lớn nhất trong danh sách liên kết
float findLargestNegative(Node* head) {
    float largestNegative = -FLT_MAX; // Gán giá trị nhỏ nhất của kiểu float
    int found = 0; // Biến kiểm tra có số âm hay không

    while (head != NULL) {
        if (head->data < 0 && head->data > largestNegative) {
            largestNegative = head->data;
            found = 1;
        }
        head = head->next;
    }

    return found ? largestNegative : 0; // Trả về 0 nếu không có số âm
}

// Hàm giải phóng bộ nhớ của danh sách liên kết
void freeList(Node* head) {
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}
void duyetDS(Node *dau) {
Node *tam;
tam = dau;
while (tam != NULL) {
// Xử lý nút tam;
tam = tam->tiep;
}
}

// Hàm main
int main() {
    Node* list = NULL;

    // Thêm các phần tử vào danh sách liên kết
    appendNode(&list, 3.2);
    appendNode(&list, -1.5);
    appendNode(&list, -7.8);
    appendNode(&list, 4.6);
    appendNode(&list, -3.1);

    // Tìm số âm lớn nhất
    float largestNegative = findLargestNegative(list);
    if (largestNegative != 0) {
        printf("Số âm lớn nhất trong danh sách là: %.2f\n", largestNegative);
    } else {
        printf("Không có số âm trong danh sách.\n");
    }

    // Giải phóng bộ nhớ
    freeList(list);

    return 0;
}
*/











