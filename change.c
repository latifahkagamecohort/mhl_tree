# include <stdio.h>
# include <cs50.h>

int main(void)
{

int amount = get_int("Amount:");

// declaring the variables

int a = 500;
int b = 250;
int c = 200;
int d = 100;
int e = 50;
int f = 25;
int g = 10;
int h = 5;
int j = 1;

// initialisation of the while loop

int i = 0;

while(amount>=a)
{
    amount = amount-a;
    i++;
}
while(amount>=b)
{
     amount = amount-b;
    i++;
}
while(amount>=c)
{
    amount = amount-c;
    i++;
}
while(amount>=d)
{
    amount = amount-d;
    i++;
}
while(amount>=e)
{
    amount = amount-e;
    i++;
}
while(amount>=f)
{
    amount = amount-f;
    i++;
}
while(amount>=g)
{
    amount = amount-g;
    i++;
}
while(amount>=h)
{
    amount = amount-h;
    i++;
}
while(amount>=j)
{
    amount = amount-j;
    i++;
}

printf("The minimum number of coins for your change is %i",i);

}





