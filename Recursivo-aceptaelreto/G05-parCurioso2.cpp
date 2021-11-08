#include <iostream>
#include <cassert>

using namespace std;

// sumaP y sumaI son la suma de los pares e impares en v[a..b]
// numP y numI son el número de pares e impares en v[a..b]
// devuelve un booleano indicando si v[a..b] es parcurioso
bool parcurioso(int v[], int a, int b, int &sumaP, int &sumaI, int &numP, int &numI) {
    bool r;

    if (a == b) {
        // sólo hay un elemento
        if (v[a] % 2 == 0) {
            sumaP = v[a];
            numP = 1;
            sumaI = numI = 0;
        } else {
            sumaI = v[a];
            numI = 1;
            sumaP = numP = 0;
        }
        r = true;
    } else {
        // llamadas recursivas
        int m = (a+b)/2;
        int sumaP1, sumaI1, numP1, numI1;
        bool r1 = parcurioso(v, a, m, sumaP1, sumaI1, numP1, numI1);
        int sumaP2, sumaI2, numP2, numI2;
        bool r2 = parcurioso(v, m+1, b, sumaP2, sumaI2, numP2, numI2);        

        sumaP = sumaP1 + sumaP2;
        sumaI = sumaI1 + sumaI2;
        numP = numP1 + numP2;
        numI = numI1 + numI2;
        r = (sumaP1 <= sumaI2) && (numP1 <= numI2) && (r1 || r2);
    }

    return r;
}

// T(n) = c0 si n == 1
// T(n) = 2*T(n/2) + c si n > 1
// Complejidad: O(n)

void resuelve() {
    int n;
    cin >> n;
    int v[100000];
    for (int i=0; i<n; ++i)
        cin >> v[i];

    int sumaP, sumaI, numP, numI;
    bool r = parcurioso(v, 0, n-1, sumaP, sumaI, numP, numI);
    cout << (r ? "SI" : "NO") << endl;
}

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; ++i)
        resuelve();
}