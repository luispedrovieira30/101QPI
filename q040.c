void transposta(int N, float m[N][N]){
    int i,j;
    float aux[N][N];
    for(i=0; i<N; i++){
        for(j=0;j<N;j++){
            aux[j][i]= m[i][j];
        }
    }
    for(i=0;i<N;i++){
        for(j=0; j<N; j++){
            m[i][j]= aux[i][j];
        }
    }
}
