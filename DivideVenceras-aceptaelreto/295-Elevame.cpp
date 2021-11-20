#include<iostream>
using namespace std;
const int k = 31543;

long long int elevame(long long int x, long long int n) {
	long long int res = 0;
	if (n == 0)res = 1;
	else
	{
		res = elevame(x, n / 2);
		if (n % 2 == 0)res = res * res;
		else res = res * res * x;
	}
	return res % k;
}

bool resuelve() {
	long long int x, n;
	cin >> x >> n;
	if (x == 0 && n == 0)return false;

	cout << elevame(x, n) << '\n';
	return true;
}
int main() {
	while (resuelve()) {;}
}