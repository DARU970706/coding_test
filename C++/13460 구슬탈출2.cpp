#include <stdio.h>

int res;

int move(int n, char temp[10][10]){

    int flag = 0;
    char board[10][10]={};

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++)
        {
            board[i][j]=temp[i][j];
        }
    }


    if(n>10)
    {
        return 0;
    }
    else
    {
        //left
        for(int i=0;i<10;i++)
        {

        }
        //right

        //up

        //down
    }

}

int main() {

    int n,m;
    char board[10][10]={};

    res = 0;

    scanf("%d %d",&n,&m);


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%c", &board[i][j]);
        }
    }

    move(0, board);

    return 0;
}
