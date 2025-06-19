#include <bits/stdc++.h>
using namespace std;

void diversity(string str, int k){
    set<char> se;
    for(int i = 0; i<str.length(); i++){
        se.insert(str[i]);
    }
    //k: so chu cai khac biet, str.length < k -> ko the thay doi str de tao ra str moi co k chu cai khac nhau
    if(str.length() < k){
        cout<<"impossible";
    }
    else{
        int ans = k - se.size();
        cout<<ans;
    }
}

int main(){
    string str = "yandex";
    int k = 6;
    diversity(str, k);
}