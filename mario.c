#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get integer between 1 and 8
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h > 8 || h < 1);

    // Create  rows
    for (int i = 0 ; i < h ; i++)
    {
        // Print spaces or vacuum of first pyramid
        for (int k = h - 1 ; k > i ; k--)
        {
            printf(" ");
        }

        // Print the first pyramid
        for (int n = -1 ; n < i ; n++)
        {
            printf("#");
        }

        printf("  ");

        // Print the second pyramid
        for (int z = -1 ; z < i ; z++)
        {
            printf("#");
        }
        printf("\n");
    }
}