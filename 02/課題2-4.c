#include<stdio.h>
int main(void){
int t;
double x,x0,xx,k,r;
x0=85.0;
k=100.0;

FILE *fp;
fp=fopen("output.txt","w");
fprintf(fp,"%f,%f\n",0,x0);
for(r=1.0;r<3.0;r+=0.1){
  x=x0;
  for(t=251;t<300;t++){
    xx=x+r*(1-x/k)*x;
    fprintf(fp,"%f,%f\n",r,xx);
    x=xx;
  }
}
fclose(fp);
return 0;
}
