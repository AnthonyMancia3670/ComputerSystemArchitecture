/* 
Anthony Mancia
n01643670
/1/21/26

*/

#include <stdio.h>


struct Account {
unsigned int account_number;
char  account_type;
char *Mancia;
char *Anthony;
float 	balance;
char reserved[6];
};


// display_sizes names (kept simple)
void display_sizes() {

char a;
short b;
int c;
long d;
float e;
double f;

int *g;
long *h;
float *i;
double *j;

struct Account k;
struct Account *l;


// %zu is used b/c it tells printf the arg is size_t and u is for a unsinged decimal 
printf("Size of char: %zu Bytes\n",sizeof(a));
printf("Size of short: %zu Bytes\n",sizeof(b));
printf("Size of int: %zu Bytes\n",sizeof(c));
printf("Size of long: %zu Bytes\n",sizeof(d));
printf("Size of float: %zu Bytes\n",sizeof(e));
printf("Size of double: %zu Bytes\n",sizeof(f));

//pointers
printf("Size of int: %zu Bytes\n",sizeof(g));
printf("Size of long: %zu Bytes\n",sizeof(h));
printf("Size of float: %zu Bytes\n",sizeof(i));
printf("Size of double: %zu Bytes\n",sizeof(j));

printf("Size of struct account: %zu Bytes\n",sizeof(k));

//pointer
printf("Size of struct Account: %zu Bytes\n",sizeof(l));


}

int main(){
display_sizes();

return 0;
//retuns the display_sizes in bytes 
}
