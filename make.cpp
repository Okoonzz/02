#include <iostream>
using namespace std ; 
int main()
{
 int a, b ;
 cout << "nhap a: ";
 cin >> a ;
  cout << "nhap b: ";
  cin >> b ;
 int c = a ;
 a = b ; 
b = c ;
cout << "gia_tri_moi_cua a la: " << a << '\n' ; 
cout << "gia_tri_moi_cua b la: " << b ;
return 0;
}
