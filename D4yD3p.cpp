/*Đối với Chirox, dãy đẹp là một dãy gồm toàn số lẻ. Vậy nên mỗi khi gặp dãy có
chứa số chẵn, Chirox sẽ cố biến nó thành dãy đẹp bằng cách này hoặc cách khác.
Hôm nay, Chirox nghĩ ra một cách mới để biến đổi một dãy bất kì thành dãy đẹp.
Chirox sẽ làm như sau: Tại mỗi bước, Chirox sẽ chọn một số chẵn c và chia những
số bằng c có trong dãy cho 2. Chirox có thể thực hiện bước này vô số lần.
Hãy tìm số bước ít nhất để đưa một dãy bất kì về dãy đẹp sử dụng cách biến đổi trên.
Input:
- Dòng đầu tiên chứa một số nguyên 𝑁 (1 ≤ 𝑁 ≤ 2.105
) là số phần tử của dãy.
- Dòng thứ 2 chứa 𝑁 số nguyên 𝑎𝑖(1 ≤ 𝑎𝑖 ≤ 109
)
Output: Một số nguyên duy nhất là số bước ít nhất mà Chirox cần để biến đổi dãy
ban đầu thành dãy đẹp.
input: 6
	40 6 40 3 20 1
output 4
input: 4
	2 4 8 16
output 4
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int x;
	int cnt = 0;
	set<int> :: iterator ptr;
	set<int> a;
	for(int i = 0; i < n; i++){
		cin >> x;
		if(x % 2 == 0) a.insert(x);
	}
	while (!a.empty()){
		ptr = a.end();
		ptr--;
		int temp = *ptr;

		temp /= 2; 
		cnt++;
		if(temp % 2 == 0) a.insert(temp);
		a.erase(*ptr);
	}
	cout << cnt;
	return 0;
}
