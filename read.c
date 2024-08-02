#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc,char **argv) {
    int fd,i=0;
    ssize_t size = 1000;

    if(argc < 2){
        printf("Not enough arguments!\n You have to add the \".txt\" file and method!\n");
    }

    fd = open(argv[1], O_RDONLY);

    if(fd == -1) {
        printf("Error opening file\n");
        exit(0);
    }

    if(size == -1) {
        printf("Error reading from file");
        close(fd);
        exit(0);
    }

    int j = 0;
    char buffer[size];
    lseek(fd, 0, SEEK_SET);
    if(argv[2][0] == 's' || argv[2][0] == 'S' ){
        for(int i = 0; i < size ; i++){
            read(fd, &buffer[i],1);
        }
    }else if(argv[2][0] == 'i' || argv[2][0] == 'I' ){
        for(int i = 1; i <= size/2; i++){
            lseek(fd, i-1, SEEK_SET);
            read(fd, &buffer[j], 1);
            lseek(fd, -i-1, SEEK_END);
            read(fd, &buffer[j+1], 1);
            j+=2;
        }
    }else {
        printf("Wrong arguments!\n");
    }
    close(fd);

    return 0;
}