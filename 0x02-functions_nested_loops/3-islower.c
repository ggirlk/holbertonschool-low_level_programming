/**
 * function _islower.
 *
 * Return: 1 if variable is a lowercase character and 0 if not
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
