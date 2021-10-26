#include <iostream>
//#include <algorithm>
using namespace std;

float v[200000];



  long long int multiplica(float v[], int n) {
	  long long int contespecial = 0;
	  long long int contEnteros = 0;
	  long long int contFlotante = 0;
	

	int i = 0;
	while (i < n) {
		if (i < n)
		{
			if (v[i] == 0 || v[i]==1)
			{
				contespecial++;
			}
			if (v[i] > 1)
			{
				contEnteros++;
			}
			if (v[i] > 0 && v[i] < 1) {

				contFlotante++;

			}

		}
		i++;
	}
	contEnteros += contespecial;
	contFlotante += contespecial;
	long long int res = (   ((contEnteros*(contEnteros-1))/2)    +  ( (contFlotante*(contFlotante-1))/2  ) - (  (contespecial*(contespecial-1))/2 )
		);
	
	
	return  res;
  }
bool resuelve() {
	int n;
	cin >> n;
	if (n == 0)return false;

	int i = 0;
	while (i < n) {
		cin >> v[i];
		i++;
	}
	//sort(v, v + i);
	 long long int res = multiplica(v, n);
	cout << res << endl;
}

int main() {
	while (resuelve()) { ; }
}