#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string pallindrome="", backwards="";
    cin>>pallindrome;
    backwards=pallindrome;
    reverse(backwards.begin(), backwards.end());
    cout<<(pallindrome+=backwards)<<endl;

    return 0;
}
