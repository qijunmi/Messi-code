#ifndef _INCLUDE_DIRECTORY_
#define _INCLUDE_DIRECTORY_


#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <stdlib.h>
#include <dirent.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>

typedef DIR * dir;
typedef struct dirent * entry;
typedef struct stat * finfo;

extern char * get_path_str(char * path);
extern void walkdir(char *path, int mode, unsigned int depth);
//extern int is_directory(char * path);

#endif
