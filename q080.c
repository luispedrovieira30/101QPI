void mirror(ABin *a){
	ĩf(*a==NULL) return;
	ABin aux;
	aux=(*a)->dir;
	(*a)->dir=(*a)->esq;
	(*a)->esq=aux;
	mirror(&((*a)->dir));
	mirror(&((*a)->esq));
}
