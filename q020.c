int contaPal(char s[]){
    int i, conta=0;
    for(i=0; s[i]!= '\0'; i++)
    {
        if ((!(isspace(s[i]))) && (isspace(s[i+1]) || s[i+1] == '\0')) {
            conta++;
        }
    }
    return conta;
}
