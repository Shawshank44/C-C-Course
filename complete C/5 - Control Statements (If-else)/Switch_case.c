#include<stdio.h> 

int main(){

    char menu;
    printf("Please Enter The Menu Option (D,P,I) : ");
    scanf("%c", &menu);
    getchar();
    /*
        getchar() is used after each scanf() to consume any remaining newline character in the input buffer, 
        which prevents any issues with subsequent scanf() calls.
    */

    char SubMenu;
    printf("Please Enter The SubMenu Option (M,S) : ");
    scanf("%c", &SubMenu);

    switch (menu)
    {
    case 'D':
    case 'd': // can use multiple instance
        printf("You selected D is Dosa \n");
        switch (SubMenu)
        {
        case 'M':
            printf("You are ordering Masala Dosa");
            break;
        case 'S':
            printf("You are ordering Set Dosa");
            break;
        
        default:
            ("You selected invalid option please restart");
            break;
        }
        break;
    case 'P':
        printf("You selected P is PaniPuri");
        break;
    case 'I':
        printf("You selected P is Idly sambhar");
        break;
    default:
        printf("You selected invalid option please restart");
        break;
    }

     
    return 0;
}