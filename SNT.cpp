#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std ; 
int nguyen_to(int n){
	for(int i = 2; i <= n-0.5; i++){
		if(n % i == 0){
			return false;
		}
	}
	return n > 1; 
}
int main(){
	int mang[6];
	for(int i = 0; i <= 6; i++){
		cin >> mang[i];
	}
	for(int i = 0; i <= 6; i++){
		if(nguyen_to(mang[i])){
		cout << mang[i] << ' ';
		}
	}
	return 0 ;
}