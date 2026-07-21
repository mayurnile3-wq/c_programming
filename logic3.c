//logic sum of n

#include <stdio.h>

int sumTillN(int n) {
    int sum = 0;
    int i;
    for (i = 1; i <= n; i++) 
	{
        sum = sum + i;
    }

    return sum;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int result = sumTillN(n);
    printf("Sum from 1 to %d = %d\n", n, result);

    return 0;
}
