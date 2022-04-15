#include <stdio.h>

int main(void)
{
     char j, k;
     int x = 0, y, z, a, b, c;
hello:
     printf("\n\nOrange juice and Apple juice costs 30 cents");

     printf("\n\n(O) Orange juice\n");
     printf("(A) Apple Juice\n");
     printf("(5) for nickels\n");
     printf("(10) for dimes\n");
     printf("(25) for quarters\n");
     printf("\n\n*note: this machine does not accept bills*\n\n");

     printf("\nPress enter to continue...");
     getch();
     system("cls");

start:
     printf("\nEnter the value of your coins one by one\n");
     scanf("%d", &x);
     switch (x)
     {
     case 5: /*five cents only*/
     {
     juice:
          printf("\nAmount received: 5\n");
          printf("(o) orange juice\n(a) apple juice)\n(c) add more coins\n");
          scanf("%s", &j);
          switch (j) /*1st switch*/
          {
          case 'o':
               printf("\nYou don't have enough to buy that yet\n");
               goto juice;
               break;
          case 'a':
               printf("\nYou don't have enough to buy that yet\n");
               goto juice;
               break;
          case 'c':
               printf("\nEnter the value of your next coin\n");
               scanf("%d", &y);
               switch (y) /*2nd switch*/
               {
               case 5: /*10 cents only*/
               {
               juice1:
                    printf("\nAmount received: 10\n");
                    printf("(o) orange juice\n(a) apple juice)\n(c) add more coins\n");
                    scanf("%s", &j);
                    switch (j) /*3rd switch*/
                    {
                    case 'o':
                         printf("\nYou don't have enough to buy that yet\n");
                         goto juice1;
                         break;
                    case 'a':
                         printf("\nYou don't have enough to buy that yet\n");
                         goto juice1;
                         break;
                    case 'c':
                         printf("\nEnter the value of your next coin\n");
                         scanf("%d", &z);
                         switch (z) /*4th switch*/
                         {
                         case 5: /*15 cents only*/
                         {
                         juice2:
                              printf("\nAmount received: 15\n");
                              printf("(o) orange juice\n(a) apple juice)\n(c) add more coins\n");
                              scanf("%s", &j);
                              switch (j) /*5th switch*/
                              {
                              case 'o':
                                   printf("\nYou don't have enough to buy that yet\n");
                                   goto juice2;
                                   break;
                              case 'a':
                                   printf("\nYou don't have enough to buy that yet\n");
                                   goto juice2;
                                   break;
                              case 'c':
                                   printf("\nEnter the value of your next coin\n");
                                   scanf("%d", &a);
                                   switch (a) /*6th switch*/
                                   {
                                   case 5: /*20 cents only*/
                                   {
                                   juice3:
                                        printf("\nAmount received: 20\n");
                                        printf("(o) orange juice\n(a) apple juice)\n(c) add more coins\n");
                                        scanf("%s", &j);
                                        switch (j) /*7th switch*/
                                        {
                                        case 'o':
                                             printf("\nYou don't have enough to buy that yet\n");
                                             goto juice3;
                                             break;
                                        case 'a':
                                             printf("\nYou don't have enough to buy that yet\n");
                                             goto juice3;
                                             break;
                                        case 'c':
                                             printf("\nEnter the value of your next coin\n");
                                             scanf("%d", &b);
                                             switch (b) /*8th switch*/
                                             {
                                             case 5: /*25 cents only*/
                                             {
                                             juice4:
                                                  printf("\nAmount received: 25\n");
                                                  printf("(o) orange juice\n(a) apple juice)\n(c) add more coins\n");
                                                  scanf("%s", &j);
                                                  switch (j) /*9th switch*/
                                                  {
                                                  case 'o':
                                                       printf("\nYou don't have enough to buy that yet\n");
                                                       goto juice4;
                                                       break;
                                                  case 'a':
                                                       printf("\nYou don't have enough to buy that yet\n");
                                                       goto juice4;
                                                       break;
                                                  case 'c':
                                                       printf("\nEnter the value of your next coin\n");
                                                       scanf("%d", &c);
                                                       switch (c) /*10th switch*/
                                                       {
                                                       case 5: /*30 cents!!*/
                                                       {
                                                       juice5:
                                                            printf("\nAmount received: 30\n");
                                                            printf("(o) orange juice\n(a) apple juice)\n(c) add more coins\n");
                                                            scanf("%s", &j);
                                                            switch (j) /*11th switch*/
                                                            {
                                                            case 'o':
                                                                 system("cls");
                                                                 y = 0;
                                                                 goto juicy;
                                                                 break;
                                                            case 'a':
                                                                 system("cls");
                                                                 y = 0;
                                                                 goto juicier;
                                                                 break;
                                                            case 'c':
                                                                 printf("\n30 is the maximum value!\n\n");
                                                                 goto juice5;
                                                                 break;
                                                            default:
                                                                 goto juice5;
                                                                 break;
                                                            } /*end of 11th switch*/
                                                       }      /*end of case 5: 30 cents*/
                                                       break; /*break for case 5: 30 cents*/
                                                       case 10:
                                                            goto juice6;
                                                            break;
                                                       case 25:
                                                       juice8:
                                                            printf("\nAmount received: 50\n");
                                                            printf("(o) orange juice\n(a) apple juice)\n(c) add more coins\n");
                                                            scanf("%s", &j);
                                                            switch (j) /*case 25: 50 cents switch*/
                                                            {
                                                            case 'o':
                                                                 system("cls");
                                                                 y = 20;
                                                                 goto juicy;
                                                                 break;
                                                            case 'a':
                                                                 system("cls");
                                                                 y = 20;
                                                                 goto juicier;
                                                                 break;
                                                            case 'c':
                                                                 printf("\n30 is the maximum value!\n\n");
                                                                 goto juice8;
                                                                 break;
                                                            default:
                                                                 goto juice8;
                                                                 break;
                                                            }
                                                            break;
                                                       default:
                                                            printf("There are no coins with that value\n\n");
                                                            goto juice4;
                                                            break;
                                                       } /*end of 10th switch*/
                                                  }      /*end of 9th switch*/
                                             }           /*end of case 5: 25 cents*/
                                             break;      /*break for case 5: 25 cents*/
                                             case 10:
                                                  goto juice5;
                                                  break;
                                             case 25:
                                             juice7:
                                                  printf("\nAmount received: 45\n");
                                                  printf("(o) orange juice\n(a) apple juice)\n(c) add more coins\n");
                                                  scanf("%s", &j);
                                                  switch (j) /*case 25: 45 cents switch*/
                                                  {
                                                  case 'o':
                                                       system("cls");
                                                       y = 15;
                                                       goto juicy;
                                                       break;
                                                  case 'a':
                                                       system("cls");
                                                       y = 15;
                                                       goto juicier;
                                                       break;
                                                  case 'c':
                                                       printf("\n30 is the maximum value!\n\n");
                                                       goto juice7;
                                                       break;
                                                  default:
                                                       goto juice7;
                                                       break;
                                                  }
                                                  break;
                                             default:
                                                  printf("There are no coins with that value\n\n");
                                                  goto juice3;
                                             } /*end of 8th switch*/
                                        }      /*end of 7th switch*/
                                   }           /*end of case 5: 20 cents*/
                                   break;      /*break for case 5: 20 cents*/
                                   case 10:
                                        goto juice4;
                                        break;
                                   case 25:
                                   juice9:
                                        printf("\nAmount received: 40\n");
                                        printf("(o) orange juice\n(a) apple juice)\n(c) add more coins\n");
                                        scanf("%s", &j);
                                        switch (j) /*case 25: 40 cents switch*/
                                        {
                                        case 'o':
                                             system("cls");
                                             y = 10;
                                             goto juicy;
                                             break;
                                        case 'a':
                                             system("cls");
                                             y = 10;
                                             goto juicier;
                                             break;
                                        case 'c':
                                             printf("\n30 is the maximum value!\n\n");
                                             goto juice9;
                                             break;
                                        default:
                                             goto juice9;
                                             break;
                                        }
                                        break;
                                   default:
                                        printf("There are no coins with that value\n\n");
                                        goto juice2;
                                        break;
                                   } /*end of the 6th switch*/
                              }      /*end of 5th switch*/
                         }           /*end of case 5: 15 cents*/
                         break;      /*break for case 5: 15 cents*/
                         case 10:
                              goto juice3;
                              break;
                         case 25:
                         juice6:
                              printf("\nAmount received: 35\n");
                              printf("(o) orange juice\n(a) apple juice)\n(c) add more coins\n");
                              scanf("%s", &j);
                              switch (j) /*case 25: 35 cents switch*/
                              {
                              case 'o':
                                   system("cls");
                                   y = 5;
                                   goto juicy;
                                   break;
                              case 'a':
                                   system("cls");
                                   y = 5;
                                   goto juicier;
                                   break;
                              case 'c':
                                   printf("\n30 is the maximum value!\n\n");
                                   goto juice6;
                                   break;
                              default:
                                   goto juice6;
                                   break;
                              }
                              break;
                         default:
                              printf("There are no coins with that value\n\n");
                              goto juice1;
                         } /*end of 4th switch*/
                    }      /*end of 3rd switch*/
               }           /*end of case 5: ten cents*/
               break;      /*break for case 5: ten cents*/
               case 10:
                    goto juice2;
                    break;
               case 25:
                    goto juice5;
               default:
                    printf("There are no coins with that value\n\n");
                    goto juice;
                    break;
               } /*end of 2nd switch*/
          }      /*end of 1st switch*/
          break; /*break case 5: five cents*/
     }           /*end of case 5: five cents*/

     case 10: /*initial 10 cents only*/
          goto juice1;
          break;

     case 25: /*initial 25 cents only*/
          goto juice4;
          break;

     default:
          x = 0;
          printf("There are no coins with that value\n\n");
          printf("Amount received: %d\n", x);
          goto start;
          break;
     }

     getch();
     system("CLS");
     y = 0;
juicy: /*orange juice*/
     printf("USER GOT ORANGE JUICE!!\n\n");
     printf("Your change is %d cents", y);
     printf("\n\nrepeat? (y/n)\n");
     scanf("%s", &k);
     switch (k)
     {
     case 'y':
     {
          system("cls");
          goto hello;
          break;
     }
     case 'n':
     {
          return 0;
          break;
     }
     default:
          return 0;
     }
     y = 0;
juicier: /*apple juice*/
     printf("USER GOT APPLE JUICE!!\n\n");
     printf("Your change is %d cents", y);
     printf("\n\nrepeat? (y/n)\n");
     scanf("%s", &k);
     switch (k)
     {
     case 'y':
     {
          system("cls");
          goto hello;
          break;
     }
     case 'n':
     {
          return 0;
          break;
     }
     default:
          return 0;
     }

     getch();
}
