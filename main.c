#include<stdio.h>
#include<windows.h>
#include<stdbool.h>
#define N 9

void title()
{
    Sleep(2000);
    printf("\n\n\n\n");

    printf("       \t   88888888888888          88               88          88              88         88               88\n");
    Sleep(300);
    printf("       \t   88888888888888          88               88          88            88           88               88\n");
    Sleep(300);
    printf("       \t   88888888888888          88               88          88          88             88               88\n");
    Sleep(300);
    printf("       \t   88                      88               88          88        88               88               88\n");
    Sleep(300);
    printf("       \t   88                      88               88          88      88                 88               88\n");
    Sleep(300);
    printf("       \t   88                      88               88          88    88                   88               88\n");
    Sleep(300);
    printf("       \t   88                      88               88          88  88                     88               88\n");
    Sleep(300);
    printf("       \t   88888888888888          88               88          8888                       88               88\n");
    Sleep(300);
    printf("       \t   88888888888888    ***   88               88    ***   8888                 ***   88               88\n");
    Sleep(300);
    printf("       \t               88    ***   88               88    ***   88  88               ***   88               88\n");
    Sleep(300);
    printf("       \t               88          88               88          88    88                   88               88\n");
    Sleep(300);
    printf("       \t               88          88               88          88      88                 88               88\n");
    Sleep(300);
    printf("       \t               88          88               88          88        88               88               88\n");
    Sleep(300);
    printf("       \t               88          88               88          88          88             88               88\n");
    Sleep(300);
    printf("       \t   88888888888888          8888888888888888888          88            88           8888888888888888888\n");
    Sleep(300);
    printf("       \t   88888888888888          8888888888888888888          88              88         8888888888888888888\n");
    printf("\n\n\n\n");

    Sleep(3000);

    printf("\n\t\t\t\t\t\t     ");

    int i;
    for(i=1; i<20; i++)
    {

        Sleep(100);
        printf("#");
    }



    Sleep(900);

//    printf("In this game you will experience some fun you never experienced never before.\nBest of luck Note:Please follow the community guide lines\n\n\n\n\"\n");


}

main_menu()
{
    bool flag;
    flag = true;
    char sel;
    int i;

    while(flag){

    system("cls");

    printf("\n\t\t\t\t\t         =====================\n");
    printf("  \t\t\t\t\t         | Welcome to SUDOKU |\n");
    printf("  \t\t\t\t\t         =====================\n\n\n");

    //printf("In this game you will experience some fun you never experienced never before.\nBest of luck Note:Please follow the community guide lines\n\n\n\n\"\n");

    //main menu

    printf("\t\t\t\t\t\t       --------\n");
    printf("\t\t\t\t\t\t       | Easy |\n");
    printf("\t\t\t\t\t\t       --------\n");

    printf("\t\t\t\t\t\t      ----------\n");
    printf("\t\t\t\t\t\t      | Medium |\n");
    printf("\t\t\t\t\t\t      ----------\n");

    printf("\t\t\t\t\t\t       -------- \n");
    printf("\t\t\t\t\t\t       | Hard | \n");
    printf("\t\t\t\t\t\t       -------- \n");

    printf("\t\t\t\t\t\t      ----------\n");
    printf("\t\t\t\t\t\t      | Expert |\n");
    printf("\t\t\t\t\t\t      ----------\n");

    printf("\t\t\t\t\t\t      ----------\n");
    printf("\t\t\t\t\t\t      | Master |\n");
    printf("\t\t\t\t\t\t      ----------\n\n\n");

    printf("\t\t\t\t\t\t  ------------------\n");
    printf("\t\t\t\t\t\t  |  Instructions  | \n");
    printf("\t\t\t\t\t\t  ------------------\n");

    printf("\t\t\t\t\t\t     -----------\n");
    printf("\t\t\t\t\t\t     | Credits | \n");
    printf("\t\t\t\t\t\t     -----------\n");


    printf("For selecting use Alphabets A-G: ");
    scanf("%c",&sel);

    switch(sel)
    {
    case 'a':
    case 'A':

        system("cls");
        Sleep(1000);
        printf("loading Easy");
        Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");
        Sleep(1000);
        flag = false;
        break;

    case 'b':
    case 'B':

        system("cls");
        Sleep(1000);
        printf("loading Medium");
        Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");
        Sleep(1000);
        flag = false;
        break;

    case 'c':
    case 'C':

        system("cls");
        Sleep(1000);
        printf("loading Hard");
        Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");
        Sleep(1000);
        flag = false;
        break;

    case 'd':
    case 'D':

        system("cls");
        Sleep(1000);
        printf("loading Expert");
        Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");
        Sleep(1000);
        flag = false;
        break;

    case 'e':
    case 'E':

        system("cls");
        Sleep(1000);
        printf("loading Master");
        Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");
        Sleep(1000);
        flag = false;
        break;

    case 'f':
    case 'F':

        system("cls");
        Sleep(1000);
        printf("loading Instructions");
        Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");
        Sleep(1000);

        system("cls");
        printf("The rules for Sudoku are simple.\n\n");
        printf("A 9*9 square must be filled in with numbers from 1-9 with no repeated numbers \nin each line,horizontally or vertically.\n\n");
        printf("To challenge you more, there are 3*3 squares marked out in the grid, and each \nof these squares can't have any repeat numbers either.\n\n\n\n");
        printf("How to play\n\n");
        printf("under con/n");
        printf("under con/n");
        printf("under con/n");
        scanf("%d",&i);
        break;

    case 'g':
    case 'G':

        system("cls");
        Sleep(1000);
        printf("loading Credits");
        Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");
        Sleep(1000);
        scanf("%d",&i);
        break;

    case 'h':
    case 'H':
        system("cls");
        Sleep(1000);
        printf("loading Developer Options");
        Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");
        Sleep(1000);
        flag = false;
        break;

    default:
        system("cls");
        printf("\ninvalid input");
        Sleep(1000);
        break;
    }
    }
    return sel;

}

