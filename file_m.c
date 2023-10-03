#include <stdio.h>

int main ()
{
    FILE *fp;

    fp=fopen("file_data.txt","w+");
    fprintf (fp,"Welcome...\n");
    fputs("good_morning...\n",fp);
    fputs("i_am_enjoying ...\n",fp);

    fclose(fp);

    return 0 ;
}