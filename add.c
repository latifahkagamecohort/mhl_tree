# include<stdio.h>
# include<cs50.h>

int sum (int a,int b,int c,int d,int e,int f,int g,int h,int i,int j);
int product (int a,int b,int c,int d,int e,int f,int g, int h,int i,int j);

int main(void)
{
   int a = 2, b=2, c=2, d=4, e=3, f=3, g=2, h= 1, i=3, j=1;
    int y = sum(a,b,c,d,e,f,g,h,i,j);
    int z = product(a,b,c,d,e,f,g,h,i,j);
    printf("The sum is %i, and the product is %i", y,z);
}

int sum (int a,int b,int c,int d,int e,int f,int g,int h,int i,int j)
{
    return a+b+c+d+e+f+g+h+i+j;
}

int product (int a,int b,int c,int d,int e,int f,int g,int h,int i,int j)
{
    return a*b*c*d*e*f*g*h*i*j;
}
