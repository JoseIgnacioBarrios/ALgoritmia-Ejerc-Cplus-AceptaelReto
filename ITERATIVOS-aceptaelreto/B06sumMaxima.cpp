#include <iostream>
using namespace std;



int sumMaxima(int pesos[],int valores[],int n, int umbral){
	int i = 0;
	int j = 0;
	int maximo = 0;
	int svalore = 0;
	int speso = 0;
	while (j < n) {
		if (speso + pesos[j] <= umbral) {
			speso += pesos[j];
			svalore += valores[j];
			++j;
		}
		else {
			speso -= pesos[i];
			svalore -= valores[i];
			i++;
		}
		
		if (svalore > maximo) {
			maximo = svalore;
		}
	}

	
	return maximo;
}

int pesos[100000];
int valores[1000000];
bool resuelve() {
	int umbral;
	int n;
	cin >> n;
	if(n<0)return false;
	int i = 0;
	while (i < n) {
		cin >> pesos[i];
		i++;
	}
	i = 0;
	while (i < n) {
		cin >> valores[i];
		i++;
	}

	cin >> umbral;
	cout<<sumMaxima(pesos, valores, n, umbral)<<"\n";
	
	return true;
}

int main() {
	
	while (resuelve()) {
		;
	}
	return 0;
}




























