void nivelAUx(ABin a, int n, LInt *l){
	if(a==NULL) return;
	if(n==1) *l=newLInt(a->valor, *l);
	else{
		nivelAux(a->dir,n-1,l);
		nivelAux(a->esq,n-1,l);
	}
}

LInt nivelL(ABin a, int n){
	LInt new=NULL;
	nivelAux(a,n,&new);
	return new;
}
