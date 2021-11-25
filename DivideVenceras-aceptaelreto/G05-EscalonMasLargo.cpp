using namespace std;

// masLargo: longitud del escalón más largo en v[a..b]
// lIz: longitud del primer escalón en v[a..b]
// lDr: longitud del último escalón en v[a..b]
void escalon(int v[], int a, int b, int &masLargo, int &lIz, int &lDr) {
    if (v[a] == v[b]) {
        // sólo hay un escalón
        masLargo = lIz = lDr = b-a+1;
    } else {
        // dividir en dos subescaleras
        int m = (a+b)/2;
        int masLargo1, lIz1, lDr1, masLargo2, lIz2, lDr2;
        escalon(v, a, m, masLargo1, lIz1, lDr1);
        escalon(v, m+1, b, masLargo2, lIz2, lDr2);

        // calcular asumiendo que las dos escaleras no comparten el escalón central
        masLargo = max(masLargo1, masLargo2);
        lIz = lIz1;
        lDr = lDr2;

        if (v[m] == v[m+1]) {
            // las dos escaleras comparten el escalón central
            int lCentral = lDr1 + lIz2;
            masLargo = max(masLargo, lCentral);
            if (v[a] == v[m])
                lIz += lIz2;    // la escalera izq sólo tiene un escalón
            if (v[m+1] == v[b])
                lDr += lDr1;    // la escalera der sólo tiene un escalón
        }
    }
}

bool resuelve() {
    int n;
    cin >> n;
    if (!n)
        return false;
    int v[100000];
    for (int i=0; i<n; ++i)
        cin >> v[i];

    int masLargo, lIz, lDr;
    escalon(v, 0, n-1, masLargo, lIz, lDr);
    cout << masLargo << endl;
    return true;
}

int main() {
    while (resuelve())
        ;
    return 0;
}