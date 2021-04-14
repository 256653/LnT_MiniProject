#include "C:\Users\NAIK\OneDrive\Documents\LnT_MiniProject\3_Implementation\inc\tictactoe.h"
//#include "handcricket.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    printf("Welcome to the Gaming Application...\n");
    printf("Available games are Tic-Tac-Toe and Handcricket..\n");
    printf("For Tic-Tac-Toe enter 1\n");
    printf("For handcricket enter 2\n");
    int ch;
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 : tictactoe();
        break;
        /*case 2:handcricket();
        break;*/
    }
    printf("Hope you enjoyed..!!");
}