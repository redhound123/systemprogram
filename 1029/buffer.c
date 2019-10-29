#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int j,i,n,m;
	char c;
	printf("반복 횟수 입력 : ");
	scanf("%d",&n);

	for(i=1; i<=n; i++){
		printf("\n반복할 문자와 반복할 수 입력 : ");
		getchar();
		scanf("%c %d",&c,&m);
		for(j=1; j<=m; j++){
			printf("%c",c);
		}
	}
}
