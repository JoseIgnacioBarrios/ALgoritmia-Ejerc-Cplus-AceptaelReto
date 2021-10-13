//https://www.aceptaelreto.com/problem/statement.php?id=538

#include <iostream>

using namespace std;


bool toestoCampo(int v[]) {
	if (v[0] >= v[1]) {
		return true;
	}
	else return false;
}

bool resuelve() {
	int v[2];
	int a = 0;
	for (int i = 0; i < 2; ++i) {
		cin >> v[i];
	}
	if (v[0] > 0 && v[1] >= 0 && v[0] <= 120 && v[1]<=1000) {		
		if (toestoCampo(v)) {
			cout << "CUERDO"<<"\n";
			
		}
		else {
			cout << "SENIL"<<"\n";
			
		}
		return true;
	}
	else {
		if (v[0] == a && v[1] == a)return false;
		
		cout << "SENIL"<<endl;
		return true;
	}

}
int main() {
	while (resuelve())
		;
}