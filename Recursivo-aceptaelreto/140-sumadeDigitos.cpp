#include	<iostream>
using namespace std;


long long int sumaRecursiva(int n) {
	
	long long int cont=0;
	if (n <10)
	{
		cont = n;
		cout << n;
	} 
	else
	{
		cont += n % 10;
		cont +=  sumaRecursiva(n / 10);
		cout << " + " << n % 10;
	}
	return cont;

}
bool resuelve() {
	int n;
	 
	cin >> n;
	if (n < 0)return false;

	cout << " = " << sumaRecursiva(n)<<endl;
	return true;
}
int main() {
	
	while (resuelve())
	{
		;
	}
	
}