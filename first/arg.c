# include <stdio.h>
# include <cs50.h>
# include <ctype.h>

int main(void)
{
    char name = get_char("letter: ");

    if(islower(name))
    {
        printf("lowercase");
    }
    else if(isupper(name))
        {
        printf("uppercase");
        }
    else
    printf("not a character");

}
