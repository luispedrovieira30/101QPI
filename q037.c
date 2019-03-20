int minInd(int v[], int n) {
    int i, min = v[0], contador = 0;
    for (i = 0; i < n; i++) {
        if (v[i] < min) {
            min = v[i];
            contador = i;
        }
    }
    return contador;
}
