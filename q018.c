int maiorSufixo(char s1[], char s2[]){
    int i,j, conta=0;
    for(i=strlen(s1)-1,j=strlen(s2)-1; s1[i]==s2[j]; i--, j--){
        conta++;
    }
    return conta;
}
