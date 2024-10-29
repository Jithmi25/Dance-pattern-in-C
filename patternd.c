#include <stdio.h>
#include <conio.h>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

int i, j, k = 0;

// Apply colors in display function
void display()
{
    system("cls");
    // head part
    for (i = 1; i <= 5; i++)
    {
        printf(RED); // Set color to red
        Head(i);
        Head(i);
        Head(i);
        Head(i);
        Head(i);
        printf(RESET "\n"); // Reset color after each line
    }
    // body part
    for (i = 1; i <= 5; i++)
    {
        printf(GREEN); // Set color to green
        body(i);
        body(i);
        body(i);
        body(i);
        body(i);
        printf(RESET "\n");
    }
    // leg part
    for (i = 1; i <= 5; i++)
    {
        printf(YELLOW); // Set color to yellow
        leg(i);
        leg(i);
        leg(i);
        leg(i);
        leg(i);
        printf(RESET "\n");
    }
}
int main()
{
    while (1 == 1)
    {
        k = k + 1;
        display();
        if (k >= 16)
            k = 0;
        for (i = 0; i <= 10000; i++)
        {
            for (j = 0; j <= 9000; j++)
            {
            }
        }
    }
}
void Head(i)
{
    // head left side
    for (j = 1; j <= 5; j++)
    {
        if (k == 1 || k == 2 || k == 3 || k == 4 || k == 5 || k == 6 || k == 7 || k == 8 || k == 9)
        {
            if (i == j)
            {
                printf("0");
            }
            else
            {
                printf(" ");
            }
        }
        else
        {
            printf("   ");
        }
    }
    printf("   ");
    // head mid
    for (j = 1; j <= 5; j++)
    {
        if (k >= 1 && k <= 16)
        {
            if (k >= 2 && i <= 4 && j >= 2 && j <= 4)
            {
                printf("0");
            }
            else if (i == 5 && j == 3)
            {
                printf("0");
            }
            else
            {
                printf(" ");
            }
        }
    }
    printf("   ");
    // head right side
    for (j = 1; j <= 5; j++)
    {
        if (k == 1 || (k >= 10 && k <= 16))
        {
            if (i + j == 6)
            {
                printf("0");
            }
            else
            {
                printf(" ");
            }
        }
        else if (k == 9)
        {
            if (i + j == 6)
            {
                printf("0");
            }
            else
            {
                printf(" ");
            }
        }
        else
        {
            printf("  ");
        }
    }
    printf("   ");
}
void body(i)
{
    // body left side
    for (j = 1; j <= 5; j++)
    {
        if (k == 10 || k == 12 || k == 14 || k == 16)
        {
            if (i + j == 6 && i <= 3)
            {
                printf("0");
            }
            else if (i == j && i >= 3)
            {
                printf("0");
            }
            else
            {
                printf(" ");
            }
        }
        else if (k == 11 || k == 13 || k == 15)
        {
            if (i == 1 || j == 1)
            {
                printf("0");
            }
            else if (j + i >= 6)
            {
                printf("0");
            }
            else
            {
                printf(" ");
            }
        }
        else
        {
            printf(" ");
        }
    }
    printf("   ");
    // body mid
    for (j = 1; j <= 5; j++)
    {
        if (k == 1 || k == 2 || k == 4 || k == 6 || k == 8 || k == 10 || k == 12 || k == 14 || k == 16)
        {
            printf("0");
        }
        else if (k == 3 || k == 5 || k == 7)
        {
            if (j >= 1)
            {
                printf("0");
            }
            else
            {
                printf(" ");
            }
        }
        else if (k == 11 || k == 13 || k == 15)
        {
            if (i + j <= 6)
            {
                printf("0");
            }
            else
            {
                printf(" ");
            }
        }
        else
        {
            printf(" ");
        }
    }
    printf("   ");
    // body right side
    for (j = 1; j <= 5; j++)
    {
        if (k == 2 || k == 4 || k == 6 || k == 8)
        {
            if (i == j && j <= 3)
            {
                printf("0");
            }
            else if (i + j == 6 && i >= 3)
            {
                printf("0");
            }
            else
            {
                printf(" ");
            }
        }
        else if (k == 3 || k == 5 || k == 7)
        {
            if (i == 1 || j == 5 || i >= j)
            {
                printf("0");
            }
            else
            {
                printf(" ");
            }
        }
        else
        {
            printf(" ");
        }
    }
    printf("   ");
}
void leg(i)
{
    // leg left side
    for (j = 1; j <= 5; j++)
    {
        if (k == 11 || k == 13 || k == 15)
        {
            if (i == j)
            {
                printf("0");
            }
            else
            {
                printf(" ");
            }
        }
        else
        {
            printf(" ");
        }
    }
    printf("   ");
    // leg mid
    for (j = 1; j <= 5; j++)
    {
        if (k == 1 || k == 9 || k == 2 || k == 4 || k == 6 || k == 8 || k == 10 || k == 12 || k == 14 || k == 16)
        {
            if (j == 1 || j == 5)
            {
                printf("0");
            }
            else
            {
                printf(" ");
            }
        }
        else if (k == 11 || k == 13 || k == 15)
        {
            if (i == j)
            {
                printf("0");
            }
            else
            {
                printf(" ");
            }
        }
        else if (k == 3 || k == 5 || k == 7)
        {
            if (i + j == 6)
            {
                printf("0");
            }
            else
            {
                printf(" ");
            }
        }
    }
    printf("   ");
    // leg right side
    for (j = 1; j <= 5; j++)
    {
        if (k == 3 || k == 5 || k == 7)
        {
            if (i + j == 6)
            {
                printf("0");
            }
            else
            {
                printf(" ");
            }
        }
        else
        {
            printf(" ");
        }
    }
    printf("   ");
}
