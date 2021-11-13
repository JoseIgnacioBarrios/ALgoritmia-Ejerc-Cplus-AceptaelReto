#include <iostream>
using namespace std;

int copa(int n,int t) {
	int res=0;
	if (n==0)
	{
		res = 0;
	}
	else
	{	
		if (t % 2 == 0) {
			if (n<2)
			{
				res = 1;
			}
			else
			{
				if (n % 2 == 0)res = copa(n - 2, t + 1) + 1;
				else res = copa(n - 1, t + 1) + 1;
			}
		}
		else
		{
			res = copa(n - 1, t+1) + 1;
		}
	}
	return res;
}

bool resuelve() {
	int n;
	cin >> n;
	if (n == 0)return false;
	cout << copa(n,1) << '\n';
	return true;
}
int main() {
	while (resuelve()) { ; }
}