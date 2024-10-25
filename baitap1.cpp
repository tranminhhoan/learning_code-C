/*#include<stdio.h>
#define MAX 50

void nhapDS(int a[], int &n){
    do{
        printf("nhap so phan tu n: ");
        scanf("%d", &n);
    }while (!(n>3 && n<50));
    for (int i = 0; i <n ; i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);


    }
    
  
    
}
int Dem(int a[], int n, int x){
    int linhcanh=-99999;
    a[n]=linhcanh;
    int i=0, dem =0;
    while (a[i]!=linhcanh)
    {
        if (a[i]==x)
        {
            dem++;
        }
        i++;
    }
    return dem;

}

bool KTGiam(int a[], int n){
    bool flag=true;
    for (int i = 0; i < n-1; i++)
    {
        if (a[i+1]>a[i])
        {
        flag=false;
        break;
        }
        
    }
    return flag;
    
}

int main(){
    int a[MAX], n,x;
    nhapDS(a,n);
    printf("nhap gia tri can dem so luong :");
    scanf("%d", &x);
    printf("dem so luong phan tu x: %d\n",Dem(a,n,x));
    if(KTGiam(a,n))
        printf("day so thu tu giam dan");
    else
        printf("day so thu tu khong giam dan");


}
*/
// bai 1.1
#include<stdio.h>// thu vien co chuc nang int out put
#include<math.h> // thu vien tinh toan 
#include<stdbool.h>// thu vien tra ve gia tri true false
//  ham kiem tra
bool KiemTra(float a, float b, float c){
    if (a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a)
    {
        return true;
    }
    return false;
}
// ham tinh s
float TinhS(float a, float b, float c){
    float p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));

}
// ham main
int main(){
    float a,b,c;
    printf("nhap 3 so thuc:");
    scanf("%f%f%f", &a,&b,&c);
    if (KiemTra(a,b,c))
    {
        printf("Dien tich cua tam giac la: %2f ", TinhS(a,b,c));

    }
    else printf(" 3 so tren k phai la do dai cua 3 canh cua tam giac ");

}
