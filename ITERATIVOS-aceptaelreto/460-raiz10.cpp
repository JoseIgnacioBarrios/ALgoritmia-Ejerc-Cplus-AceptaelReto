//https://www.aceptaelreto.com/problem/statement.php?id=460

#include <iostream>
#include <cstring>
using namespace std;

bool resuelve() {
	char n[102];
	string res;
	char cero = '0';
	cin >> n;
	if (!cin)
	{
		return false;
	}
	for (int i = 0; i < strlen(n); i++)
	{
		if (i == strlen(n) - 1) {
			res +=  n[i];
		}
		else
		{
			res += n[i];
			res += cero;
		}
	}
	cout << res << endl;
	
	return true;
}
int main() {
	while (resuelve()) { ; }
}