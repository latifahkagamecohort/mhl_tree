#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct records
{
    int ID, quiz_1, quiz_2, midterm_score, final_score, total_score;
    string name;
    string sex;
};

int main(void)
{
    struct records student[2];

    for(int i = 0; i<2; i++)
    {
    student[i].ID = get_int("ID:");
    student[i].quiz_1 = get_int("quiz_1: ");
    student[i].quiz_2 = get_int ("quiz_2: ");
    student[i]. midterm_score = get_int("midterm_score: ");
    student[i]. final_score = get_int("final_score: ");
    student[i].name = get_string("Name: ");
    student[i].sex = get_string("Sex: ");

    }
    printf("\n");
}

