/*
    Cristian C. Castillo 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Warning/Error */
#include <err.h>
#include <errno.h>

/*  System Calls from O.S LvL */
#include <unistd.h>
#include <fcntl.h> 
#include <sys/types.h> 
#include <sys/stat.h> 
/* Include file header & definitions */
#include "dog_header.h"

#define MAX_BUFFER 32768
#define ENTER_KEY 0x0A
#define STD_IN 0
#define STD_OUT 1
extern int errno;

/* Module Box 1 - Modularization in Practice*/
void user_input_output(int fd,const char *argv[]){

        char buffer[MAX_BUFFER];
        /* Read user input, and if enter output */
        while(read(STD_IN,buffer,sizeof(MAX_BUFFER)) != 0){
            check_warn(fd,argv);  
        /* User hit enter, spit inputted data via std out */      
            if(ENTER_KEY){
                write(STD_OUT,buffer,sizeof(MAX_BUFFER));
                memset(buffer,'\0',sizeof(MAX_BUFFER));
            }
        }
        close(fd);
        exit(0);
}
/* Module of Box 1 with smal config Modularization in Practice */
void dash_input_output(){

    char buffer[MAX_BUFFER];
    /* Read user input, and if enter output */
    while(read(STD_IN,buffer,sizeof(MAX_BUFFER)) != 0){
        if(ENTER_KEY){
            write(STD_OUT,buffer,sizeof(MAX_BUFFER));
            memset(buffer,'\0',sizeof(MAX_BUFFER));
        }
    }
}
/* Checks for file or directory */
void check_format(int fd,const char *argv[],int i){

        char buffer[MAX_BUFFER];
        /* If file is not present output err of file*/
        if(fd == -1){
            fprintf(stderr,"dog: %s: %s\n",argv[i],strerror(errno));
            close(fd);
        }
        /* Check for file or dir type*/
        struct stat buf;
        stat(argv[i],&buf);
        /* Is File valid? */
        if(S_ISREG(buf.st_mode)){
        /* Output file if valid ! */
            write(STD_OUT,buffer,read(fd,buffer,MAX_BUFFER));
            close(fd);
        }
        /* Is Dir valid? */
        if(S_ISDIR(buf.st_mode) && fd != -1){
        /* Dir should not be read, just like cat - output error */
            fprintf(stderr,"dog: %s: Is a directory\n",argv[i]);
            close(fd);
        }
}
/* Notify user of error */
void check_warn(int fd,const char * argv[]){
    if(fd == -1){
                warn("%s",argv[0]);
                exit(1);
    } 
}
