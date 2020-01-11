void nivelVaux(ABin a, int n, int *i, int v[]){
	if(a==NULL) return;
	if(n==1) {
		v[*i]=a->valor;
		(*i)++;
	}
	else{
		nivelVaux(a->esq,n-1,i,v);
		nivelVaux(a->dir,n-1,i,v);
	}
}

int nivelV(ABin a, int n, int v[]){
	int i=0;
	nivelVaux(a,n,&i,v);
	return i;
}
