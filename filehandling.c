#include <stdio.h>
#include <string.h>
int main(){
FILE *fp;
fp= fopen("sample.txt","w+");
fprintf(fp,"This is a test file");
fclose(fp);
return 0;
}

