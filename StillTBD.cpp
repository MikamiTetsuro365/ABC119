#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <string>

using namespace std;
//int moreGcd

int main(){

    string s;
    cin >> s;
    //s1 = "!" + s1;
    //s2 = "@" + s2;
 
    //vector<vector<int> > T;
    //T = vector<vector<int> >(s1.length() + 1, vector<int>(s2.length() + 1,0));

    if(atoi(s.substr(0,4).c_str()) <= 2019){
        if(atoi(s.substr(5,2).c_str()) <= 4){
            if(atoi(s.substr(8,2).c_str()) <= 30){
                cout << "Heisei" << endl;
                return 0;
            }
        }
        cout << "TBD" << endl;
    }else{
        cout << "TBD" << endl;
    }

}