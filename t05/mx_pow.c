double mx_pow(double n, unsigned int pow);

double mx_pow(double n, unsigned int pow) {

double res = n;
    if (pow == 0)
        return 1;
    else {
        for (unsigned int i = 1; i < pow ; i++)
        {
            res = res * n;  
        }
        return res;
    }

}

