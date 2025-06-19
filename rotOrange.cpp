#include <bits/stdc++.h>
using namespace std;

struct Cell
{
    int x, y;
};


int main(){
    queue<Cell> Q;
    int dir[4][2] = {{-1,0}, {1,0}, {0,-1}, {0,1}};
    int x, y, tuoi=0, hong=0; 
    cout<<"Nhap so hang va so cot cua ma tran: ";
    cin>>x>>y;
    int matrix[x][y];
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cin>>matrix[i][j];
        }
    }
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            if(matrix[i][j] == 2){
                Q.push({i,j});
                hong++;
            }
            else if(matrix[i][j] == 1){
                tuoi++;
            }
        }
    }
    while(!Q.empty()){
        int ans = 0;
        int size = Q.size();
        bool infected = false;
        for(int i = 0; i < size; i++){
            Cell curr = Q.front(); Q.pop();
            for(int d = 0; d<4; d++){
                int newx = curr.x + dir[d][0];
                int newy = curr.y + dir[d][1];
                if(matrix[newx][newy] == 0){
                    matrix[newx][newy]++;
                    tuoi++;
                }
                else if(matrix[newx][newy] == 1){
                    matrix[newx][newy]++;
                    tuoi--;
                    hong++;
                }
            }
        }
        ans++;
        if(hong == x*y){
            cout<<ans;
            break;
        }
    }
    if(Q.empty()) cout<<-1;
}