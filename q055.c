void insertOrd (LInt *l, int v){
    LInt novo ,*aux;
    novo = malloc(sizeof(struct slist));
    novo->valor = v;
    aux = l;
    while ( *aux != NULL && (*aux)->valor < v){
        aux = &((*aux)->prox);
    }
    novo->prox = *aux;
    *aux = novo;
}
