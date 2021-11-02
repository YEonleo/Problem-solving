#include<stdio.h>
#include<stdlib.h>

int main(){
    int i;
    char ch;
    FILE *myFile;
    myFile = fopen("myInFile.txt","r");

    if(myFile == NULL){
        printf("\nFile Could Not be Opened");
    }
    else{
        ch=fgetc(myFile);
        while(ch!=NULL){
            putchar(ch);
            ch = fgetc(myFile);
        }
        printf("\nFinished printing the file\n");
        fclose(myFile);
    }

}