#include <stdio.h>
void pattern(int n)
{
printf("%d ", n);
if (n <= 0)
{
return;
}
int k = n - 5;
pattern(k);
printf("%d ", n);
}
int main()
{
int n;
printf("Enter a number: ");
scanf("%d", &n);
pattern(n);
return 0;
}
