#include<iostream>
using namespace std;
int v[100000];

struct Info
{
	int sumaImpar;
	int contImpar;
	int sumaPar;
	int contPar;
	bool res;
};

Info SumaParImpar(Info izq, Info der,bool check) {
	Info res = {izq.sumaImpar+der.sumaImpar,
				izq.contImpar+der.contImpar,
				izq.sumaPar+der.sumaPar,
				izq.contPar+der.contPar,
				check
	};
	return res;

}

Info recursiva(int v[], int ini, int fin) {
	
	Info res;
	bool check=false;
	if (ini==fin)
	{
		if (v[ini]%2==0)
		{ 
			 res = { 0, 0, v[ini], 1,true };
		}
		else
		{
			 res = { v[ini],1,0,0,true };
		}
	}
	else
	{
		int mitad = (fin + ini) / 2;
		Info Izquierda = recursiva(v,ini,mitad);
		Info Derecha = recursiva(v, mitad + 1, fin);
		
		check = (Izquierda.sumaPar <= Derecha.sumaImpar && Izquierda.contPar <= Derecha.contImpar && (Izquierda.res ||Derecha.res));
		

		res = SumaParImpar(Izquierda, Derecha, check);

	}
	return res;
}

bool resuelve() {
	int n;
	cin >> n;
	int i = 0;
	while (i < n) {
		cin >> v[i];
		i++;
	}
	Info res = recursiva(v,0,n-1);
	cout << (res.res ? "SI" : "NO") << '\n';
	return true;
}

int main() {
	int n;
	cin >> n;
	int i = 0;
	while (i < n) {
		resuelve();
		i++;
	}
}