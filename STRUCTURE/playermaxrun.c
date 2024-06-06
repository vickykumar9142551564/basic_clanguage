#include<stdio.h>
#include<string.h>
struct game{
    char playername[20];
    char teamname[20];
    int maxscore;
};
int main(){
    struct game a[3];
    for(int i=0;i<3;i++){
    printf("player name:");
    scanf("%s",&a[i].playername);
    printf("team name:");
    scanf("%s",&a[i].teamname);
    printf("maximum score is:");
    scanf("%d",&a[i].maxscore);
    }
    printf("\n");
    for(int i=0;i<3;i++){
        printf("player name:%s\n",a[i].playername);
        printf("maximum score is:%d\n\n",a[i].maxscore);
    }
}
