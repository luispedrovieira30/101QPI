int bitsUm (unsigned int n) {
    int contaUm = 0;
    while (n != 0) {
        if (n % 2 == 0) {
            n = n / 2;
        }else {
            n = n / 2;
            contaUm++;
        }
    }
    return contaUm;
