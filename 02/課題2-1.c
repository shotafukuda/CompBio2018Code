#include<stdio.h>
#include<math.h>
int main(void){
int t;
double x,x0,xx,k,r;
x=1.0;
x0=1.0;
k=100.0;
r=1.0;
FILE *fp;
fp=fopen("output.txt", "w");
fprintf(fp, "%d, %f", 0, x0);
for(t=1; t<300;t++){
  xx=x+r*(1-x/k)*x;
  fprintf(fp, "%d, %f\n", t, xx);
  x=xx;
}
fclose(fp);
return 0;
}
