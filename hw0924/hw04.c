#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#define BUFSIZE 1

int main(int argc, char *argv[])
{
	int fd1,fd2,n1,n2;
	int count=0;
	
	char buf1[BUFSIZE], buf2[BUFSIZE];

	if(argc != 3){
		fprintf(stderr,"사용법: %s file1 file2 \n",argv[0]);
		exit(1);
	}


	if((fd1 = open(argv[1],O_RDONLY)) == -1){
		printf("1번 파일 열기 오류 \n");
		exit(2);
	}
	if((fd2 = open(argv[2],O_RDONLY)) == -1){
		printf("2번 파일 열기 오류 \n");
		exit(3);
	}

	while(1){
		n1=read(fd1,buf1,1);
		n2=read(fd2,buf2,1);
		count++;

		if(buf1[0] != buf2[0]){
			printf("파일의 %d번째 위치에서 처음 달라집니다.\n",count);
			exit(0);
		}


		if(n1 == -1 || n2 ==-1){
			printf("파일이 끝났습니다.\n");       
			exit(0);
		}
	}




	close(fd1);
	close(fd2);
}
