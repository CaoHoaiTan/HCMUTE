//-----Min(a,b,c)-----

#include <stdio.h>

void nhap(int &a, int &b, int &c);
int min(int a, int b);
void xuat(int a);

int main(){
	int a,b,c;
	nhap(a,b,c);
	int kq=min(min(a,b),c);
	xuat(kq);
	return 0;
}

void nhap(int &a, int &b, int &c){
	scanf("%d%d%d", &a, &b, &c);
}

void xuat(int a){
	printf("%d", a);
}

int min(int a, int b){
	if (a<=b)
		return a;
	else
		return b;
}

/*
int main(){
	int a,b,c;
	nhap(a,b,c);
	int kq=min(a,b,c);
	xuat(kq);
}

int min(int a, int b, int c){
	if ((a<=b)&&(a<=c))
		return a;
	else if ((b<=a)&&(b<=c))
			return b;
		else return c;
}
*/
