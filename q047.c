typedef enum Movimento {Norte,Sul,Este,Oeste} Movimento;
typedef struct posicao{
    int x,y;
}Posicao;

Posicao posFinal(Posicao inicial, Movimento mov[], int N){
    int i;
    for(i=0; i<N; i++){
        if (mov[i] == Norte) inicial.y++;
        else if(mov[i] == Sul) inicial.y--;
        else if(mov[i] == Oeste) inicial.x--;
        else if(mov[i] == Este) inicial.x++;
    }
    return inicial;
}
