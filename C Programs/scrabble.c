#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int points[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
int calc_score(string word);
void result(int score1, int score2);

int main(void)
{
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    int score1 = calc_score(word1);
    int score2 = calc_score(word2);

    result(score1,score2);
}


int calc_score(string word)
{
    int score = 0;

    for(int i = 0,len = strlen(word);i < len;i++)
    {
        if(isupper(word[i]))
        {
            score += points[word[i] - 'A'];
        }

        else if(islower(word[i]))
        {
            score += points[word[i] - 'a'];
        }
    }
     return score;
}


void result(int score1, int score2)
{
    if(score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if(score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else if(score1 == score2){
        printf("Tie!\n");
    }
}
