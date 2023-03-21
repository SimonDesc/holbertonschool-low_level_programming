/**
 * print_name - print a name
 *
 *
 *@name: the name
 *@f: the pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
        f(name);
}
