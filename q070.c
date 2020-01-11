LInt newLInt(int x, LInt t){
	LInt new = malloc(sizeof(LInt));
	if(new != NULL){
		new->valor=x;
		new->prox=t;
	}
	return new;
}

int drop(int n, LInt *l){
	LInt atual=*l, ant=newLInt(0,NULL),aux=NULL;
	*l=ant;
	int conta=0;
	while(atual!= NULL && n>0){
		ant->prox=atual->prox;
		aux=atual;
		free(aux);
		atual=atual->prox;
		conta++;
		n--;
	}
	atual=*l;
	*l=atual->prox;
	free(atual);
	return conta;
}