int grid(int lev[9][9],int check[N][N],int num)
{
    HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);
    int k,i,j;
    char c;

            SetConsoleTextAttribute(hc, 0x5);
            printf("          \t\t\t\t\t  0  1  2   3  4  5   6  7  8 \n"); //nav
            SetConsoleTextAttribute(hc, 0x7);

            for(i=0,c='A';i<9,c<='I';i++,c++){
                if(i % 3 == 0){
                    if(i == 0){
                        SetConsoleTextAttribute(hc, 0x6);
                        printf("          \t\t\t\t\t|=============================|\n");
                        SetConsoleTextAttribute(hc, 0x7);
                        Sleep(5);
                }
                    else
                        SetConsoleTextAttribute(hc, 0x6);
                        printf("          \t\t\t\t\t|-----------------------------|\n");
                        SetConsoleTextAttribute(hc, 0x7);
                        Sleep(5);
                }
                SetConsoleTextAttribute(hc, 0x5);
                printf("\t\t\t\t\t     %c%d ",c,i); //nav
                SetConsoleTextAttribute(hc, 0x7);
                for(j=1,k=0;j<5,k<9;j++,k++){
                    if(j == 1){
                        SetConsoleTextAttribute(hc, 0x6);
                        printf("|");
                        SetConsoleTextAttribute(hc, 0x7);
                        Sleep(5);
                    }
                    if(lev[i][k] == 0){
                            SetConsoleTextAttribute(hc, 0x4); // red
                            printf(" %d ",lev[i][k]);
                            SetConsoleTextAttribute(hc, 0x7);
                            Sleep(5);
                    }
                    else if(num == check[i][k]){
                            SetConsoleTextAttribute(hc, 0x3); // red
                            printf(" %d ",lev[i][k]);
                            SetConsoleTextAttribute(hc, 0x7);
                            Sleep(5);
                    }
                    else{
                        printf(" %d ",lev[i][k]);
                        Sleep(5);
                    }

                    if(j!=0 && j % 3 == 0){
                         SetConsoleTextAttribute(hc, 0x6);
                         printf("|");
                         SetConsoleTextAttribute(hc, 0x7);
                         Sleep(5);
                         }
                }
                printf("\n");
                if(i == 8){
                    SetConsoleTextAttribute(hc, 0x6);
                    printf("          \t\t\t\t\t|=============================|\n");
                    SetConsoleTextAttribute(hc, 0x7);
                    Sleep(5);
                }
            }

}
// validity function
int validity(int level[N][N],int check[N][N],int row,int col,int num/*,bool flag*/)
{

    HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);
    int i,j,a=1;
    if(row <= 8 && row >=0 && col <=8 && col >=0 && num <=9 && num >= 1){
          if(level[row][col] == 0){
            if(num!= check[row][col]){
                    SetConsoleTextAttribute(hc, 0x4); // red
                    printf("The number isn't a suitable option for this specific box. \n");
                    SetConsoleTextAttribute(hc, 0x7); // default
            }

            else{
                //SetConsoleTextAttribute(hc, 0x6);
                level[row][col] = num; // equal to level
                //SetConsoleTextAttribute(hc, 0x7);
                }
    }
    else{
        SetConsoleTextAttribute(hc, 0x4);
        printf("\ncell already filled\n");
        SetConsoleTextAttribute(hc, 0x7);

    }
    }
    else{
        SetConsoleTextAttribute(hc, 0x4);
        printf("slelected input should be in between 0-8 for rows and column and 1-9 for number\n");
        SetConsoleTextAttribute(hc, 0x7);}

            for(i=0;i<=8;i++){
                for(j=0;j<=8;j++){
                    if(level[i][j] == 0){
                        a=0;
                        break;
                    }

                }

            }

        if(a){
            printf("%d",grid(level,check,num));
            SetConsoleTextAttribute(hc, 0xA);
            printf("\n\nCongrats you solved the puzzel\n");
            SetConsoleTextAttribute(hc, 0x7);
            //flag = false;
            exit(0);
        }
