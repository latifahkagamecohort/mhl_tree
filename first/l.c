# include <stdio.h>
# include <cs50.h>

int add(int a, int b);
int sub(int a, int b);
int mult(int a, int b);
int divide(int a, int b);
int average(int a, int b);

int main(void)
{
    int a = get_int("a: ");
    int b = get_int("b: ");
    int c = add(a,b);
    int d = sub(a,b);
    int e = mult(a,b);
    int f = divide(a,b);
    int g = average(a,b);

    printf("The sum of a and b is %i\n The reminder is %i\n a times b is %i\n a divided by b is %i\n The average between a and b is %i", c,d,e,f,g);
}

int add(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int mult(int a, int b)
{
     return a*b;
}
int divide(int a, int b)
{
     return a/b;
}
int average(int a, int b)
{
    return(a+b)/2;
}