#include<stdio.h>
void nhap(float a[], int n)
{
	for (int i=0; i<=n;i++)
	  scanf("%f",&a[i]);
}
float tinh(float a[],int n, float c)
{
	if (n==0) return a[0];
	return tinh(a,n-1,c)*c+a[n];
}
int main(){
	float a[100],b[100],c,d;
	int m,n;
	printf(" nhap bac cho hai da thuc\n");
	scanf("%d%d",&n,&m);
	printf("nhap he so cho da thuc bac n\n");
	nhap(a,n);
    printf("nhap he so cho da thuc bac m\n");
    nhap(b,m);
    printf(" nhap cac so can tinh\n");
    scanf("%f%f",&c,&d);
    printf(" ket qua cau a la: %0.2f\n",tinh(a,n,c)+tinh(b,m,c));
}
