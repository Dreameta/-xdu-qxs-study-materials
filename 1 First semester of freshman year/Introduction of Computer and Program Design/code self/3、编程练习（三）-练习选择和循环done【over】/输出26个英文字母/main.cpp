# include <stdio.h>

int main(void)
{
    char a = 97;
    int i;

    //�������
    for(i=1; i<=26; i++)
    {
        printf("%c ", a);
        a = a + 1;
    }

    printf("\n");

    //�������

    a = 122;
    for(i=1; i<=26; i++)
    {
        printf("%c ", a);
        a = a - 1;
    }

    return 0;
}
