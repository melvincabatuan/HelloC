#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap1(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x, a, b, c, token = 4, vowels1 = 0, i = 0, vowels2 = 0, z = 0, mine = 0, yours = 0, num, confirm;
    srand(time(0));
    char str1[100], str2[100];
    double vowels;

MENU:
    system("cls");
    printf("\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\t\t+                The Lotus Casino                  +\n");
    printf("\t\t+              Come and Play with Us               +\n");
    printf("\t\t+            Opening Hours: 8pm - 5 am             +\n");
    printf("\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");

    printf("\tWhat's for Today?\n\n");
    printf("\t[1] - The Guessing Game\n\t[2] - The Slot Machine\n\t[3] - The Guess My Number Game\n\n\tToday's Special:\n\n\t[4] - The Love Calculator\n\n\tPress any key to exit...\n\n\t\tPick your choice: ");

    scanf("%d", &num);

    switch (num)
    {
    case 1:
    {
        int a = 0, b = 1, c = 0, d, i;

    HOME:
        system("cls");
        printf("\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
        printf("\t\t+                The JDKCS Casino                  +\n");
        printf("\t\t+              Come and Play with Us               +\n");
        printf("\t\t+            Opening Hours: 8pm - 5 am             +\n");
        printf("\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");

        printf("\t\t\t\t*****************\n");
        printf("\t\t\t\tThe Guessing Game\n");
        printf("\t\t\t\t*****************\n");
        printf("GAME RULES:\nFind the number '1'\n");
        printf("\n\n\t[%d] [%d] [%d]\n\tMix it how many times? ", a, b, c);
        scanf("%d", &d);

        for (i = 0; i < d; i++)
        {
            swap1(&a, &b);
            swap1(&c, &b);
        }

        printf("\n\n\tSlot:\n\t[1] [2] [3]\n\tWhere is it? ");
        scanf("%i", &i);

        if (a == 1 && i == 1 || b == 1 && i == 2 || c == 1 && i == 3)
            printf("\n\nYOU GOTCH IT!");
        else
            printf("\n\nMAY NAMAMALI NA!");
        printf("\n\n\tHere is the correct pattern: \n");
        printf("\t%d %d %d", a, b, c);

        printf("\n\n\nDo you want to play again?\n\t([1] - YES!, [2] - NO [back to Main Menu])\nChoice: ");
        scanf("%d", &confirm);
        if (confirm == 1)
            goto HOME;
        else if (confirm == 2)
            goto MENU;
        else
            return 0;

        break;
    }

    case 2:
    {
    HOME1:
        system("cls");
        printf("\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
        printf("\t\t+                The JDKCS Casino                  +\n");
        printf("\t\t+              Come and Play with Us               +\n");
        printf("\t\t+          Opening Hours: 12mn - 12 am             +\n");
        printf("\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");

        printf("\t\t\t\t****************\n");
        printf("\t\t\t\tThe Slot Machine\n");
        printf("\t\t\t\t****************\n");
        printf("GAME RULES:\nYou get no combination - you LOSE!\nYou get a combination of 2 same numbers - you get an ADDITIONAL TOKEN\nYou get a combination of 3 same numbers - you WIN!\n");

        while (token != 0)
        {
            printf("You have %d tokens\n\n", token);
            printf("Pull? (1 to pull, 2 not to pull) ");
            scanf("%d", &x);

            if (x == 1)
            {
                a = 1 + rand() % 10;
                b = 1 + rand() % 10;
                c = 1 + rand() % 10;
                printf("\t\t%d         %d          %d\n\n", a, b, c);
            }
            else
                printf("OK\n");

            if (a == b == c)
            {
                token += 4;
                printf("You WIN!\n\n");
            }

            if (a == b || b == c || a == c)
            {
                token += 1;
                printf("You got two out of three!\n\n");
            }

            else
            {
                token -= 1;
                printf("You LOSE!\n\n");
            }
        }

        printf("\n\n\nDo you want to play again?\n\t([1] - YES!, [2] - NO [back to Main Menu])\nChoice: ");
        scanf("%d", &confirm);
        if (confirm == 1)
            goto HOME1;
        else if (confirm == 2)
            goto MENU;
        else
            return 0;

        break;
    }

    case 3:
    {
    HOME2:
        system("cls");
        printf("\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
        printf("\t\t+                The JDKCS Casino                  +\n");
        printf("\t\t+              Come and Play with Us               +\n");
        printf("\t\t+            Opening Hours: 8pm - 5 am             +\n");
        printf("\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");

        printf("\t\t\t\t*****************\n");
        printf("\t\t\t\tGuess My Number\n");
        printf("\t\t\t\t*****************\n");
        printf("GAME RULES:\n\nLet your friend enter a number from 1-10.\nYou guess it, you WIN! You don't guess it, you LOSE!\nYou only have one chance to guess!\n");

        printf("\n\n\tWhat number is to be guessed? ");
        scanf("%d", &mine);
        system("cls");

        printf("\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
        printf("\t\t+                The Lotus Casino                  +\n");
        printf("\t\t+              Come and Play with Us               +\n");
        printf("\t\t+            Opening Hours: 8pm - 5 am             +\n");
        printf("\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");

        printf("\t\t\t\t*****************\n");
        printf("\t\t\t\tGuess My Number\n");
        printf("\t\t\t\t*****************\n\n\n");

        printf("Guess my number, 1 - 10: ");
        scanf("%d", &yours);

        if (yours > 10)
        {
            printf("\n\nInvalid input.\nThe game will reload as you press Enter...");
            getch();
            goto HOME2;
        }
        else if (yours < mine)
            printf("\nWRONG! Your guess was to low.\n");
        else if (yours > mine)
            printf("\nWRONG! Your guess was to high.\n");
        else
            printf("\nHORAY! YOU GOTCH IT!\n");

        printf("\nThe number was %d.", mine);

        printf("\n\n\nDo you want to play again?\n\t([1] - YES!, [2] - NO [back to Main Menu])\nChoice: ");
        scanf("%d", &confirm);
        if (confirm == 1)
            goto HOME2;
        else if (confirm == 2)
            goto MENU;
        else
            return 0;

        break;
    }

    case 4:
    {
    HOME3:
        system("cls");
        printf("\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
        printf("\t\t+                The JDKCS Casino                  +\n");
        printf("\t\t+              Come and Play with Us               +\n");
        printf("\t\t+            Opening Hours: 8pm - 5 am             +\n");
        printf("\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");

        printf("\t\t\t\t*******************\n");
        printf("\t\t\t\tThe Love Calculator\n");
        printf("\t\t\t\t*******************\n");
        printf("GAME RULES:\n\nEnter your name and your loved one's name and we'll see your compatibility. ;)\n");

        printf("\n\t\tEnter your name: ");
        scanf("%s", &str1);
        while (str1[i] != '\0')
        {
            if (str1[i] == 'A' || str1[i] == 'a' || str1[i] == 'E' || str1[i] == 'e' || str1[i] == 'I' || str1[i] == 'i' ||
                str1[i] == 'O' || str1[i] == 'o' || str1[i] == 'U' || str1[i] == 'u' || str1[i] == 'L' || str1[i] == 'l' ||
                str1[i] == 'V' || str1[i] == 'v' || str1[i] == 'S' || str1[i] == 's')
                vowels1++;
            i++;
        }
        getche();

        printf("\n\n\t\tEnter the name of your Loved One <3: ");
        scanf("%s", &str2);
        while (str2[z] != '\0')
        {
            if (str2[z] == 'A' || str2[z] == 'a' || str2[z] == 'E' || str2[z] == 'e' || str2[z] == 'I' || str2[z] == 'i' ||
                str2[z] == 'O' || str2[z] == 'o' || str2[z] == 'U' || str2[z] == 'u' || str2[z] == 'L' || str2[z] == 'l' ||
                str2[z] == 'V' || str2[z] == 'v' || str2[z] == 'S' || str2[z] == 's')
                vowels2++;
            z++;
        }

        vowels = (vowels1 + vowels2) * 3.5;

        if (vowels > 50)
            printf("\n\n\tYou and your beloved's compatibility is: %lf <3", vowels);
        else
            printf("\n\n\tYou and your beloved's compatibility is: %lf </3", vowels);

        getch();

        printf("\n\n\nDo you want to play again?\n\t([1] - YES!, [2] - NO [back to Main Menu])\nChoice: ");
        scanf("%d", &confirm);
        if (confirm == 1)
            goto HOME3;
        else if (confirm == 2)
            goto MENU;
        else
            return 0;

        break;
    }

    default:
        return 0;
    }
}
