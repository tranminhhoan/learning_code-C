// bài 1.1 
#include<stdio.h>
#include<math.h>

bool Kiemtra(float a, float b, float c);
float TinhDT(float a, float b, float c);
// c) Trong ham main, cho phep nguoi dung nhap 3 so thuc, kiem tra neu hop le la 3 canh trong tam giac thi tinh dien tich va in ra man hinh, no khong hop le thi thong bao loi
int main(){
	float a,b,c;
	printf("nhap 3 so thuc:");
	scanf("%f%f%f", &a,&b,&c);
	if(Kiemtra(a,b,c))
		printf("Dien tich tam giac:%.2f",TinhDT(a,b,c));
	else
		printf("3 so khong phai la do dai 3 canh tam giac!");
	
	
}
//a)kiem tra 3 gia tri co phai la do dai cua 3 canh tam giac hay khong ? true: la 3 canh tam giac 
bool Kiemtra(float a, float b, float c){
	if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a )
		return true;
	return false;
	
	
}
// b) Tinh dien tich tam giac theo cong thuc heron
float TinhDT(float a, float b, float c){
	float p= (a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
	

}