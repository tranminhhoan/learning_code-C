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
}*/
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
/*
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
*/
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







