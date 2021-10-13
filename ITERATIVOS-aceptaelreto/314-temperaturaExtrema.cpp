#include <iostream>

using namespace std;

//  {pre 0>= n <=long(v)}
void temppico(int v[], int n, int& p, int& e) {

 
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i - 1] < v[i] && v[i + 1] < v[i]) {       //Inv: 1<=i<=n-1 &&  
            p++;                                        //p= #k: 1<=k<i : (v[k-1]<v[k] && v[k]>v[k-1])
        }                                               //e= #k': 1<=k<i : (v[k'-1]>v[k']<v[k'+1])
        else {                                          // coste = n-i
            if (v[i - 1] > v[i] && v[i + 1] > v[i])
            {
                e++;
            }
        }
    }


}
//  pos = (p= #k : 1<=k<=n-2 : v[k-1]<v[k] && v[k]>v[k+1]) && (e= #z : 1<=z<=n-2 : v[z-1]>v[z] && v[z] < v[z+1])
void resuelve() {
    int n;
    int p = 0, e = 0;
    cin >> n;
    int v[10000];
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    // calcular solución

    temppico(v, n, p, e);
    cout << p << " " << e << endl;
    // escribir solución


}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        resuelve();
}