int max()
{
    int x; int max=0;
    scanf("%d", &x);
    while ( x!=0 )
    {
        if (x > max) max=x;
        scanf("%d", &x);
    }
    printf("%d", max);
    return 0;
}
