#include <iostream>
using namespace std;


int pajaritas(int a, int b) {
	int res = 0;
	if (a<10 || b<10)
	{
		res = 0;
	}
	else
	{
		if (a>b)
		{
			res = a / b;
			res += pajaritas(a - (b * (a / b)), b);
		}
		else
		{
			res = b / a;
			res += pajaritas(a	, b - (a * (b / a))) ;
		}
		
	}
	return res;
}

bool resuelve() {
	int a, b;
	cin >> a >> b;
	if (a == 0 && b == 0)return false;

	int res = pajaritas(a, b);
	cout << res << '\n';
	return true;
}

int main() {
	while (resuelve()) { ; }
}