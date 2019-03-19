int maiorPrefixo(char s1[], char s2[]){
    int i, conta=0, max=0;
    for (i=0; s1[i] == s2[i]; i++){
        conta++;
    }
    return conta;
}
