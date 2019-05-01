# include <stdio.h>
# include <cs50.h>
# include <string.h>
# include <ctype.h>

int main(int argc, string argv[])
{
    if(argc!=2)
    {
        printf("Two arguments needed\n");
        return 1;
     }

    int k = atoi(argv[1]);
    if(k<0)
    {
        printf("the key is invalid\n");
        return 1;
    }

    else
    {
        char* plaintext = get_string("Enter your plaintext: ");
        for(int i = 0, n = strlen(plaintext); i<n; i++)
        {
            if (islower(plaintext[i]))
            printf("%c", (((plaintext[i]+k)-97 % 26) + 97));

            else if (isupper(plaintext[i]))
            printf("%c", (((plaintext[i]+k)-97 % 26) + 65));

            else
            printf("%c", plaintext[i]);

        }
    }
}
