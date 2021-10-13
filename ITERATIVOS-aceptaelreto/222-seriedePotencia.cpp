#include <iostream>
//#include <cstring>
using namespace std;

int potencias(int z,int b) {
	int x = z;
	int n = b;
	int res=0;
	int c = 1;
	int u = z;
	int a=0;
	
	if (n== 0)return 1;
	if (n== 1)return x+1;
	while (n>=2){
		a = (x * u) % 1000007;
		res = (res + a) % 1000007;
		u = a;
		n--;
	}
	res = (x + 1 + res)%1000007;
	return res;
}
bool resuelve() {
	int a,b;
	cin >> a >> b;
	if (!cin)
	{
		return false;
	}
	int res = potencias(a,b);

	cout << res << endl;
	return true;
}
int main(){
	while (resuelve());
}