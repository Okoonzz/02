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
input: 4
	2 4 8 16
*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const int N = 1e6;

vector<int> a(N);

int main(){
    int n, k; cin >> n >> k;

    int pow10[10];
    pow10[0] = 1;
    for (int i = 1; i < 10; i++){
        pow10[i] = pow10[i - 1] * 10;
    }
    for (int i = 0; i < n; i++){
        string s; cin >> s;
        int len = s.size();
        for (int j = 0; j < len; j++){
            a.push_back((9 - (s[j] - '0')) * pow10[len - j - 1]);
        }
    }
    sort(a.begin(), a.end(), greater<int>());
    long long res = 0;
    for (int i = 0; i < k; i++){
        res = res + a[i];
    }
    cout << res;
    return 0;
}
