#include <stdio.h>
#include <stdlib.h>

int m2(void) 
{
    int a, b, c, small, large;

    printf("�п�J�T�Ӽ�:\n");
    scanf_s("%d%d%d", &a, &b, &c);

    small = a;
    large = b;

    if (b < small)
        small = b;

    if (c < small)
        small = c;
    
    if (a > large) 
        large = a;
    
    if (c > large) 
        large = c;
    

    printf("�̤j�Ƭ�:%d\n", large);
    printf("�̤p�Ƭ�:%d\n", small);

    system("pause");
    return 0;
}