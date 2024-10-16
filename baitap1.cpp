#include<stdio.h>
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