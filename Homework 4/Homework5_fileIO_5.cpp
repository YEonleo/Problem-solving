#include<stdio.h>
#include<stdlib.h>

int main(){
    char ch;
    FILE *myFile;
    myFile = fopen("data.txt","r");

    if(myFile == NULL){
        printf("Could not open data.txt!\n");
        exit(1);
    }
    while((ch=fgetc(myFile))!=NULL){
        putchar(ch);

    }
    fclose(myFile);

}