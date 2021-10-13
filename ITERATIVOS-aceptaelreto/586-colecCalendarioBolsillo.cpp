
//https://www.aceptaelreto.com/problem/statement.php?id=586

#include <iostream>



using namespace std;





void ordenar(int v[], int n) {
	int j;
	int valor;
	for (int i = 1; i < n; i++)
	{
		valor = v[i];
		j = i;
		while ( j>0 && valor > v[j-1] )
		{
			v[j] = v[j - 1];
			v[j-1] = valor;
			j--;
		}
	}
	

}
int ColeccionCalendario(int v[] , int n) {
	int res=0;
	//ordenar(v, n);
	
	for (int i = 0; i < n-1; i++)
	{
		
		res = res + v[i] - v[i + 1]-1;
		
	}
	return res;
}


void resuelve() {

	// leer datos
	int n;
	cin >> n;
	int v[60];
	for (int i = 0; i < n; ++i)
		cin >> v[i];
	ordenar(v, n);
	// calcular solución
	int res = ColeccionCalendario(v, n);

	// escribir solución
	cout << res << endl;
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
		resuelve();

}