return num;
}


main()
{


    HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);
    char sel;
    int x = 2;
    int row,col,num;
    bool flag;
    flag = true;
    int i,j,k,n;



int test[N][N] ={

//                  0 1 2 3 4 5 6 7 8
        /*     A0*/{0,9,6,5,4,7,3,1,2},
        /*     B1*/{3,5,7,8,2,1,6,4,9},
        /*     C2*/{2,4,1,6,3,9,7,8,5},
        /*     D3*/{7,2,9,4,1,8,5,3,6},
        /*     E4*/{5,1,8,3,9,0,4,2,7},
        /*     F5*/{6,3,4,7,5,2,1,9,8},
        /*     G6*/{9,6,0,1,7,3,8,5,4},
        /*     H7*/{1,7,5,9,8,4,0,6,3},
        /*     I8*/{4,0,3,2,6,5,9,7,1}};

int test_check[N][N] = {
            //      0 1 2 3 4 5 6 7 8
        /*    A0*/ {8,9,6,5,4,7,3,1,2},
        /*    B1*/ {3,5,7,8,2,1,6,4,9},
        /*    C2*/ {2,4,1,6,3,9,7,8,5},
        /*    D3*/ {7,2,9,4,1,8,5,3,6},
        /*    E4*/ {5,1,8,3,9,6,4,2,7},
        /*    F5*/ {6,3,4,7,5,2,1,9,8},
        /*    G6*/ {9,6,2,1,7,3,8,5,4},
        /*    H7*/ {1,7,5,9,8,4,2,6,3},
        /*    I8*/ {4,8,3,2,6,5,9,7,1}};

int easy[N][N] ={

//                  0 1 2 3 4 5 6 7 8
        /*     A0*/{0,9,6,5,4,7,3,1,2},
        /*     B1*/{3,5,7,8,2,1,6,4,9},
        /*     C2*/{2,4,1,6,3,9,7,8,5},
        /*     D3*/{7,2,9,4,1,8,5,3,6},
        /*     E4*/{5,1,8,3,9,0,4,2,7},
        /*     F5*/{6,3,4,7,5,2,1,9,8},
        /*     G6*/{9,6,0,1,7,3,8,5,4},
        /*     H7*/{1,7,5,9,8,4,0,6,3},
        /*     I8*/{4,0,3,2,6,5,9,7,1}};

int easy_check[N][N] = {
            //      0 1 2 3 4 5 6 7 8
        /*    A0*/ {8,9,6,5,4,7,3,1,2},
        /*    B1*/ {3,5,7,8,2,1,6,4,9},
        /*    C2*/ {2,4,1,6,3,9,7,8,5},
        /*    D3*/ {7,2,9,4,1,8,5,3,6},
        /*    E4*/ {5,1,8,3,9,6,4,2,7},
        /*    F5*/ {6,3,4,7,5,2,1,9,8},
        /*    G6*/ {9,6,2,1,7,3,8,5,4},
        /*    H7*/ {1,7,5,9,8,4,2,6,3},
        /*    I8*/ {4,8,3,2,6,5,9,7,1}};

