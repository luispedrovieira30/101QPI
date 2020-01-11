int removeAll(LInt *l, int x){
	LInt atual=(*l), ant = newLInt(0,*l), libertar;
	int conta=0;
	*l=ant;

	while(atual!=NULL){
		if(atual->valor==x){
			ant->prox=atual->prox;
			libertar=atual;
			atual=atual->prox;
			free(libertar);
			conta++;
		}else{
			ant=ant->prox;
			atual=atual->prox;
		}
	}

	libertar=*l;
	*l=libertar->prox;
	free(libertar);

	return conta;
}
