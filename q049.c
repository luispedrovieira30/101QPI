int dist(Posicao pos){
    int dist;
    dist = abs(pos.x) + abs(pos.y);
    return dist;
}

int maiscentral (Posicao pos[], int N){
    int i, mC=0, min= dist(pos[0]);
    for(i=0; i<N; i++){
        if ( dist(pos[i]) < min){
            min = dist(pos[i]);
            mC=i;
        }
    }
    return mC;
}
