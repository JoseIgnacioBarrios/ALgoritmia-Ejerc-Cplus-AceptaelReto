#include<iostream>
using namespace std;
const int V = 100;

struct casilla
{
	int x, y;
};
casilla movimiento(const casilla& actual, int dir) {
	int delta[8][2] = {
		{actual.x - 1,actual.y + 2} ,
		{actual.x + 1,actual.y + 2},
		{actual.x + 2,actual.y + 1},
		{actual.x + 2,actual.y - 1},
		{actual.x - 1,actual.y - 2},
		{actual.x + 1,actual.y - 2},
		{actual.x - 2,actual.y - 1},
		{actual.x - 2,actual.y + 1}
	};
	casilla nueva = {  delta[dir][0], delta[dir][1] };
	return nueva;
}
bool valida(const casilla& actual, int n, bool lab[V][V], bool visita[V][V]) {
	return 0 <= actual.x && actual.x < n &&
		0 <= actual.y && actual.y < n &&
		!visita[actual.x][actual.y];
}
void  salida(int n, bool lab[V][V], casilla sol[], bool visitas[V][V], int k,int &nCont) {
	if (sol[k-1].x==n-1 && sol[k-1].y==n-1)
	{
		nCont++;
	}
	else
	{
		for (int i = 0; i < 8; i++)
		{
			sol[k] = movimiento(sol[k - 1], i);
			if (valida(sol[k],n,lab, visitas))
			{
				visitas[sol[k].x][sol[k].y] = true;
				salida(n, lab, sol, visitas, k + 1,nCont);
				visitas[sol[k].x][sol[k].y] = false;
			}
		}
	}
}

bool resuelve() {
	int n = 8;int x, y;
	cin >>n>>x>>y ;
	if (n == 0 && x == 0 && y == 0)return false;
	int nCont = 0;
	bool lab[V][V] = { };
	casilla sol[V*V];
	sol[0].x =x, sol[0].y = y;
	bool visitas[V][V] = { };
	visitas[x][y] = true;
	int k = 1;
	salida(n,lab,sol,visitas,k,nCont);
	cout << nCont << '\n';
	return true;
}

int main(){
	while (resuelve()) {
		;
	}
	return 0;
}