#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *myInFile , *myOutFile;
    char ch;

    myInFile= fopen("data.txt","r");
    if(myInFile==NULL){
        printf("Could not open data.txt!\n");
        exit(1);
    }
    myOutFile=fopen("somedata.txt","w");
    if(myInFile==NULL){
        printf("Could not open somedata.txt!\n");
        exit(1);
    }

    while((ch==fgetc(myInFile))!=NULL){
        fputc(ch,myOutFile);
    }
    fclose(myInFile);
    fclose(myOutFile);
}