#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define WIDTH 20
#define HEIGHT 10
char maze[HEIGHT][WIDTH];
void generateMaze() {
    srand(time(NULL));
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            maze[i][j] = (rand() % 4 == 0) ? '#' : ' ';
        }
    }
    maze[0][0] = 'S';
    maze[HEIGHT-1][WIDTH-1] = 'E';
}
void printMaze() {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            printf("%c", maze[i][j]);
        }
        printf("\n");
    }
}
int main() {
    generateMaze();
    printMaze();
    return 0;
}
