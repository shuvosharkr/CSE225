#include<iostream>
#include<queue>
using namespace std;
int grid[8][8];
bool visited[8][8] = {false};
int source[8][8];
int level[8][8] = {0};
int tim = 0;
string name[8][8];
struct node
{
    int x;
    int y;
};
int kx[] = {1,1,2,2,-1,-1,-2,-2};
int ky[] = {2,-2,1,-1,2,-2,1,-1};

void input(){
         for(int i=0;i<13;i++){
           int x,y;
           int v;
           cin>>x>>y>>v;
           grid[x][y]=v;
         }
         for(int i=0;i<14;i++){
           int x,y;
           cin>>x>>y;
           grid[x][y]=9;
         }
}

void Name(){

     for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
               if(grid[i][j]==1)
                {
                    name[i][j]="King";
                }
                else if(grid[i][j]==2){
                    name[i][j]="Queen";
                }
                else if(grid[i][j]==31){
                    name[i][j]="Rookie1";
                }
                else if(grid[i][j]==32){
                    name[i][j]="Rookie2";
                }
                else if(grid[i][j]==41){
                    name[i][j]="Knight1";
                }
                else if(grid[i][j]==42){
                    name[i][j]="Knight2";
                }
                else if(grid[i][j]==51){
                    name[i][j]="Bishop1";
                }
                else if(grid[i][j]==52){
                    name[i][j]="Bishop2";
                }
                else if(grid[i][j]==61){
                    name[i][j]="Pawn1";
                }
                else if(grid[i][j]==62){
                   name[i][j]="Pawn2";
                }
                else if(grid[i][j]==63){
                    name[i][j]="Pawn3";
                }
                else if(grid[i][j]==64){
                    name[i][j]="Pawn4";
                }
                else if(grid[i][j]==65){
                    name[i][j]="Pawn5";
                }
                else if(grid[i][j]==66){
                    name[i][j]="Pawn6";
                }
                else if(grid[i][j]==67){
                    name[i][j]="Pawn7";
                }
                else if(grid[i][j]==68){
                    name[i][j]="Pawn8";
                }
            }
     }
}

bool Valid(int x, int y)
{
   if(x>=0 && y>=0 && x<8 && y<8 && !visited[x][y] )
    {
        return true;
    }
    else
    {
        return false;
    }
}
void DFS(int source_x, int source_y)
{
    visited[source_x][source_y] = true;
    source[source_x][source_y] = tim;
    tim++;
    for(int i = 0; i < 8; i++)
    {
        int next_x = source_x+kx[i];
        int next_y = source_y+ky[i];
        if(Valid(next_x,next_y)){
            DFS(next_x,next_y);
        }
    }
}
void BFS(int source_x,int source_y)
{
    queue<node> q;
    visited[source_x][source_y] = true;
    node n;
    n.x = source_x;
    n.y = source_y;
    q.push(n);
    while (!q.empty())
    {
        int xx = q.front().x;
        int yy = q.front().y;
        q.pop();
        for(int i= 0 ; i<8;i++)
        {
            int next_x = xx+kx[i];
            int next_y = yy+ky[i];
            if(Valid(next_x,next_y))
            {
                visited[next_x][next_y] = true;
                node n2;
                n2.x = next_x;
                n2.y = next_y;
                q.push(n2);
                level[next_x][next_y] = level[xx][yy] + 1;
            }
        }
    }


}
int main()
{
    input();
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    BFS(5,5);
    /*for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cout<<source[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;*/
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cout<<level[i][j]<<" ";
        }
        cout<<endl;
    }
    Name();
    for(int i= 0 ; i <8; i++)
    {
        for(int j=0;j<8;j++)
        {
                if(grid[i][j]==1){
                    cout<<name[i][j]<<" = "<<level[i][j]<<endl;
                }
                else if(grid[i][j]==2){
                    cout<<name[i][j]<<" = "<<level[i][j]<<endl;
                }
                else if(grid[i][j]==31){
                    cout<<name[i][j]<<" = "<<level[i][j]<<endl;
                }
                else if(grid[i][j]==32){
                    cout<<name[i][j]<<" = "<<level[i][j]<<endl;
                }
                else if(grid[i][j]==41){
                    cout<<name[i][j]<<" = "<<level[i][j]<<endl;
                }
                else if(grid[i][j]==42){
                    cout<<name[i][j]<<" = "<<level[i][j]<<endl;
                }
                else if(grid[i][j]==31){
                    cout<<name[i][j]<<" = "<<level[i][j]<<endl;
                }
                else if(grid[i][j]==32){
                    cout<<name[i][j]<<" = "<<level[i][j]<<endl;
                }
                else if(grid[i][j]==41){
                    cout<<name[i][j]<<" = "<<level[i][j]<<endl;
                }
                else if(grid[i][j]==42){
                    cout<<name[i][j]<<" = "<<level[i][j]<<endl;
                }
                else if(grid[i][j]==51){
                    cout<<name[i][j]<<" = "<<level[i][j]<<endl;
                }
                else if(grid[i][j]==52){
                    cout<<name[i][j]<<" = "<<level[i][j]<<endl;
                }
                else if(grid[i][j]==61){
                    cout<<name[i][j]<<" = "<<level[i][j]<<endl;
                }
                else if(grid[i][j]==62){
                    cout<<name[i][j]<<" = "<<level[i][j]<<endl;
                }
                else if(grid[i][j]==63){
                    cout<<name[i][j]<<" = "<<level[i][j]<<endl;
                }
                else if(grid[i][j]==64){
                    cout<<name[i][j]<<" = "<<level[i][j]<<endl;
                }
                else if(grid[i][j]==65){
                    cout<<name[i][j]<<" = "<<level[i][j]<<endl;
                }
                else if(grid[i][j]==66){
                    cout<<name[i][j]<<" = "<<level[i][j]<<endl;
                }
                else if(grid[i][j]==67){
                    cout<<name[i][j]<<" = "<<level[i][j]<<endl;
                }
                else if(grid[i][j]==68){
                    cout<<name[i][j]<<" = "<<level[i][j]<<endl;
                }

        }
    }



    cout<<endl;
    return 0;
}

