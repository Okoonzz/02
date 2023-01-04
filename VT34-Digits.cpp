/*Để kiểm tra trí thông minh của một rô bốt được cài đặt trí tuệ nhân tạo, người ta cho rô bốt đọc n số nguyên
dương a1,a2,...,an và k lần ra lệnh cho rô bốt chọn một chữ số tùy ý trong số tùy chọn và thay chữ số đó bằng
chữ số mới tùy thích, mục tiêu là làm cho tổng các số nhận được càng lớn càng tốt. Mỗi chữ số trong một số
chỉ được thay đổi không quá một lần. Rô bốt được coi là hoàn hảo và được xuất xưởng nếu độ chênh lệch giữa
tổng các số nhận được với tổng các số cho ban đầu là lớn nhất có thể.
Hãy xác định độ chênh lệch tối đa có thể đạt được.
Dữ liệu: Vào từ thiết bị vào chuẩn:
Dòng đầu tiên chứa 2 số nguyên n và k 
Dòng thứ 2 chứa n số nguyên a
Kết quả: Đưa ra thiết bị ra chuẩn một số nguyên – độ chênh lệch tối đa có thể đạt được.
input 3 1
	99 5 85
output 10
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
