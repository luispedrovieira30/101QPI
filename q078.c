typedef struct nodo{
	int valor;
	struct nodo *esq, *dir;
}*ABin;

int altura(ABin a){
	int i;
	if(a==NULL) i=0;
	else{
		if(altura(a->esq) > altura(a->dir)) i= 1 + altura(a->esq);
		else i= 1 + altura(a->dir);
	}
	return i;
}
