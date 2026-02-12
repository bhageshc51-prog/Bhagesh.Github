#include <stdio.h>
int main(){
    FILE*fp;
    fp=fopen("example.txt","w"); // creat or open file for writing
    if(fp==NULL) {
        printf("file opening failed!\n");
        return 1;
      }
      printf("File opened sussfully using fopen().\n");
      fclose(fp);
      printf("file closed successfully using fclose ().\n");
      return 0;
}