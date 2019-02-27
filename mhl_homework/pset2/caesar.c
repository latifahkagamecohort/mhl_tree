// Latifah Habibou

# include <stdio.h>
# include <cs50.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>

int main ( int argc, string argv[])
{
int argc = 2;

// conversion of the plaintext into an integer

string plaintext = argv[];
int i = atoi(plaintext);

// asking the user to type the plaintext

strint plaintext = get_string("Enter your plaintext: ");


// preserving the case of the plaintext

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

// trying to convert the ascii values of the letter into the alphabetical index

char character [] = {'a'; 'b'};
character = character-97;
int k = get_int("enter the key: ");
character = character + k;
{
    printf("%i",character );
}


//printing the result of the program

{
    printf("The cyphertext is: %s",plaintext)
}

}

}














