#include<iostream>
//

using namespace std;


int digMayor(int v[], int ini, int fin) {

	int res=0;
	if (ini+1==fin && v[ini] != (v[fin]-(fin-ini)))
	{
		res = v[fin] - (fin - ini);
	}
	else {
		int medio = (ini + fin) / 2;
		if (v[medio]!=(v[fin]-(fin-medio)))
		{
			res = digMayor(v, medio, fin);
		}
		else
		{
			res = digMayor(v, 0, medio);
		}
	}
	return res;
}

bool resuelve() {
	int n;
	int res;
	cin >> n;
	int v[10000];
	if (n == 0)return false;
	int i = 0;
	while (i < n) {
		cin >> v[i];
		i++;
	}
	if (v[n - 1] == v[0])
	{
		res = 0;
	}
	else {
		res = digMayor(v, 0, n-1);
	}
	cout << res << endl;
	return true;
}
int main() {
	while (resuelve()) { ; }
}
