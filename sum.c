// sum a range of numbers iteratively

# include <stdio.h>
# include <cs50.h>

int sigma(int m);

int main(void)
{
    int n;
    do
    {
        n = get_int("positive integer:");
    }
    while(n<1)
    int answer = sigma(n);
    printf("%i\n",answer);
}

int sigma(int m)
int sum = 0;
for(int i = 1; i<=m;i++)
{
    sum + = i;
    return sum;
}
A