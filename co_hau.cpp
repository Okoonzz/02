/*** CÓ HẬU
Jim thích các phim và truyện kết thúc có hậu. Một lần gặp may với số n và từ đó Jim rất có cảm tình với tất cả các số nguyên kết thúc bằng n, coi chúng là những số có hậu. Ví dụ với n = 25 thì các số 625, 553325,1025 là những số có hậu, còn 3255 – không có hậu!

Jim không thích các ràng buộc và hạn chế. Nhưng trong thế giới thực của chúng ta ràng buộc và hạn chế là điều tất yếu. Một người bạn của Jim khuyên chỉ nên quan tâm đến các số nguyên không vượt quá m và dĩ nhiên, Jim muốn biết có bao nhiêu số có hậu không vượt quá m.

Dữ liệu: Vào từ thiết bị nhập chuẩn gồm một dòng chứa 2 số nguyên n và m (1 ≤ n ≤ m ≤ 2×109).

Kết quả: Đưa ra thiết bị xuất chuẩn một số nguyên – số lượng số có hậu tìm được.***/

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std ;
int main()
{
	  int a, b, c, d;
	 cin >> a >> b;
	 int dem = 0; 
		for(int i = a; i >= 10;){
			i /= 10;
			dem ++;
		}
		c = dem + 1;
		d = b%int(pow(10,c));
		if( d < a){
			cout << int(b/pow(10,c));
		}
else {
	cout << int(b/pow(10,c) +1);
	}
    return 0;
}