int medium[N][N] ={

//                  0 1 2 3 4 5 6 7 8
        /*     A0*/{0,9,6,5,4,7,3,1,2},
        /*     B1*/{3,5,7,8,2,1,6,4,9},
        /*     C2*/{2,4,1,6,3,9,7,8,5},
        /*     D3*/{7,2,9,4,1,8,5,3,6},
        /*     E4*/{5,1,8,3,9,0,4,2,7},
        /*     F5*/{6,3,4,7,5,2,1,9,8},
        /*     G6*/{9,6,0,1,7,3,8,5,4},
        /*     H7*/{1,7,5,9,8,4,0,6,3},
        /*     I8*/{4,0,3,2,6,5,9,7,1}};

int medium_check[N][N] = {
            //      0 1 2 3 4 5 6 7 8
        /*    A0*/ {8,9,6,5,4,7,3,1,2},
        /*    B1*/ {3,5,7,8,2,1,6,4,9},
        /*    C2*/ {2,4,1,6,3,9,7,8,5},
        /*    D3*/ {7,2,9,4,1,8,5,3,6},
        /*    E4*/ {5,1,8,3,9,6,4,2,7},
        /*    F5*/ {6,3,4,7,5,2,1,9,8},
        /*    G6*/ {9,6,2,1,7,3,8,5,4},
        /*    H7*/ {1,7,5,9,8,4,2,6,3},
        /*    I8*/ {4,8,3,2,6,5,9,7,1}};

int hard[N][N] ={

//                  0 1 2 3 4 5 6 7 8
        /*     A0*/{0,9,6,5,4,7,3,1,2},
        /*     B1*/{3,5,7,8,2,1,6,4,9},
        /*     C2*/{2,4,1,6,3,9,7,8,5},
        /*     D3*/{7,2,9,4,1,8,5,3,6},
        /*     E4*/{5,1,8,3,9,0,4,2,7},
        /*     F5*/{6,3,4,7,5,2,1,9,8},
        /*     G6*/{9,6,0,1,7,3,8,5,4},
        /*     H7*/{1,7,5,9,8,4,0,6,3},
        /*     I8*/{4,0,3,2,6,5,9,7,1}};

int hard_check[N][N] = {
            //      0 1 2 3 4 5 6 7 8
        /*    A0*/ {8,9,6,5,4,7,3,1,2},
        /*    B1*/ {3,5,7,8,2,1,6,4,9},
        /*    C2*/ {2,4,1,6,3,9,7,8,5},
        /*    D3*/ {7,2,9,4,1,8,5,3,6},
        /*    E4*/ {5,1,8,3,9,6,4,2,7},
        /*    F5*/ {6,3,4,7,5,2,1,9,8},
        /*    G6*/ {9,6,2,1,7,3,8,5,4},
        /*    H7*/ {1,7,5,9,8,4,2,6,3},
        /*    I8*/ {4,8,3,2,6,5,9,7,1}};

int expert[N][N] ={

//                  0 1 2 3 4 5 6 7 8
        /*     A0*/{0,9,6,5,4,7,3,1,2},
        /*     B1*/{3,5,7,8,2,1,6,4,9},
        /*     C2*/{2,4,1,6,3,9,7,8,5},
        /*     D3*/{7,2,9,4,1,8,5,3,6},
        /*     E4*/{5,1,8,3,9,0,4,2,7},
        /*     F5*/{6,3,4,7,5,2,1,9,8},
        /*     G6*/{9,6,0,1,7,3,8,5,4},
        /*     H7*/{1,7,5,9,8,4,0,6,3},
        /*     I8*/{4,0,3,2,6,5,9,7,1}};

int expert_check[N][N] = {
            //      0 1 2 3 4 5 6 7 8
        /*    A0*/ {8,9,6,5,4,7,3,1,2},
        /*    B1*/ {3,5,7,8,2,1,6,4,9},
        /*    C2*/ {2,4,1,6,3,9,7,8,5},
        /*    D3*/ {7,2,9,4,1,8,5,3,6},
        /*    E4*/ {5,1,8,3,9,6,4,2,7},
        /*    F5*/ {6,3,4,7,5,2,1,9,8},
        /*    G6*/ {9,6,2,1,7,3,8,5,4},
        /*    H7*/ {1,7,5,9,8,4,2,6,3},
        /*    I8*/ {4,8,3,2,6,5,9,7,1}};

