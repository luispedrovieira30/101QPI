void freeL(LInt l){
    while (l != NULL){
        free(l);
        l=l->prox;
    }
}
