#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rockpaperscissor(char you, char comp)
{
    if(you==comp){
        return 0;
    }
    else if((you=='r' && comp=='p') || (you=='s' && comp=='s')|| (you=='s' && comp=='r')){
        return 1;
    }
    else{
        return -1;
    }
}

int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 100 + 1;
    if (number < 33){
        comp = 'r';
    }
    else if (number < 66){
        comp = 'p';
    }
    else{
        comp = 's';
    }

    printf("Enter 'r' for rock , 'p' for paper, 's' for scissor\n");
    scanf("%c", &you);
    int result = rockpaperscissor(you, comp);
    if (result == 0){
        printf("Game Drawn\n");
    }
    else if (result == 1){
        printf("You win\n");
    }
    else{
        printf("You lose\n");
    }
    printf("You chose %c and the computer chose %c\n", you, comp);
    return 0;
}
