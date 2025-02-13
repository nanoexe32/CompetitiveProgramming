/**
 * 
 * FAST EXPONENTIATION.
 * 
 *  x ^ n = {
 *      x                     if n = 1;
 *      (x ^ (n / 2)) ^ 2     if n % 2 = 0;
 *      x * x ^ (n - 1)       if n % 2 != 0;
 * }
 *  
 **/
ulli binpow(ulli a, ulli b, ulli m) {
    a %= m;
    ulli res = 1;
    while(b > 0){
        if(b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

/**
 * 
 * GREATEST COMMON DIVISOR.
 * 
 **/
int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a % b);
}

/**
 * CHECK WETHER A NUMBER IS PRIME.
 * 
 * All divisors of n are less than or equal to sqrt(n)
 **/
bool is_prime(int n){
    if (n == 1) return false;
    int i = 2;
    while(i * i <= n){
        if(n % i == 0) return false;
        i += 1;
    }
    return true;
}

/**
 * 
 * COMBINATION (Binomial coefficient). 
 *
 **/
ulli combination(ulli n, ulli k){ 
  if(k == 0 || k == n) return 1; 
  return combination(n - 1, k - 1) + combination(n - 1, k); 
}

ulli combination_iterative(ulli n, ulli k){ 
    ulli C[k+1] = {0}; 
    C[0] = 1;
    for(ulli i = 1; i <= n; i++) 
        for(ulli j = min(i, k); j > 0; j--) 
            C[j] = C[j] + C[j - 1];
    return C[k]; 
} 

/**
 * 
 * PRINT ALL DIVISORS OF n
 * 
 **/
void divisors(int n){  
    for(int i = 1; i * i <= n; i++)
        if(n % i == 0)
            if(n / i == i) cout << i << " "; 
            else cout << i << " " << n / i << " ";
}


/**
 * 
 * GET ALL PRIME FACTORS
 * Time complexity: 
 *  O(sqrt(n)), upper bound, when n is prime then function 
 *  reaches worst case.
 * 
 **/

void prime_factors(int n){
    while(n % 2 == 0) cout << 2 << " ", n = n / 2;  
  
    for(int i = 3; i * i <= n; i = i + 2)  
        while(n % i == 0) cout << i << " ", n = n / i;
    
    if(n > 2) cout << n << " ";
}