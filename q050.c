int viz(Posicao p, Posicao pos){
    int r=1;
    if (p.x==pos.x && p.y== pos.y + 1);
    else if(p.x==pos.x && p.y == pos.y - 1);
    else if(p.y==pos.y && p.x == pos.x + 1);
    else if(p.y==pos.y && p.x == pos.x -1);
    else r=0;
    return r;
}

int vizinhos (Posicao p, Posicao pos[], int N){
    int i, contador=0;
    for(i=0; i<N; i++){
        if(viz(p, pos[i])) contador++;
    }
    return contador;
}
