int cardinalMSet(int N, int v[N]){
    int i, cardinal=0;
    for (i=0; i<N; i++){
        cardinal += v[i];
    }
    return cardinal;
}
