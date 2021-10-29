#include <iostream>

using namespace std;

int v[100000];

int segmento(int v[],int n) {
	int variable = 0;
	int	segmento = 0;
	int	aux = 0;
	int	mayor = 0;
	for (int i = 0; i < n; i++)
	{
		if (v[i]==variable)
		{
			segmento++;
		}
		else
		{	
			aux = segmento;
			variable = v[i];
			segmento = 1;
			
		}
		if (aux > mayor)
		{
			mayor = aux;
		}
		else
			if (segmento>mayor)
			{
				mayor = segmento;
			}
			

	}
	return mayor;
}
bool resulve() {
	int n;
	int res;
	cin >> n;
	if (n==0)
	{	
		return false;
	}
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		res = segmento(v, n);
		cout << res << endl;
		return true;
}

int main() {
	while (resulve()) {
		;
	}
}