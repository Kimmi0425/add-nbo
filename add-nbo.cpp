#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <arpa/inet.h>

int main (int argc, char* argv[]){
 FILE* f1 = fopen(argv[1],"r");
 FILE* f2 = fopen(argv[2],"r");

 uint32_t num1,num2,sum;
 fread(&num1,1,4,f1);
 fread(&num2,1,4,f2);

 num1 = ntohl(num1);
 num2 = ntohl(num2);
 sum = num1 + num2;

 printf("%d(0x%x) + %d(0x%x)=%d(0x%x)",num1,num1,num2,num2,sum,sum);

 fclose(f1);
 fclose(f2);
 return 0;
}
