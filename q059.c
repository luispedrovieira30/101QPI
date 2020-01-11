LInt parteAmeio(LInt *l){
	LInt auxl=(*l), y=newLInt(0,*l), auxy=y;
	int length=0;
	while(auxl!=NULL){
		length++;
		auxl=auxl->prox;
	}

	auxl=auxy->prox;
	length /= 2;

	while(length>0){
		auxl= auxl->prox;
		auxy=auxy->prox;
		length--;
	}

	auxy->prox=NULL;
	*l=auxl;

	auxy=y;
	y=y->prox;
	free(auxy);

	return y;
}
