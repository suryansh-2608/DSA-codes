#include <stdio.h>

void TowerOfHanoi(int n, char frompeg, char topeg, char auxpeg)
{
    if(n==1)
    {
        printf("Move disk 1 from peg %c to peg %c\n", frompeg, topeg);
        return;
    }
    TowerOfHanoi(n-1, frompeg, auxpeg, topeg);
    printf("Move disk %d from peg %c to peg %c\n", n, frompeg, topeg);
    TowerOfHanoi(n-1, auxpeg, topeg, frompeg);
}

int main()
{
    TowerOfHanoi(2, 'A', 'B', 'C');
    return 0;
}