
#include <iostream>

using namespace std;
 int v[200000];



 int seisDedos(int v[],int a,int b) {

	 int i = 0,j=1,r=1;

	 while (j<a) {
		 if (v[j]-v[i]<b)
		 {
			 r = max(r, j - i + 1);
		 }
		 else
		 {
			 while (v[j]-v[i]>=b)
			 {
				 i++;
			 }
		 }
		 j++;
	 }
	 return r;
 }
bool resuelve() {
	int a, b;
	cin >> a >> b;
	if (a==0 && b==0)
	{
		return false;
	}
	for (int i = 0; i < a; i++)
	{
		cin >> v[i];
	}
	cout << seisDedos(v, a,b) << endl;
	return true;

}
int main() {
	while (resuelve())
	{
		;
	}
}