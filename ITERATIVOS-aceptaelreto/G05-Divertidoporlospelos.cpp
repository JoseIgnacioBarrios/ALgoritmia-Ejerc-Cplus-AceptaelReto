

#include <iostream>
#include<algorithm>

using namespace std;
bool divertido(int v[], int a,int b) {
	int i = 1;
	int d = 1;
	int var = v[0];
	int cont = 1;
	while (i<b) {
		if (var==v[i])
		{
			cont++;
			if (cont>a)
			{
				return false;
			}
		}
		else
		{
			var = v[i];
			cont = 1;
		}
		i++;
	}
	return true;
}
bool creciente(int v[], int b) {
	int i = 1;
	int var = v[0];
	bool crece = true;
	while (i<b && crece==true) {
		if (var+1==v[i] || var == v[i])
		{
			crece = true;
			var = v[i];
		}
		else
		{
			crece = false;
		}
		i++;
	}
	return crece;
}

void resuelve() {
	int v[1000];
	bool c, d;
	int a, b,i=0;
	cin >> a >> b;
	while (i<b)
	{
		cin >> v[i];
		i++;
	}
	c = creciente(v,b);
	
	if (c)
	{
		if (d = divertido(v, a, b))
			cout << "SI" << endl;
		else
		{
			cout << "NO" << endl;
		}
	}
	else
	{
		cout << "NO" << endl;
	}
}

int main() {
	int x,i=0;
	cin >> x;
	while (i < x) {
		resuelve();
		i++;
	}
}