int mx_factorial_iter(int n);

int mx_factorial_iter(int n) {

int res = 1;
    if (n < 0 ){
        res = 0;
    }
    else if(n == 0){
        res = 1;
    }
    else{
        for (int i = 1; i <= n; i++)
        {
            res *= i;
        }
    }

    if (2147483647 < res)
    {
       res = 0;
    }
    
return res;
}
