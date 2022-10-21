#include <stdio.h>

int main()
{
    printf("How about this one?\n");

    char a[256];
    scanf("%s", a);

    printf(" \" %s \" 를 입력하셨네요.\n", a);
    return 0;
}