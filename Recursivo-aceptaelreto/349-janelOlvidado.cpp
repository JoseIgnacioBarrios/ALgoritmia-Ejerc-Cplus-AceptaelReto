#include<iostream>
#include<string>
using namespace std;
char sum = '+';
char res = '-';
char mul = '*';
char di = '/';

int jan() {
	char n;
	int r = 0;
	cin >> n;
	if (isalnum(n))r = n - '0';
	else if (sum == n)r = jan() + jan();
	else if (res == n)r = jan() - jan();
	else if (mul == n)r = jan() * jan();
	else if (di == n)r = jan() / jan();
	
	return r;
}

bool resuelve() {
	cout << jan() << endl;
	return true;
}

int main() {
	int i = 0;
	int n;
	cin >> n;
	while (i < n) { 
		resuelve();
		i++;
	}
}