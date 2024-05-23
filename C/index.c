#include <stdio.h>
int main(){
FILE *fp;
fp=fopen("myfile2.txt","w");
fputs("hello c programming",fp);
fclose(fp);
}