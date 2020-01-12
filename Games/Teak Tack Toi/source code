#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
char square[10] = {'0','1', '2', '3', '4', '5', '6', '7', '8', '9' };
int checkwin();
void board();
void assain();
int main()
{
    repeat:
    assain();
    int player = 1, i, choice;
    char mark;
    do
    {
        board();
        player = (player % 2) ? 1 : 2; ///here if the number is odd then 1 will be assigned to player ,else the vice versa.
        printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);
        mark = (player == 1) ? 'X' : 'O';/// if this is not given then the digits in the box will just be vanished.
        if (choice == 1 && square[1] =='1'  )
            square[1] = mark;
        else if (choice == 2 && square[2] =='2' )
            square[2] = mark;
        else if (choice == 3 && square[3] =='3' )
            square[3] = mark;
        else if (choice == 4 && square[4] =='4' )
            square[4] = mark;
        else if (choice == 5 && square[5] =='5' )
            square[5] = mark;
        else if (choice == 6 && square[6] =='6' )
            square[6] = mark;
        else if (choice == 7 && square[7] =='7' )
            square[7] = mark;
        else if (choice == 8 && square[8] =='8' )
            square[8] = mark;
        else if (choice == 9 && square[9] =='9' )
            square[9] = mark;
        else
        {
            printf("Invalid move ");
            player--; /// what does this player-- means.????????????????
        }
        i = checkwin();
        player++;
    }while (i ==  - 1);
    board();
    if (i == 1){
        printf("==>\aPlayer %d win ", --player);
        cout<<"\n\n";
        cout<<"If you want to play again pree Y Or if you dont want to play press any key :";
        char it;
        cin>>it;
        if (it=='y'||it =='Y')
        goto repeat;
        else
            return 0;

    }
    else{
        printf("==>\aGame draw");
        cout<<"\n\n";
        cout<<"If you want to play again pree Y Or if you dont want to play press any key :";
        char it;
        cin>>it;
        if (it=='y'||it =='Y')
        goto repeat;
        else
            return 0;
    }
    return 0;
}

/// Assining value.........

void assain()
{
    square[1]='1';
    square[2]='2';
    square[3]='3';
    square[4]='4';
    square[5]='5';
    square[6]='6';
    square[7]='7';
    square[8]='8';
    square[9]='9';
}

///  checking the logic......

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7]
        != '7' && square[8] != '8' && square[9] != '9')
        return 0;
    else
        return  - 1;
}

///  Printing board........

void board()
{
    system ("CLS");
     cout<<"                           "<< "|--------------------------------------|"<<endl;
     cout<<"                           "<< "|          This Game made by           |"<<endl;
     cout<<"                           "<< "|                                      |"<<endl;
     cout<<"                           "<< "|          Mahibul Hassan Emon         |"<<endl;
     cout<<"                           "<< "|                                      |"<<endl;
     cout<<"                           "<< "|          CSE in Dhaka City College   |"<<endl;
     cout<<"                           "<< "|                                      |"<<endl;
     cout<<"                           "<< "|          Under National University   |"<<endl;
     cout<<"                           "<< "|    ** New Prograamer.Try to dobest.  |"<<endl;
     cout<<"                           "<< "|--------------------------------------|"<<endl;
     cout<<"\n";
     cout<<   "                         1st player is ( X ) and  2nd player is ( O ) "<<endl;
     cout<<"\n\n";
     cout<<"                                  |     |          "<<endl;
     cout<<"                               "<<square[1]<<"  |  "<<square[2]<<"  |  "<<square[3]<<endl;
     cout<<"                              ____|_____|____          "<<endl;
     cout<<"                                  |     |          "<<endl;
     cout<<"                               "<<square[4]<<"  |  "<<square[5]<<"  |  "<<square[6]<<endl;
     cout<<"                              ____|_____|____          "<<endl;
     cout<<"                                  |     |          "<<endl;
     cout<<"                               "<<square[7]<<"  |  "<<square[8]<<"  |  "<<square[9]<<endl;
     cout<<"                                  |     |          "<<endl;
     cout <<"\n\n"<<endl;

}
