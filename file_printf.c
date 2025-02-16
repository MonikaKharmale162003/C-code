 #include<stdio.h>
 int main(){
     FILE*fp;
     fp=fopen("file1.txt","w");    //opening file
     fprintf(fp,"Hello this is file handling....\n");   //writing data into file
     fclose(fp);    //closing file
 }
