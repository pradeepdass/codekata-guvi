#include <stdio.h>

int main(void) {
     int n, i;

    printf("Enter an integer: ");
    scanf("%d",&n);

    for(i=1; i<=10; ++i)
    {
        printf("%d * %d = %d \n", n, i, n*i);
    }
    
	// your code goes here
	return 0;
}
