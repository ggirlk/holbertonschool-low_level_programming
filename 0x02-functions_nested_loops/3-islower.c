/**
 * _islower - test if is lower case or not.
 * @c: is the character to test
 * Return: 1 or 0
 */
int _islower(char c)
{
char str;
int ret = 0;
for (str = 'a'; str <= 'z'; str++)
{
if (c == str)
{
ret = 1;
}
}
return (ret);
}
