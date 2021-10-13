#include <iostream>
#include <algorithm>
using namespace std;



long long int moda(long long int v[], int x) {
	long long int va = v[0],valor=v[0];
	int f = 1,auf=0;
	for (int i = 1; i < x; i++)
	{
		if (va==v[i])
		{
			f++;
			if (f>auf)
			{
				valor = va;
				auf = f;
			}
		}
		else
		{
			va = v[i];
			f = 1;
		}
	}
	return valor;
}
bool resuelve() {
	int x,a=0;
	long long int v[25000];
		cin >> x;
		if (x == 0)return false;

		for (int i = 0; i < x; i++)
		{
			cin >> v[i];
		}
		sort(v, v + x);
		cout << moda(v, x)<<endl;
		return true;
}
int main(){
	while (resuelve());
}