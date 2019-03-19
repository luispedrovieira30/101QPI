int trailingZ(unsigned int n){
    int contaZ=0;
    while (n % 2 ==0){
         n /=2;
         contaZ++;
    }
    return contaZ;
}
