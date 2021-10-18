
#include <iostream>
using namespace std;



bool resuelve() {
	int n, serp;
	int seg = 0;
	int auxseg = 0;
	int vida = 0;
	int valor = 0;
	bool pausa = false;
	cin >> n >> serp;
	if (n == 0 && serp == 0)return false;

	int i = 0;

	while (i < n) {
		cin >> valor;
		if (valor == 1) {
			seg++;
			vida = 0;
			pausa = true;
			if (seg > auxseg ) {
				auxseg = seg;
			}
		}
		else {
			if (pausa) {
				vida++;
				//pausa = true;
				if (vida > serp)
				{
					seg = 0;
				}
				else {
					if (vida == serp && (i + 1) != n) {
						seg++;
					}
					if (vida < serp) {
						seg++;
					}
				}
			}
		}
		
		i++;
	}
	cout << auxseg << endl;
	return true;
}
int main() {
	while (resuelve()) { ; }
}