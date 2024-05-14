#include "raylib.h"

#define BOARD_LENGTH 7
#define BOARD_WIDTH 5
#define SQUARE_SIZE 80

int main(void)
{
    // Initialization
    InitWindow(BOARD_LENGTH * SQUARE_SIZE, BOARD_WIDTH * SQUARE_SIZE, "Raylib Game");

    //Textures
    /*Image archer_image = LoadImage("Images/archer_sprite.jpg");
    Image thief_image = LoadImage("Images/thief_sprite.jpg");
    Texture2D knight_texture = LoadTextureFromImage(knight_image);
    Texture2D archer_texture = LoadTextureFromImage(archer_image);
    Texture2D thief_texture = LoadTextureFromImage(thief_image);
    UnloadImage(knight_image);
    UnloadImage(archer_image);
    UnloadImage(thief_image);
     */
    Texture2D knight_texture = LoadTexture("Images/knight_sprite.jpg");

    // Game board
    int board[BOARD_LENGTH][BOARD_WIDTH] = { 0 };
    // Add new pieces to the board
    board[1][1] = 2; // Add a new piece at position (1,1)

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update

        // TODO: Handle user input and game logic here

        // Draw
        BeginDrawing();

        ClearBackground(RAYWHITE);

        // Draw the game board
        for (int i = 0; i < BOARD_LENGTH; i++)
        {
        for (int j = 0; j < BOARD_WIDTH; j++)
            {
                // Alternate colors for the squares
                Color squareColor = ((i + j) % 2 == 0) ? DARKGRAY : LIGHTGRAY;

                // Draw square
                DrawRectangle(i * SQUARE_SIZE, j * SQUARE_SIZE, SQUARE_SIZE, SQUARE_SIZE, squareColor);

                // Draw pieces (1 represents a piece in this example)
                if (board[i][j] == 1)
                {
                    DrawCircle(i * SQUARE_SIZE + SQUARE_SIZE / 2, j * SQUARE_SIZE + SQUARE_SIZE / 2, SQUARE_SIZE / 2 - 10, BLACK);
                }

                // Draw new pieces (2 represents a new piece)
                if (board[i][j] == 2)
                {
                    // Draw a new shape, for example a rectangle
                ClearBackground(RAYWHITE);
                //DrawRectangle(i * SQUARE_SIZE + 10, j * SQUARE_SIZE + 10, SQUARE_SIZE - 20, SQUARE_SIZE - 20, RED);
                DrawTexture(knight_texture, i * SQUARE_SIZE + 10, j * SQUARE_SIZE + 10, RED);
                }
            }
        }

        EndDrawing();
    }

    // De-Initialization
    UnloadTexture(knight_texture);
    //UnloadTexture(archer_texture);
    //UnloadTexture(thief_texture);
    CloseWindow();

    return 0;
}

/*int CaseXPosToXPos(int CaseX)
{
    If (CaseX<0)
}

*/