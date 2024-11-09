#include <stdio.h>


int nprime(int num);
void primesbetween100_200();
void twinPrimes(int A, int B);
void asteriskForPrimes();
int gcd(int a, int b);
void relativelyPrime(int a, int b);

int main() {
    int choice, A, B, num1, num2;

    printf("Prime Number Operations:\n");
    printf("1. Print all prime numbers between 100 and 200.\n");
    printf("2. Find and print all twin primes in a user-defined range [A, B].\n");
    printf("3. Print numbers from 1 to 100 with primes marked with an asterisk *.\n");
    printf("4. Check if two given numbers are relatively prime.\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    
    switch (choice) {
        case 1:
            primesbetween100_200();
            break;
        case 2:
            printf("Enter range [A, B]: ");
            scanf("%d %d", &A, &B);
            twinPrimes(A, B);
            break;
        case 3:
            asteriskForPrimes();
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            relativelyPrime(num1, num2);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}


int nprime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}


void primesbetween100_200() {
    printf("Prime numbers between 100 and 200 are:\n");
    for (int i = 100; i <= 200; i++) {
        if (nprime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}


void twinPrimes(int A, int B) {
    printf("Twin primes between %d and %d are:\n", A, B);
    for (int i = A; i <= B - 2; i++) {
        if (nprime(i) && nprime(i + 2)) {
            printf("(%d, %d)\n", i, i + 2);
        }
    }
}


void asteriskForPrimes() {
    printf("Numbers from 1 to 100 with primes marked with '*':\n");
    for (int i = 1; i <= 100; i++) {
        if (nprime(i)) {
            printf("%d* ", i);
        } else {
            printf("%d ", i);
        }
        if (i % 10 == 0) {
            printf("\n");
        }
    }
}


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


void relativelyPrime(int a, int b) {
    if (gcd(a, b) == 1) {
        printf("%d and %d are relatively prime.\n", a, b);
    } else {
        printf("%d and %d are not relatively prime.\n", a, b);
    }
}
