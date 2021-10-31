#include<iostream>

using namespace std;

int  polidivisible(long long int n, bool &bo) {
	int cont = 0;
	if (n/10<1)
	{
		cont++;
		bo = true;
	}
	else
	{
		cont = polidivisible(n / 10, bo) + 1;
		if (bo && n != (cont*(n/cont)))
		{
			bo = false;
		}
	}
	return cont;
}

bool resuelve() {

	long long int n;
	bool bo = false;
	cin >> n;
	if (!cin)return false;
	polidivisible(n, bo);
	cout << (bo ? "POLIDIVISIBLE" : "NO POLIDIVISIBLE")<<endl;
	return true;
}
int main() {
	while (resuelve()) { ; }
}