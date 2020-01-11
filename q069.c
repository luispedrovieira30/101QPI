int take(int n, LInt *l){
	LInt atual=*l, ant=newLInt(0,*l);
	*l=ant;
	int i=0,conta=0;
	while(atual!=NULL && n>0){
		atual=atual->prox;
		ant=ant->prox;
		n--;
		conta++;
	}
	if(n==0){
		ant->prox=NULL;
		while(atual!=NULL){
			ant=atual->prox;
			free(atual);
			atual=atual->prox;
		}
	}
	atual=*l;
	*l=atual->prox;
	free(atual);
	return conta;
}
