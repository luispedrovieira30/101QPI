void dumpAux(ABin a, int v[], int *N,int *i){
	if(a==NULL) return;
	dumpAux(a->esq,v,N,i);
	if(*N>0){
			v[*i]=a->valor;
		(*i)++;
		(*N)--;
	}
	dumpAux(a->dir,v,N,i);
}

int dumpAbin(ABin a, int v[], int N){
	int i=0;
	dumpAux(a,v,&N,&i);
	return i;
}
