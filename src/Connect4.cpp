#include "../headers/Connect4.h"


Connect4::Connect4()
{
    initializeName();
    initializeBoard();
    display();
    play();

}
void Connect4::initializeName()
{
    cout<<"Player 1, please enter your name"<<endl<<endl;
    cin>>name1;
    cout<<endl<<name1<<", choose a letter for your piece"<<endl;
    cin>>p1;

    cout<<endl<<"Player 2, please enter your name"<<endl<<endl;
    cin>>name2;
    cout<<endl<<name2<<", choose a letter for your piece"<<endl;
    cin>>p2;
    cout<<endl;
    while(p2==p1)
    {
        cout<<"Choose a different letter"<<endl;
        cin>>p2;
    }
}

void Connect4::initializeBoard ()
{
    cout<<"Enter the height"<<endl;
    cin>>height;
    cout<<"Enter the width"<<endl;
    cin>>width;
    cout<<endl;
    Board.resize(height);

    for(int i=0; i<height; i++)
    {
         Board[i].resize(width);
    }

    for(int i=0 ; i<height ; i++)
    {
        for(int j=0; j<width ; j++)
        {
            Board[i][j]=0;
        }
    }
}


char Connect4::piece(int i, int j)
{
    char t;
    if(Board[i][j]==0)
    {
        t='.';
    }
    else if(Board[i][j]==1)
    {
        t=p1;
    }
    else if(Board[i][j]==2)
    {
        t=p2;
    }
    return t;
}

void Connect4::display()
{
    for(int i=0 ; i<height ; i++)
    {
        std::cout<<"        ";
        for(int j=0; j<width ; j++)
        {
            cout<<piece(i,j)<< ' ';
        }
        cout<<endl;
    }
    std::cout<<"        ";
    for (int i = 1 ; i <=width ; ++i)
    {
        cout<< '_' << ' ';
    }
    cout<<endl;
    std::cout<<"        ";
    for (int i = 1 ; i <=width ; ++i)
    {
        cout<< i  <<' ';
    }
    cout<<endl;
}

int Connect4::dropPiece(int j, int b)
{
      int i=0;
      while(i<height &&Board[i][j]==0 )
      {
        i++;
      }
      Board[i-1][j]=b+1;

      return i-1;

}

bool Connect4::boardIsFull()
{
    bool t = true;

    for(int i=0; i<height ; i++)
    {
        for(int j=0 ; j<width ; j++)
        {
            if(Board[i][j]==0)
            {
                t = false;
            }
        }
    }

    return t;
}

bool Connect4::vertical(int i,int j)
{
   int n=0;
   int line=i;
   while(line<height-1 && Board[i][j]==Board[line+1][j])
   {
       line++;
       n++;
   }
   return n>=3;
}

bool Connect4::horizontal(int i,int j)
{
    int column=j;
    int n=0;
    while(column<width-1 && Board[i][j]==Board[i][column+1])
    {
       column++;
       n++;
    }

    column=j;
    while(column>0 && Board[i][j]==Board[i][column-1])
    {
       column--;
       n++;
    }
    return n>=3;
}


bool Connect4::diagonal1(int i,int j)
{
	int n=0;

	int line = i;
	int column = j;
	while(line >0  && column >=0 &&  line < height && column < width-1  && Board[line][column] == Board[line-1][column+1])
	{
		n++;
		line--;
		column++;
	}

	line = i;
	column = j;
	while(line >=0  &&column >0 &&  line < height-1 && column < width  && Board[line][column] == Board[line+1][column-1])
	{
		n++;
		line++;
		column--;
	}

	return n>=3;
}

bool Connect4::diagonal2(int i,int j)
{
	int n=0;

	int line = i;
	int column = j;
	while(line >0  && column >0  &&  line < height && column < width  && Board[line][column] == Board[line-1][column-1])
	{
		n++;
		line--;
		column--;
	}

	line = i;
	column = j;
	while(line >=0  && column >=0 &&  line < height-1 && column < width-1  && Board[line][column] == Board[line+1][column+1])
	{
		n++;
		line++;
		column++;
	}

	return n>=3;
}


void Connect4::play()
{
    int line,column;
    int player=2,a;
    do{
        player=player%2;
        if(player==0)
        {
            cout<<name1<<", where do you want to place your piece?"<< endl;
            cin>>a;
        }
        else if(player==1)
        {
            cout<<name2<<", where do you want to place your piece?"<< endl;
            cin>>a;
        }

        column=a-1;
        line = dropPiece(column,player);
        display();
        cout<<endl;
        player++;
    }while(!boardIsFull() && !vertical(line,column) && !horizontal(line,column) && !diagonal1(line,column) && !diagonal2(line,column));


    if(boardIsFull() &&  !vertical(line,column) && !horizontal(line,column) && !diagonal1(line,column) && !diagonal2(line,column))
    {
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<"                      The board is full                               "<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
    }
    else if((player-1)==0)
    {
      cout<<"----------------------------------------------------------------------"<<endl;
      cout<<"                           Player "<<name1<<" wins                    "<<endl;
      cout<<"----------------------------------------------------------------------"<<endl;
    }
    else if((player-1)==1)
    {
      cout<<"----------------------------------------------------------------------"<<endl;
      cout<<"                           Player "<<name2<<" wins                    "<<endl;
      cout<<"----------------------------------------------------------------------"<<endl;
    }
}
