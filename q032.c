int maxCresc(int v[], int N){
    int i,j,max=0, cont;
    for(i=0; i<N; i++){
        cont=0;
        if (v[i+1] >= v[i]){
            cont++;
            for(j=i;j<N-1 && v[j+1] >= v[j];j++){
                cont++;
            }
        }
        if (cont>max) max=cont;
    }
    return max;
}
