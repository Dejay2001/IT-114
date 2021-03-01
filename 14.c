#include<stdio.h>

int main(){
int f1;
int f2, a, b, c;
float d;


 printf("Enter First Integer: ");
 scanf("%d",&f1);
 printf("Enter Second Integer: ");
 scanf("%d",&f2);

 a = f1 + f2 ;
 b = f1 + f2;
 c = f1 * f2;
d = (float)f1/(float)f2;

 printf("\n\nInput any 2 Integers: %d %d\n", f1,f2);
 printf("ADD: %d\n", a);
 printf("MUL: %d\n", c);
 printf("SUB: %d\n", b);
 printf("DIV: %.1f\n", d);



return 0;

}
