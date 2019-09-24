#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

int main()

{
	struct stat buf;
	stat("txt1.txt",&buf);
	printf("st_mode = %o\n", buf.st_mode);
	
	return 0;
}
