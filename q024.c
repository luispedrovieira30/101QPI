int remRep(char s[]){
    int i,j;
    for(i=0; s[i] != '\0'; i++)
    {
        if (s[i+1] == s[i])
        {
            for(j=i; s[j] != '\0';j++)
            {
                s[j] = s[j+1];
            }
            s[j]='\0';
            i--;
        }
    }
    int n= strlen(s);
    return n;
}
