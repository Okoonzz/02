// #include<iostream>

// using namespace std;

// int x[11];
// void printArray(int a[], int n){
// 	for (int i = 1; i <= n; i++){
// 		cout << a[i];
// 	}
// 	cout <<" ";
// }
// void dequy(int h, int k, int n){
// 	for (int i = x[h-1] + 1; i <= n - (k-h); i++){
// 		x[h] = i;
// 		if (h == k) printArray(x, k);
// 		else {
// 			dequy(h+1, k, n);
// 		}
// 	}
// }
// int main(){
// 	int n, k;
// 	cin >> n >> k;
// 	x[0] = 0;
// 	dequy(1, k, n);
// }

/* Kiểm tra trong một đoạn có bao nhiêu SNT 
mà nghịch đảo của nó cũng SNT*/
#include <iostream>
#include <iomanip>
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
void Eratosthenes(long long m, long long n, bool check[] ){
	for(long long i = m; i <= n; i++){
			if(check[i]==true){
				for(long long j = 2*i; j <= n; j += i){
					check[j]= false;
				}
			}
		}
}
int main(){
	int count = 0;
	long long n ;
	long long m;
	cin >> m >> n;
	bool check[n+1];
	for(long long i = m; i <= n ; i++){
		check[i] = true;
	}
	Eratosthenes(m, n, check);
	for(long long i = m; i <= n; i++){
		if(check[i] == true){
			nghichdao(i);
			if(check[nghichdao(i)] == true){
				count ++;
			}
		}
	}
	cout << count; 
	return 0;
}
