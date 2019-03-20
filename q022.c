int charContido(char s1, char s2[]){
    int j, r=0;
    for(j=0; s2[j]!= '\0'; j++)
    {
        if (s1==s2[j]) r=1;
    }
    return r;
}

int contida (char s1[], char s2[])
{
    int i, r=1;

    for(i=0; s1[i] != '\0'; i++)
    {
        if (charContido(s1[i],s2) != 1) r=0;
    }
    return r;
}
