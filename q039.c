int triSUp(int N, float m[N][N]){
    int l,c, r=1;
    for(l=0; l<N; l++){
        for(c=0; c<N; c++){
            if(c<l){
                if(m[l][c] != 0) r = 0;
            }
        }
    }
    return r;
}
