#include <iostream>
#include<vector>
using namespace std;



int montana(vector<int>v1, int x) {
	int cont = 1;
	int mayor = v1[x-1];
	for (auto i = v1.rbegin()+1; i != v1.rend(); i++)
	{
		if (*i>mayor)
		{
			mayor = *i;
			cont++;
		}
	}
	return cont;
}
bool resuelve() {
	int x,a=0;
	vector <int> v1;
		cin >> x;
		if (x == 0)return false;

		for (int i = 0; i < x; i++)
		{
			cin >> a;
			v1.push_back(a);
		}
		int res = montana(v1, x);
		cout << res << endl;
		return true;
}
int main(){
	while (resuelve());
}