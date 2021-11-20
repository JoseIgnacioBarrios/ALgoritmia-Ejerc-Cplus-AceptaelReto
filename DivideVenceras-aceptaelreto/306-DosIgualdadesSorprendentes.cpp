#include <iostream>
#include<vector>
using namespace std;


vector <vector <long long int>> m = { {0,1} ,{1,1} };
int k = 46337;

vector <vector <long long int>> multi(vector <vector <long long int>> res,int n) {
	vector <vector <long long int>> a;
	if (n%2==0)
	{
		int auxa1= (res[0][0] * res[0][0] + res[0][1] * res[1][0]) % k;
		int auxa2= (res[0][0] * res[0][1] + res[0][1] * res[1][1]) % k;
		int auxb1= (res[1][0] * res[0][0] + res[1][1] * res[1][0]) % k;
		int auxb2= (res[1][0] * res[0][1] + res[1][1] * res[1][1]) % k;
		a = { {auxa1,auxa2},{auxb1,auxb2} };
	}
	else
	{
		int auxa1 = (res[0][0] * res[0][0] + res[0][1] * res[1][0]) % k;
		int auxa2 = (res[0][0] * res[0][1] + res[0][1] * res[1][1]) % k;
		int auxb1 = (res[1][0] * res[0][0] + res[1][1] * res[1][0]) % k;
		int auxb2 = (res[1][0] * res[0][1] + res[1][1] * res[1][1]) % k;
		int aux[2][2] = { {auxa1,auxa2}, {auxb1,auxb2} };
		int aua1 = (aux[0][0] * m[0][0] + aux[0][1] * m[1][0]) % k;
		int aua2 = (aux[0][0] * m[0][1] + aux[0][1] * m[1][1]) % k;
		int aub1 = (aux[1][0] * m[0][0] + aux[1][1] * m[1][0]) % k;
		int aub2 = (aux[1][0] * m[0][1] + aux[1][1] * m[1][1]) % k;
		a = { {aua1,aua2},{aub1,aub2} };
	}
	return a;
	
}

vector <vector <long long int>> fibo(int n) {
	vector <vector <long long int>> res;
	
	if (n == 1) res = m;
	else {
		res = fibo(n / 2);
		res = multi(res,n);
	}
	return res;
}

bool resuelve() {
	int n;

	cin >> n;
	if (n == 0)return false;

	cout << fibo(n)[0][1] << '\n';
	return true;
}

int main() {
	while (resuelve()) { ; }
}