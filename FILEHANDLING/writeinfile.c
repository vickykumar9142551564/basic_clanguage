#include <stdio.h>
int main(){
    FILE *fp;
    fp = fopen("text1.txt", "w");
    char ch;
    fprintf(fp, "%c", 'v');
    fprintf(fp, "%c", 'i');
    fprintf(fp, "%c", 'c');
    fprintf(fp, "%c", 'k');
    fprintf(fp, "%c", 'y');
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