#include <stdlib.h>
#include <stdio.h>


int main(int argc,char** argv){
  double** table1=(double*)malloc(1000*sizeof(double));
  double** table2=(double*)malloc(1000*sizeof(double));
  
  int i;
  for(i=0;i<1000;++i)
      table1[i]=srand()/1.0;
      
  for(i=0;i<1000;++i)
      table2[i]=table1[i];
  
  printf("load completed\n");
  
  return 0;
}
