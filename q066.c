LInt cloneL(LInt l){
	LInt aux=NULL,ant;
	if(l!=NULL){
		aux=ant=malloc(sizeof(LInt));
		aux->valor=l->valor;
		l=l->prox;
	}
	while(l!=NULL){
		ant->prox=malloc(sizeof(LInt));
		ant=ant->prox;
		ant->valor=l->valor;
		l=l->prox;
	}
	ant->prox=NULL;
	return aux;
}
