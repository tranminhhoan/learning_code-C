//bai 1.2
#include<stdio.h>
#include<math.h>

bool KT_NguyenTo(int n);//false:khong NT, true: la NT
int TimUCLN(int a,int b);
int KT_Armstrong(int n);//0:khong Armstrong, 1: la Armstrong

int main(){
	unsigned int n;
	printf("Nhap so can kiem tra NT:");
	scanf("%d",&n);
	//su dung ham kiem tra nguyen to
	if(KT_NguyenTo(n))
		printf("%d la so NT!",n);
	else 
		printf("%d khong la so NT!",n);
	
	//tim UCLN
	int x,y;
	printf("Nhap 2 so nguyen:");
	scanf("%d%d",&x,&y);
	printf("UCLN(%d,%d) la %d",x,y,TimUCLN(x,y));
	
	//so Armstrong
	printf("Nhap so can kiem tra Armstrong:");
	scanf("%d",&n);
	//su dung ham kiem tra so Armstrong
	if(KT_Armstrong(n))
		printf("%d la so Armstrong!",n);
	else 
		printf("%d khong la so Armstrong!",n);
}
//ham kiem tra NT tra ve true neu la NT, false khong NT
bool KT_NguyenTo(int n){
	bool ngto=true;//gia su n la NT
	int i;
	for(i=2;i*i<=n;i++)
		if(n%i==0){
			ngto=false;
			break;
		}
	return ngto;
}
//tim uoc chung lon nhat
int TimUCLN(int a,int b){
	int t=a%b;
	while(t!=0){
		a=b;
		b=t;
		t=a%b;
	}
	return b;
}
//kiem tra Armstrong: 0 khong la Armstrong, 1: la so Armstrong
int KT_Armstrong(int n){
	int m=n,s=0,dvi;
	//tach tung so và tính tong lap phuong
	while(m!=0){
		dvi = m%10;
		s +=pow(dvi,3);
		m = m/10;
	}
	if(s==n)
		return 1;
	return 0;
}