void concatL(LInt *a, LInt b){
	if(*a==NULL){
		*a=b;
		return;
	}
	LInt atual=*a, ant=newLInt(0,*a);
	*a=ant;
	while(atual->prox != NULL){
		atual=atual->prox;
		ant=ant->prox;
	}
	atual->prox=b;
	atual=*a;
	*a=atual->prox;
	free(atual);
}
