/*
    Cristian C. Castillo 
*/
#include "dog_definition.cpp"

int main(int argc,const char *argv[]){
    /* file descriptor */
    int fd; 
    /* open using system call > O.SYS,1 byte @ a time */
    fd = open("dog.cpp",O_RDONLY); 
    /* Check to see if dog.cpp exist */
    check_warn(fd,argv);
    close(fd);
    /* dog.cpp file no arg files */
    if(argc == 1){
        /* Reset permission */
        fd = open("dog.cpp",O_RDWR);
        /* Begin reading user input then output via std format */
        user_input_output(fd,argv);
    }
    else{
        close(fd);
        const char *dash;
        /* Flag will help us ignore future dashes */
        bool flag = false;
        /* loop through file arguments */
        for(int i = 1; i < argc;i++){
        /* Looks & accepts 1 dash from terminal only */
            if(strcmp(argv[i],"-") == 0){
                dash = strstr(argv[i],"-");
                if(argv[i] == dash && flag == false)
                    dash_input_output();
                flag = true;
            }
            else{
        /* Else, must be a regular file argument to be read */
                fd = open(argv[i],O_RDONLY);
        /* Check to see if it is a directory and valid file */
                check_format(fd,argv,i);
            }
        }
    }
    return 0;
}
