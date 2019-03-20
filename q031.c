int maisFreq(int v[], int N){
    int i,j,max=v[0], n=0, cont;
    for(i=0; i<N; i++){
        cont =0;
        for(j=0; j<N; j++){
            if(v[i] == v[j]) cont++;
        }
        if(cont>n){
            max=v[i];
            n=cont;
        }
    }
    return max;
}
