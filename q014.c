char charMaisFreq(char s[]){
    int i, contador[127]={0}, max,j;

    if(s[0] == '\0') return 0;

    for(i=0; s[i] != '\0'; i++){
        contador[s[i]]++;
    }

    for(i=0, j=0, max = contador[0]; contador[i] <127 ; i++){
        if (contador[i] > max){
            max=contador[i];
            j=i;
        }
    }
    return j;
}
