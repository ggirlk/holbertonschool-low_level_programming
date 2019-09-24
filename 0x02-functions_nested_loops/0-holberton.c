int _putchar(char c);

int main(void)
{
char ch[9];
int i = 0;
ch[0] = 'H';
ch[1] = 'o';
ch[2] = 'l';
ch[3] = 'b';
ch[4] = 'e';
ch[5] = 'r';
ch[6] = 't';
ch[7] = 'o';
ch[8] = 'n';
ch[9] = '\n';
while(i <= 9)
{
_putchar(ch[i]);
i++;
}
return (0);
}
