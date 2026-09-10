///week01-2.cpp
///C++版本
#include <iostream>
using namespace std;///使用std命名空間
int main()
{
	int N;
	cin >> N;
	int b = N, ans = 0;
	while (N>0) {
		ans = ans*10 + N%10;
		N = N / 10;
	}
	///錯誤cout << b << ans << b+ans;///錯的版本,少了+=跳行
	///正確cout << b << "+" << ans << "=" << b+ans << "\n";///正確1
	///正確cout << b << "+" << "ans" << "=" << b+ans << "endl";///正確2
	printf("%d+%d=%d\n", b, ans, ans+b);
}
