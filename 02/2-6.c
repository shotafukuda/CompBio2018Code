#include<stdio.h>

int main(void){
  FILE *fp;
  fp=fopen("hello.txt", "w");

  fprintf(fp, "Hello, World!");

  fclose(fp);
  return 0;
}
