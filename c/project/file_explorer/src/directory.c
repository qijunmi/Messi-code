#include "directory.h"

char * get_path_str(char * path)
{
	int len = strlen(path);
	printf("%d %d\n",len,sizeof (path));

	if(path[len-1] != '/')
	{
		char * str = malloc(len + 1);
		strcat(str,path);
		strcat(str,"/");
		return str;
	}

	return path;
}

void walkdir(char *path, int mode, unsigned int depth)
{
	path = get_path_str(path);
	DIR * dir_p = opendir(path);
	entry file;
	if(dir_p == NULL)
	{
		perror("");
	}


	while(file = readdir(dir_p))
	{
		printf("%s\n",file->d_name);
	}

	closedir(dir_p);
}

/*void walkdir(char * path, int mode, unsigned int depth)
{
	int fd = open(path,O_RDONLY);
	struct stat * file_info;

	if(fd == -1)
		perror("");

	fstat(fd,file_info);
	if(!S_ISDIR(file_info->st_mode))
	{
		printf("The file is not a directory!\n");
		return;
	}

	DIR * dir_p = fdopendir(fd);
	if(dir_p == NULL)
		perror("");

	entry file;

	while(file = readdir(dir_p) != NULL)
	{
		printf("%s\n",file->d_name);
	}

	close(fd);
}/
