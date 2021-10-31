#include<iostream>
using namespace std;


int movil(int pi, int di, int pd, int dd,bool &res) {
	int pix, dix, pdx, ddx;
	int resint = 0;
	
	if (pi == 0)
	{
		cin >> pix >> dix >> pdx >> ddx;
		pi = movil(pix, dix, pdx, ddx,res);
	}
	if (pd == 0)
	{
		cin >> pix >> dix >> pdx >> ddx;
		pd = movil(pix, dix, pdx, ddx,res);
	}
	if (pi != 0 && pd != 0)
	{
		if (pi * di == pd * dd && res)
		{
			resint = pi + pd;
		}
		else
		{
			res = false;
		}
	}
	return resint;
}

bool resuelve(){
	bool res = true;
	int pi, di, pd, dd;
	cin >> pi >> di >> pd >> dd;
	if (pi == 0 && di == 0 && pd == 0 && dd == 0)return false;
	movil(pi, di, pd, dd,res);
	cout << (res?"SI":"NO") << endl;
	return true;
}

int main() {
	while (resuelve()) { ; }
}