#include <iostream>

using namespace std;

int main(){
    int opponents=0, days=0, win=0, consec=0;
    string opp="", lose="";

    cin>>opponents>>days;
    for (int i=0; i <opponents; i++){
        lose+="1";
    }
    for (int i=0; i<days; i++){
        cin>>opp;
        if (opp<lose){
                win++;
        }
        else{
            if (win>consec){
                    consec=win;
            }
            win=0;
        }
    }
    cout<<(win>consec ? win : consec);
    return 0;
}
