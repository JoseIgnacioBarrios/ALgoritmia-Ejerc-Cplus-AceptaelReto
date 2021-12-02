#include<iostream>
#include <math.h>
using namespace std;
int v[100000];

bool sePuede(int v[],int n, int p, int g) {
	int partiturasExpo = 0;
	for (int i = 0; i < n; i++)
	{
		partiturasExpo += ceil((float)v[i] / g);
	}
	return partiturasExpo <= p;
}


int orquesta(int v[], int n,int p,int a,int mayor) {
	int res = 0;
	if (a==mayor)
	{
		res = a;
	}
	else
	{
		int mitad = (a+ mayor)/2;
		
		if (sePuede(v,n,p,mitad))
		{
			res= orquesta(v, n, p, a, mitad);
		}
		else
		{
			res = orquesta(v, n, p, mitad +1, mayor);
		}
	}

	return res;
}

bool resuelve() {
	int p, n,mayor=0;
	cin >> p >> n;

	if (!cin)return false;

	for (int i = 0; i < n; i++)
	{
		int var;
		cin >> var;
		v[i] = var;
		mayor = max(mayor, var);
	}

	cout << orquesta(v,n,p,1,mayor) << '\n';

}

int main() {
	while (resuelve()) { ; }
}