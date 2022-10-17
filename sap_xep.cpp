#include <iostream>
#include <iomanip>
using namespace std ;
int Nhap_mang (int mang[], int n){
	for (int i = 0; i < n; i++){
		cin >> mang[i];
	}
	return 0; 
}

void hoan(int &a, int &b){
	int c;
	c = a;
	a = b;
	b = c;
}
void Sap_xep(int mang[], int n){
	for (int i = 0; i < n; ++i)
	{
		for (int j = i +1; j < n; ++j){
			if (mang[i] > mang[j])
				hoan(mang[i], mang[j]);
			
		}
	}
}

void xuat(int mang[], int n){
	for (int i = 0; i < n; ++i)
	{
		cout << mang[i] << ' ';
	}
}

int main(){
	int arr[100];
	int b;
	cin >> b ;
	Nhap_mang(arr, b);
	Sap_xep(arr, b);
	xuat(arr, b);
	return 0;
}
