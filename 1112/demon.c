#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
	pid_t pid;
	if((pid =fork())<0)
		exit(0);
	else
