#include <iostream>
using namespace std;



int loteria(int v[], int n) {//devuelve res(resultado guardado)
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		if (v[i]%2 == 0)
		{
			res++;
		}
	}
	return res;
}

void resuelve() {
	int n;
	int v[99999];
	int res = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	res= loteria(v, n);
	cout << res << endl;
}
int main() {
	int n;
	cin >> n;
		for (int i = 0; i < n; i++)
		{
			resuelve();
		}
}