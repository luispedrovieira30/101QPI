int removeOneOrd (LInt *l, int v) {
    int r = 1;
    LInt aux = *l;


    if (aux == NULL);
    else if ( aux->prox == NULL && (aux)->valor == v) {
        free(*l);
        *l = NULL;
        r=0;
    }

    LInt prev;
    while (aux != NULL && r == 1){
        if (aux->valor == v){
            prev->prox = aux->prox;
            free(aux);
            r=0;
        }
        prev = aux;
        aux= aux->prox;
    }

    return r;
}
