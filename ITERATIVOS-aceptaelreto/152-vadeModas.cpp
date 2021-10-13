#include <iostream>
#include <string>
#include <utility>
#include <map>
#include <iomanip>
using namespace std;
typedef pair<string, int> entrada;

bool moda(map<string, int> &tempmap,string clave,string &clavemax,int &valormax) {
	bool existe = false;
	int valor;
	
	map<string, int>::iterator itera;
	itera = tempmap.begin();
	while ( itera !=tempmap.end() )
	{
		if (itera->first==clave)
		{
			existe = true;
			valor= itera->second;
			valor++;
			tempmap.at(itera->first) = valor;
		}
		if (itera->second>valormax)
		{
			clavemax = itera->first;
			valormax = itera->second;
		}
		if (existe ==true)
		{
			return existe;
		}
		itera++;
	}
	return existe;
}

bool resuelve() {
	map<string, int> variable;
	int n;
	string clave;
	string clavemax = " ";
	int valormax=0;
	cin >> n;

	if (n==0)return false;


	for (int i = 0; i < n; i++)
	{
		cin >> clave;
		
		if (moda(variable, clave, clavemax,valormax) == false) {
			variable.insert(entrada(clave, 1));
		}
		if (clavemax==" ") {
			clavemax = clave;
		}


	}
	cout << clavemax << endl;
	return true;
}
int main(){
	while (resuelve());
}