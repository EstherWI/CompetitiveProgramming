// Function to generate prime factors and its power 
void generatePrimeFactors(long int N) 
{ 
	long int s[N+1]; 
	sieveOfEratosthenes(N, s); 
	long int curr = s[N]; // Current prime factor of N 
	long int cnt = 1; // Power of current prime factor 
	// Printing prime factors and their powers 
	while (N > 1) 
	{ 
		N /= s[N]; 
		if (curr == s[N]) 
		{ 
			cnt++; 
			continue; 
		} 
    printf("Factor: %ld Power: %ld", curr, cnt);
		curr = s[N]; 
		cnt = 1; 
	} 
    return ans;
} 
