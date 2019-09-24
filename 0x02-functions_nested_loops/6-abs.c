/**
 * _abs - return the absolute value of an integer.
 *@n: is the number to change
 * Return: abs of a number given
 */
int _abs(int n)
{
int ret;
if (n <= 0)
{
ret = n * -1;
}
else
{
ret = n;
}
return (ret);
}
