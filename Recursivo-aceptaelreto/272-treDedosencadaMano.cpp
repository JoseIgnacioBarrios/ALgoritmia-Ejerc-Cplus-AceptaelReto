#include<iostream>
using namespace std;



int baseseis(int n) {
	int res;
	if (n < 6)res = n;
	else
	{
		res = baseseis(n / 6) * 10 + n % 6;
	}
	return res;
}

bool resuelve() {
	int n;
	cin >> n;

	int res = baseseis(n);
	cout << res << endl;
	return true;

}

int main() {
	int n;
	cin >> n;
	int i = 0;
	while (i<n) { 
		resuelve();
		i++;
	}
}