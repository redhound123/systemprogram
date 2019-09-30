#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#define BUFSIZE 1

int main(int argc, char *argv[])
{
	        int fd,n;
		int state=0;
		int letter=0;
		int word = 2;
		int line = 0;
		char buf[BUFSIZE];
       		char str[512];

		if(argc == 1){
			printf("내용을 입력해 주세요:\n");
			fgets(str,sizeof(str),stdin);
			fd=0;	
		}


	
		else if((fd = open(argv[1],O_RDONLY)) == -1){
			printf("1번 파일 열기 오류 \n");
			exit(2);
		}

	
		while(1){
			n=read(fd,buf,1);
			
			printf("%c",buf[0]);

			if(buf[0] == '\n') line++;
				
			else if(buf[0] == ' '){
				if(state==1){
					state=0;
					word++;
				}
		
			}


			else{ 
				letter++;
				state=1;
			}	

		
			if(n == 0){
				printf("문자 수 : %d 단어 수 : %d 줄 수: %d \n",letter,word,line);
				exit(0);
			}
		}

	
		close(fd);
}
