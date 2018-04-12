#include "game.h"
void game()
{
    char mine[ROWS+2][COLS+2];
    char show[ROWS+2][COLS+2];
    srand((unsigned int)time(NULL));
    memset(mine,'0',(ROWS+2)*(COLS+2)*sizeof(char));
    memset(show,'*',(ROWS+2)*(COLS+2)*sizeof(char));
    set_mine(mine,ROWS+2,COLS+2);
    display(mine,ROWS+2,COLS+2);
    display(show,ROWS+2,COLS+2);
    play_game(mine,show);
}

void menu()
{
    printf("*******************************************\n");
    printf("*************1.play*******2.exit***********\n");
    printf("*******************************************\n");
}

int main()
{
    int input=0;
    do
    {
        menu();
        printf("请选择：>");
        scanf("%d",&input);
        switch(input)
        {
            case 1:
                game();
                    break;
            case 0:
                break;
            default:
                printf("选择错误：>");
                break;
        }
    }
    while(input);
    {
        return 0;
    }
}
