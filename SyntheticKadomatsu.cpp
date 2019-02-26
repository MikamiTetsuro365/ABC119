#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <string>
#include <cmath>

using namespace std;
vector<int > l;
int N = 0;
int MIN = 10000000;
int A = 0;
int B = 0;
int C = 0;

void calc(vector<int > cost){

    //各竹
    vector<int > each(3,0);
    //竹は行き渡りましたか？フラグ
    vector<bool > flag(3,0);
    //合成魔法をぶっ放した回数
    vector<int > marge(3,-1);
    
    for(int i = 0; i < N; i++){
        if(cost[i] < 3){
            each[cost[i]] += l[i];
            marge[cost[i]]++;
            flag[cost[i]] = 1;
        }
    }

    //みんな竹は持ったな？
    int t_MIN = 0;
    if(flag[0] && flag[1] && flag[2]){
        t_MIN += marge[0] * 10 + marge[1] * 10 + marge[2] * 10;
        t_MIN += abs(each[0] - A) + abs(each[1] - B) + abs(each[2] - C);
        
        if(t_MIN < MIN){
            MIN = t_MIN;
        }
    }
}

//全パターン探査
void dfs(int n, vector<int > cost){

    if(n == N){
        calc(cost);
    }else{
        
        for(int i = 0; i < 4; i++){
            cost[n] = i;
            dfs(n + 1, cost);
        }
    }

}

int main(){
    
    cin >> N;

    cin >> A >> B >> C;

    int b = 0;
    for(int i = 0; i < N; i++){
        cin >> b;
        l.push_back(b);
    }

    vector<int > cost(N, 0);
    
    dfs(0, cost);

    cout << MIN << endl;
}