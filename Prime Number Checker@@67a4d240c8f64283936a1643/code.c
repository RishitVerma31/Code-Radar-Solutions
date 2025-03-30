int isPrime(int num) {
    if (num < 2) return 0; // Numbers less than 2 are not prime
    for (int i = 2; i <= num/2; i++) { // Check up to i * i ≤ num (same as sqrt)
        if (num % i == 0)
            return 0; // Not a prime number
    }
    return 1; // Prime number
}