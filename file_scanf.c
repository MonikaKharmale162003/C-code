#include<stdio.h>
int main(){
    FILE *fp;
    char str[255];
    
    fp=fopen("file1.txt","r");
    
    while(fscanf(fp,"%s",str)!=EOF){
        printf("%s",str);
    }
    fclose(fp);
}

