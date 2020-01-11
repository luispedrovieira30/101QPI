void splitQS( LInt l, int x, LInt *mx, LInt *Mx){
	LInt aux=l;
	
	*mx=newLInt(0,NULL);
	LInt mxa=*mx;

	*Mx=newLInt(0,NULL);
	LInt Mxa=*Mx;

	while(aux!=NULL){

		if(aux->valor>=x){
			Mxa->prox=aux;
			aux=aux->prox;
			Mxa=Mxa->prox;
			Mxa->prox=NULL;
		}
		else{
			mxa->prox=aux;
			aux=aux->prox;
			mxa=mxa->prox;
			mxa->prox=NULL;
		}
	}

	aux=*mx;
	*mx=(*mx)->prox;
	free(aux);

	aux=*Mx;
	*Mx=(*Mx)->prox;
	free(aux);

}
