#include<stdio.h>
#include<stdlib.h>

#define size 1000

int main (int argc,char **argv){

    if(argc < 2 ){
        printf("Not enough arguments!\n You have to add the \".txt\" file!\n");
    }

    FILE *fl = fopen(argv[1],"r");
    if(fl == NULL){
        printf("Error opening file!\n");
        exit(0);
    }
    
    char buffer[size];
    int j = 0;

    rewind(fl);
    int i=0;
   
    if(argv[2][0] == 'S' || argv[2][0] == 's'){
        for(int i=0; i < size ; i++){
            fread(&buffer[i], 1, 1, fl);
        }
    }else if(argv[2][0] == 'I' || argv[2][0] == 'i' ){
        for(int i = 1; i <= (size+1)/2; i++){
            fseek(fl, i-1, SEEK_SET);
            fread(&buffer[j],1,1,fl);
            fseek(fl, -i-1, SEEK_END);
            fread(&buffer[j+1], 1, 1, fl);
            j+=2;
        }
    }else {
        printf("Wrong arguments!\n");
    }
    
    fclose(fl);
}