#include <stdio.h>

void SOMA(int a, int b)
{
    int result;
    result = a + b;
    printf("A Soma de %d com %d = %d\n",a,b,result);
}
int main(){

int a,b;

a = 10;
b = 20;

SOMA(a,b);

a = 100;
b = 200;

SOMA(a,b);

a = 1000;
b = 2000;

SOMA(a,b);

return 0;


}
