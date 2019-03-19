int media()
{
    int x;
    int total=0;
    int soma=0;
    scanf("%d", &x);
    while (x != 0){
        soma += x;
        total++;
        scanf("%d", &x);
    }
    int media = soma / total;
    printf("%d", media);
    return 0;
}
