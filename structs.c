/*structs are collection of related elements in C.They are related to classess in other programming languages*/
#include <stdio.h>
#include <string.h>
    struct player
    {
        char name[20];
        int score;
    };
    int main()
    {
        struct player player1;
        struct player player2;
        strcpy(player1.name, "Daniel");
        player1.score = 4;

        strcpy(player2.name, "Muuo");
        player2.score = 3;
        printf("%s\n", player1.name);
        printf("%d\n", player1.score);
        printf("%s\n", player2.name);
        printf("%d\n", player2.score);
        return 0;

    }