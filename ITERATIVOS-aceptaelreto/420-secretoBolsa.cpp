#include <iostream>
#include <string>
using namespace std;


int bolsa(int clave, string digito) {
	int i=0, j=1,cont=0; 
	int claveSumada = digito[0] - '0';
	while (i<digito.size()) {
		
		while (claveSumada < clave && j < digito.size()) {
			claveSumada += (digito[j] - '0');
			j++;
		}
		if (claveSumada == clave)
		{
			cont++;
			claveSumada -= (digito[i] - '0');
			i++;
		}
		else
		{
			claveSumada -= (digito[i] - '0');
			i++;
		}
			
	}
	return cont;
}
bool resuelve() {
	int clave;
	string digito;
	cin >> clave>> digito;
	cout << bolsa(clave, digito) << endl;
	return true;
}
int main() {
	int n,i=0;
	cin >> n;
	while (i < n) {
		resuelve();
		i++;
	}
}