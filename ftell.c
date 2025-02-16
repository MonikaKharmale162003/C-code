#include<stdio.h>
int main(){
	FILE*fp;
	int length;
	fp=fopen("myfile.txt","r");
	
	fseek(fp,0,SEEK_END);
	length=ftell(fp);
	fclose(fp);
	printf("the size of file %d bytes",length);
}
