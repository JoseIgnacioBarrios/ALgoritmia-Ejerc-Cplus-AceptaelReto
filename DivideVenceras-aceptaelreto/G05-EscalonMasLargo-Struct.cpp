#include<iostream>
using namespace std;

struct Info {
    int maslargo;
    int ladoIzq;
    int ladoDer;
};

Info escalon(int v[],int a,int b) {
    Info res;
    if (v[a]==v[b])
    {
        res = {b-a+1,b-a+1,b-a+1};
    }
    else
    {
        int mitad = (a + b) / 2;
        Info izq=escalon(v, a, mitad);
        Info der = escalon(v, mitad + 1, b);

        res = { max(izq.maslargo, der.maslargo) ,izq.ladoIzq,der.ladoDer};

        if (v[mitad]==v[mitad+1])
        {
            int central = izq.ladoDer + der.ladoIzq;
            res.maslargo = max(res.maslargo,central);
            if (v[a]==v[mitad])
            {
                res.ladoIzq += der.ladoIzq;
            }
            if (v[mitad +1]==v[b])
            {
                res.ladoDer += izq.ladoDer;
            }
        }
    }
    return res;
}

bool resuelve() {
    int n;
    cin >> n;
    if (!n)
        return false;
    int v[100000];
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    int masLargo, lIz, lDr;
    Info res=escalon(v, 0, n - 1);
    cout << res.maslargo << endl;
    return true;
}

int main() {
    while (resuelve())
        ;
    return 0;
}