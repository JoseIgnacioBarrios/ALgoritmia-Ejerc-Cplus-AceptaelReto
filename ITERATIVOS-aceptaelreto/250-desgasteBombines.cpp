#include <iostream>

using namespace std;

int v[1000000];


int serrajero(  int v[],   int d, int fuera, int dentro) {
	int i = 0, serra = 0, utilizado = 0;
	int media = fuera + dentro;
	int serraAux = fuera + dentro;


	if ((fuera + dentro) == 0)
	{
		serra = 0;
	}
	else
	{
		while (i < d) {
			media -= v[i];
			utilizado += v[i];

			if (abs(utilizado - media) < abs(serraAux))
			{
				serra = i + 1;
				serraAux = abs(utilizado - media);
			}
			++i;
		}
	}
	return serra;
}
bool resuelve() {
	  int d;
	int fuera=0, dentro=0;
	cin >> d;
	if (d == 0)return false;

	for (int i = 0; i < d; i++)
	{
		cin >> v[i];
		if (v[i] >= 0) {
			fuera += v[i];
		}
		else
		{
			dentro += v[i];
		}
	}
	
	cout << serrajero(v, d, fuera, dentro) << endl;
	return true;
}
int main() {

	while (resuelve()) { ; }
}