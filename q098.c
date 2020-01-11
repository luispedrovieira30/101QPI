void removeMaiorA(ABin *A){
	int flag=0;
	while((*a)!=NULL && flag==0){
		if((*a)->dir == NULL){
			ABin aux = *a;
			(*a)=(*a)->esq;
			free(aux);
			flag=1;
		}else a=&((*a)->dir);
	}
}
