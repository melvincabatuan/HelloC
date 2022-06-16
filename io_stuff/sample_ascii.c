#include <stdio.h>

void ascii_menu()
{
    printf(""
           " ___ .-. .-.     .--.    ___ .-.    ___  ___  \n"
           "(   )   '   \\   /    \\  (   )   \\  (   )(   ) \n"
           " |  .-.  .-. ; |  .-. ;  |  .-. .   | |  | |\n"
           " | |  | |  | | |  | | |  | |  | |   | |  | |\n"
           " | |  | |  | | |  |/  |  | |  | |   | |  | |\n"
           " | |  | |  | | |  ' _.'  | |  | |   | |  | |\n"
           " | |  | |  | | |  .'.-.  | |  | |   | |  ; '\n"
           " | |  | |  | | '  `-' /  | |  | |   ' `-'  /\n"
           "(___)(___)(___) `.__.'  (___)(___)   '.__.' \n");
}                                           
                                              



void ascii_mcjuan()
{
    printf(""
           "                                                                                                                                     ''''''      \n"
           "M:::::::M             M:::::::M                                   J:::::::::J                                                    '::::'        \n "
           "M::::::::M           M::::::::M                                   J:::::::::J                                                    ':::''         \n"
           "M:::::::::M         M:::::::::M                                   JJ:::::::JJ                                                   ':::'              \n"
           "M::::::::::M       M::::::::::M    cccccccccccccccc                 J:::::Juuuuuu    uuuuuu    aaaaaaaaaaaaa  nnnn  nnnnnnnn    ''''       ssssssssss \n"
           "M:::::::::::M     M:::::::::::M  cc:::::::::::::::c                 J:::::Ju::::u    u::::u    a::::::::::::a n:::nn::::::::nn           ss::::::::::s \n"
           "M:::::::M::::M   M::::M:::::::M c:::::::::::::::::c                 J:::::Ju::::u    u::::u    aaaaaaaaa:::::an::::::::::::::nn        ss:::::::::::::s \n"
           "M::::::M M::::M M::::M M::::::Mc:::::::cccccc:::::c                 J:::::ju::::u    u::::u             a::::ann:::::::::::::::n       s::::::ssss:::::s\n"
           "M::::::M  M::::M::::M  M::::::Mc::::::c     ccccccc                 J:::::Ju::::u    u::::u      aaaaaaa:::::a  n:::::nnnn:::::n        s:::::s  ssssss \n"
           "M::::::M   M:::::::M   M::::::Mc:::::c                  JJJJJJJ     J:::::Ju::::u    u::::u    aa::::::::::::a  n::::n    n::::n          s::::::s \n "
           "M::::::M    M:::::M    M::::::Mc:::::c                  J:::::J     J:::::Ju::::u    u::::u   a::::aaaa::::::a  n::::n    n::::n             s::::::s  \n"
           "M::::::M     MMMMM     M::::::Mc::::::c     ccccccc     J::::::J   J::::::Ju:::::uuuu:::::u  a::::a    a:::::a  n::::n    n::::n       ssssss   s:::::s \n"
           "M::::::M               M::::::Mc:::::::cccccc:::::c     J:::::::JJJ:::::::Ju:::::::::::::::uua::::a    a:::::a  n::::n    n::::n       s:::::ssss::::::s\n"
           "M::::::M               M::::::M c:::::::::::::::::c      JJ:::::::::::::JJ  u:::::::::::::::ua:::::aaaa::::::a  n::::n    n::::n       s::::::::::::::s \n"
           "M::::::M               M::::::M  cc:::::::::::::::c        JJ:::::::::JJ     uu::::::::uu:::u a::::::::::aa:::a n::::n    n::::n        s:::::::::::ss\n"
           "MMMMMMMM               MMMMMMMM    cccccccccccccccc          JJJJJJJJJ         uuuuuuuu  uuuu  aaaaaaaaaa  aaaa nnnnnn    nnnnnn         sssssssssss    \n");
}

int main()
{
    printf("Hello, World!\n");
    ascii_menu();
    printf("\n\n\n MENU: \n");
    printf("\t 1. SUB-MENU1: \n");
    printf("\t 2. SUB-MENU2: \n");
    printf("\t 3. SUB-MENU3: \n");
    printf("\t EXIT: \n");
    printf("\n\n\n etc. \n");
    return 0;
}