int master[N][N] ={

//                  0 1 2 3 4 5 6 7 8
        /*     A0*/{0,9,6,5,4,7,3,1,2},
        /*     B1*/{3,5,7,8,2,1,6,4,9},
        /*     C2*/{2,4,1,6,3,9,7,8,5},
        /*     D3*/{7,2,9,4,1,8,5,3,6},
        /*     E4*/{5,1,8,3,9,0,4,2,7},
        /*     F5*/{6,3,4,7,5,2,1,9,8},
        /*     G6*/{9,6,0,1,7,3,8,5,4},
        /*     H7*/{1,7,5,9,8,4,0,6,3},
        /*     I8*/{4,0,3,2,6,5,9,7,1}};

int master_check[N][N] = {
            //      0 1 2 3 4 5 6 7 8
        /*    A0*/ {8,9,6,5,4,7,3,1,2},
        /*    B1*/ {3,5,7,8,2,1,6,4,9},
        /*    C2*/ {2,4,1,6,3,9,7,8,5},
        /*    D3*/ {7,2,9,4,1,8,5,3,6},
        /*    E4*/ {5,1,8,3,9,6,4,2,7},
        /*    F5*/ {6,3,4,7,5,2,1,9,8},
        /*    G6*/ {9,6,2,1,7,3,8,5,4},
        /*    H7*/ {1,7,5,9,8,4,2,6,3},
        /*    I8*/ {4,8,3,2,6,5,9,7,1}};

    title();    //call

    sel = main_menu();  //call

    system("cls");

    printf("\nEnter the parameters\nInput for, \nRow: 0-8\nCol: 0-8\nNum: 1-9\n\n");
    Sleep(3000);

    while(flag)
    {
        if(sel=='A'|| sel == 'a'){
                if(x == 2){
                printf("loading grid");
                Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");
                Sleep(1000);
            }

             system("cls");

             if(x == 1){
                validity(easy,easy_check,row,col,num);
            }
            else{
             x = 1;
            }

             printf("\n\n\n\n\n\n");

             grid(easy,easy_check,num);
    }

        else if(sel == 'B' || sel == 'b')
        {
                if(x == 2){
                printf("loading grid");
                Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");
                Sleep(1000);
            }

             system("cls");

             if(x == 1){
                validity(easy,easy_check,row,col,num);
            }
            else{
             x = 1;
            }

             printf("\n\n\n\n\n\n");

             grid(medium,medium_check,num);
        }

        else if(sel == 'C' || sel == 'c')
        {
                if(x == 2){
                printf("loading grid");
                Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");
                Sleep(1000);
            }

             system("cls");

             if(x == 1){
                validity(easy,easy_check,row,col,num);
            }
            else{
             x = 1;
            }

             printf("\n\n\n\n\n\n");

             grid(hard,hard_check,num);
        }

        else if(sel == 'D' || sel == 'd')
        {
                if(x == 2){
                printf("loading grid");
                Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");
                Sleep(1000);
            }

             system("cls");

             if(x == 1){
                validity(easy,easy_check,row,col,num);
            }
            else{
             x = 1;
            }

             printf("\n\n\n\n\n\n");

             grid(expert,expert_check,num);
        }

        else if(sel == 'E' || sel == 'e')
        {
                if(x == 2){
                printf("loading grid");
                Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");
                Sleep(1000);
            }

             system("cls");

             if(x == 1){
                validity(easy,easy_check,row,col,num);
            }
            else{
             x = 1;
            }

             printf("\n\n\n\n\n\n");

             grid(master,master_check,num);
        }

        else if(sel == 'H' || sel == 'h')
        {
                if(x == 2){
                printf("loading grid");
                Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");Sleep(150);printf(".");
                Sleep(1000);
            }

             system("cls");

             if(x == 1){
                validity(easy,easy_check,row,col,num);
            }
            else{
             x = 1;
            }

             printf("\n\n\n\n\n\n");

             grid(test,test_check,num);
        }

        //input
        SetConsoleTextAttribute(hc, 0x6);
        printf("Row: ");
        scanf("%d",&row);

        printf("Col: ");
        scanf("%d",&col);

        printf("Num: ");
        scanf("%d",&num);
        SetConsoleTextAttribute(hc, 0x7);






    }

}
