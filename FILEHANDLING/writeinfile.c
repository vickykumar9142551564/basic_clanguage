#include <stdio.h>
int main(){
    FILE *fp;
    fp = fopen("text1.txt", "w");
    char ch;
    fprintf(fp, "%c", 'm');
    fprintf(fp, "%c", 'a');
    fprintf(fp, "%c", 'n');
    fprintf(fp, "%c", 'g');
    fprintf(fp, "%c", 'o');
    fclose(fp);
}

/*#include <stdio.h>
int main(){
    FILE *fp;
    fp = fopen("text1.txt", "a");
    char ch;
    fprintf(fp, "%c", 'm');
    fprintf(fp, "%c", 'a');
    fprintf(fp, "%c", 'n');
    fprintf(fp, "%c", 'g');
    fprintf(fp, "%c", 'o');
}*/