#include <stdio.h>

int main(void)
{
int x = 1;
float p = 0;
for (int i = 1; i <= 9999; i++) {
if ((i%2) != 0) {
if (x==1) {
p += 1/i;
x = 0;
}
else {
p -= 1/i;
x = 1;
}
}
}
printf("%f", p*4);
return (0);
}
