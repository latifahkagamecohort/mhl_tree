# include <stdio.h>
# include <cs50.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>

int main(void)
{

char plaintext = get_char("Enter your plaintext ");

{
if(isalpha(plaintext))
{
    printf("%c",plaintext);
}
else if (islower(plaintext))
{
     printf("%c",plaintext);
}
else (isupper(plaintext));
{
     printf("%c",plaintext);
}


}

}
