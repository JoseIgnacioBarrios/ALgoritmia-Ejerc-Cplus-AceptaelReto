#include <iostream>

using namespace std;
 

bool resuelve() {
	int n;
	long long int res=0,ante=0,a;
	cin >> n;
	if (n == 0)return false;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		res += ante * a;
		ante += a;

	}
	cout << res << endl;
	return true;
}
int main() {
	while (resuelve())
	{
		;
	}
}