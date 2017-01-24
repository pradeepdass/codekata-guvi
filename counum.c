#include <stdio.h>

int main(void) { 
    long long n;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    while(n != 0)
    {
        // n = n/10
        n /= 10;
        ++count;
    }

    printf("Number of digits: %d", count);
	// your code goes here
	return 0;
}

