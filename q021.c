int isVowel2(char s) {
    if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' || s == 'A' || s == 'E' || s == 'I' || s == 'O' ||
        s == 'U')
        return 1;
    else return 0;
}

int contaVogais(char s[]){
    int i, conta=0;
    for(i=0; s[i] != '\0'; i++){
        if(isVowel2(s[i])){
            conta++;
        }
    }
    return conta;
}
