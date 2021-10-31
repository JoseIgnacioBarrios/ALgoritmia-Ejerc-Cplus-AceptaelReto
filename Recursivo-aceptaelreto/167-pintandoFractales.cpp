#include<iostream>

using namespace std;

int fractal(int lon, int profundida) {
	int res=0;
	if (lon==1)
	{
		res = 4 * profundida;
	}
	else
	{
		res += fractal(lon / 2, profundida * 4) + (lon * 4) * profundida;
	}
	return res;
}

bool resuelve() {
	int lon;
	cin >> lon;
	if (!cin)return false;

	int res = fractal(lon,1);
	cout << res << endl;
	return true;

}
int main(){
	while (resuelve()) { ; }
}