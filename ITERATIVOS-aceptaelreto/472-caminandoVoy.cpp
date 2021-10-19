#include <iostream>

using namespace std;
int v[200000];


bool caminado(int v[], int n, int D) {
	int i = 1;
	bool apto = true;
	int menor = v[0];
	while (i < n) {
		
		
		if (v[i-1]<v[i])
		{
			if (v[i]-menor>D)
			{
				return false;
			}
		}
		if (v[i-1]>=v[i])
		{
			menor = v[i];
		}
				
		i++;
	}
	return  apto;
	
}
bool resuelve() {
	int D, n;
	bool apto = false;
	cin >> D >> n;
	if (!cin)return false;
	int valor;
	int i = 0;
	while (i < n) {
		cin >> v[i];
		i++;
	}
	apto= caminado(v, n, D);
	cout << (apto ? "APTA" : "NO APTA") << endl;
	return true;
}
int main() {
	while (resuelve()) { ; }
}