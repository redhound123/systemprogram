#include <sys/stat.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	struct stat buf;

	if(stat(argv[1], &buf) == -1)
	{
		perror("stat");
		return 1;
	}

	printf("I-node number : %ld\n", (long) buf.st_ino);
	printf("Link count : %ld\n", (long)buf.st_nlink);
	printf("UID : %ld GID : %ld\n", (long)buf.st_uid,(long)buf.st_gid);
	printf("File size : %ld\n", (long)buf.st_size);
	printf("Last status change : %s",ctime(&buf.st_ctime))
	printf("Last file accexx : %s",ctime(&buf.st_atime));
	printf("Last file modification : %s",ctime(&buf.st_mtime));

	return 0;
}
