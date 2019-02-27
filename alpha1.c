# include <stdio.h>
# include <cs50.h>


int main(void)
{

char character = 'a';
character = character-97;
int k = get_int("enter the key: ");
character = character + k;
{
    printf("%i",character );
}

}

