/* Kiểm tra trong một đoạn có bao nhiêu SNT 
mà nghịch đảo của nó cũng SNT*/
/* Tham khảo sàng Eratosthenes: https://vnoi.info/wiki/translate/he/Number-Theory-2.md */
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int nghichdao(long long n){
	long long temp;
	long long res = 0;
	while(n > 0){
		temp= n % 10;
		res = res * 10 + temp;
		n = n/10;
	} 
	return res;
}
bool SNT(int k ){
	for (int j = 2; j <= sqrt(k); j++) {
		if (k % j == 0) return false;
	}
	return true;
}
int main(){
	int count = 0;
	long long n ;
	long long m;
	cin >> m >> n;
	for(long long i = m; i <= n ; i++){
		if(SNT(i)){
			if(SNT(nghichdao(i))){
				count++;
			}
		}
	}
	cout << count; 
	return 0;
}
