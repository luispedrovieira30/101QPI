int crescente(int s[], int i, int j){
    int r=1;
    if(s[0]=='\0') return r;
    for (i; i<j; i++){
        if (s[i+1]<s[i]) r=0;
    }
    return r;
}
