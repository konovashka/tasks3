//Дано натуральное число, если оно меньше 10 - выдать n! иначе n^k

#include <iostream>

int main()
{
    int n, k, m,copy;
    scanf_s("%d",&k);
    scanf_s("%d",&n);
    m = 1;
    copy = n;
    if (n<10)
    {
        for (int i = 1; i <= k; i++)
        {
            m = m * i;
        }
    }
    else
    {
        for (int i = 0; i < k; i++)
        {
            m = m * copy;
        }
    }
    printf("%d", m);
}
