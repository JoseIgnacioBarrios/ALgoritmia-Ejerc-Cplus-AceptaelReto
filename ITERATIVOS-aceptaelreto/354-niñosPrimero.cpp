#include <iostream>

using namespace std;

int v[200000];

int ninos(int v[], int n) {
	int i = 1,nino=1;
	int nuevomax = v[0];
	int maximo = v[0];
	while(i<n)
	{
		if (v[i]>maximo)
		{
			maximo = v[i];
		}
		if (v[i]<=nuevomax)
		{
			nino = i + 1;
			nuevomax = maximo;
		}
		i++;
	}
	return nino;
}
bool resuelve() {
	int n;
	cin >> n;
	if (n == 0)return false;

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	cout << ninos(v, n)<<endl;
	return true;
}
int main() {

	while (resuelve()) { ; }
}