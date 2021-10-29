#include <iostream>

using namespace std;
int v[50000];

//pos : 0<=n<=lon(n)
int parejas(int v[], int n) {
	int i = 0, impar = 0, sumparejas = 0;
	while (i < n) {
		if (!(v[i]%2==0))
		{
			impar++;
		}
		if (impar > 0) {
			if (v[i]%2==0)
			{
				sumparejas += impar;

			}
		}
		i++;
	}
	return sumparejas;
}
//pos: sumaparejas = suma i: 0<=i<=n : impar
//invariante: si existe un impar aumenta a uno y
//				si existe par acumula sumatorio de numero de impar por cada par 



void resuelve() {
	int n;
	cin >> n;
	int i = 0;
	while (i < n) {
		cin >> v[i];
		i++;
	}
	int res = parejas(v, n);
	cout << res << endl;
	
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