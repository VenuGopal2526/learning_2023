// Program to copy a file using file handling.

#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp1,*fp2;
    fp1=fopen("example1.txt","r");
    fp2=fopen("example2.txt","w");
    size_t maxlen=50;
    char* ptr=(char*)calloc(maxlen,sizeof(char));
    if(NULL==fp1){
        printf("File Doesn't exist");
        return 2;
    }
    
    while((getline(&ptr,&maxlen,fp1))!=-1){
        fprintf(fp2,"%s",ptr);
    }
    free(ptr);
    fclose(fp1);
    fclose(fp2);
    return 0;
}