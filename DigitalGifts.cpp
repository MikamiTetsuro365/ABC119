#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <string>

using namespace std;
//int moreGcd

int main(){
    int N = 0;
    cin >> N;
    string x;
    string u;
    double total = 0;
    for(int i = 0; i < N; i++){
        cin >> x;
        cin >> u;
        
        if(u == "JPY"){
            total += stod(x.c_str());
        }else{
            total += stod(x.c_str()) * 380000;
        }


    }

    cout << total << endl;

}