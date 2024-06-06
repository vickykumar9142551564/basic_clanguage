#include<stdio.h>
#include<string.h>
void line(char c,int d);
int main(){
	int d;
	char c;
	printf("Enter the Character:");
	scanf("%c",&c);
	printf("Enter number: ");
	scanf("%d",&d);
	line(c,d);
	return 0;
}
void line(char c, int d){
	int i;
	for(i=0;i<d;i++){
		printf("%c",c);
	}
}
