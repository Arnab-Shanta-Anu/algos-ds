#include<stdio.h>

int main()
{
    FILE *fp;
    char c;
    printf("Data Input\n\n");
    fp=fopen("test.txt","w");

    while((c=getchar())!=EOF)
        putc(c,fp);
    fclose(fp);
    printf("\nData Output\n\n");
    fp=fopen("test.txt","r");
    while((c=getc(fp))!=EOF)
        printf("%c",c);
    fclose(fp);
}
