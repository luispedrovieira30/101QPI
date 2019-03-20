void insere(int v[], int N, int x){
    int i,j,r=1;
    if(x<v[N-1]){
        for(i=0; i<N && r==1; i++){
            if(x<v[i]){
                for(j=N; j!=i; j--){
                    v[j] = v[j-1];
                }
                v[i]=x;
                r=0;
            }
        }
    }
    else v[N]=x;
}
