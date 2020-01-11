int addOrd(ABin *a, int x){
	int flag=0;
	while((*a)!=NULL && flag==0){
		if((*a)->valor==x) flag=1;
		else if((*a)->valor > x) a=&((*a)->dir);
		else a = &((*a)->esq);
	}
	if((*a)==NULL && flag==0){
		(*a)=malloc(sizeof(ABin));
		(*a)->valor=x;
		(*a)->esq=NULL;
		(*a)->dir=NULL;
	}
	return flag;
}
