int temRep(char v[], int n, int v1){
    int i;
    for(i=0; i<n; i++){
        if (v[i] == v1) return 1;
    }
    return 0;
}

int elimRep( int v[], int n){
    int i,j;

    for(i=0; i<n; i++){
        if(temRep(v,i,v[i])){
            for(j=i; j<n;j++) v[j] = v[j+1];
            n--;
            i--;
        }
    }
    return n;
}
