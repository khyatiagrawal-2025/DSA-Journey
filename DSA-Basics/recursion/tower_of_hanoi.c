
#include <stdio.h>

void toh(int n, char a, char b, char c)
{
    if(n == 1)
    {
        printf("Move disk from %c to %c\n", a, c);
        return;
    }

    toh(n-1, a, c, b);

    printf("Move disk from %c to %c\n", a, c);

    toh(n-1, b, a, c);
}

int main()
{
    int n;

    printf("Enter number of disks: ");
    scanf("%d", &n);

    toh(n, 'A', 'B', 'C');

    return 0;
}




