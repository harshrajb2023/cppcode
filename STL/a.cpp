//define and output

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    map<pair<string,string>,vector<int>> mpv;  // key = (first name, last name), value = list of ints
    set<pair<int,int>> sp;                     // (unused here)
    int n;
    cin >> n;  // number of persons
    
    for(int i = 0; i < n; i++){
        string fn, ln;
        int ct;
        cin >> fn >> ln >> ct;  // read first name, last name, and count of numbers
        
        for(int j = 0; j < ct; j++){
            int x;
            cin >> x;
            mpv[{fn, ln}].push_back(x);  // store numbers in vector for that (fn, ln)
        }
    }

    // Print stored data
    for(auto value : mpv){
        auto &full_name = value.first;
        auto &list = value.second;
        for(auto element : list){
            cout << element << " ";
        }
        cout << endl;
    }
}

INPUT
2
Harsh Raj 3 10 20 30
Amit Singh 2 5 15



OUTPUT
5 15 
10 20 30 


#2
     //change  Line number 26 to 34
    // Print stored data
    for(auto value : mpv){
        auto &full_name = value.first;
        auto &list = value.second;
        cout << full_name.first << " " << full_name.second << ": ";
        for(auto element : list){
            cout << element << " ";
        }
        cout << endl;
    }

OUTPUT
Amit Singh: 5 15 
Harsh Raj: 10 20 30 
