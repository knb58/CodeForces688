#include <iostream>

using namespace std;

int main(){
    int verticies=0, edges=0, u=0, v=0, acounter=0, bcounter=0;
    cin>>verticies>>edges;
    char colors[verticies+1];

    for(int i=1; i<verticies+1; i++){
        colors[i]='z';
    }

    cin>> u >>v;
    colors[u]='a'; acounter++;
    colors[v]='b'; bcounter++;


    for (int i=0; i<edges-1; i++){
        cin>> u >> v;
        if (colors[u]=='a' && colors[v] != 'a'){
            colors[v]='b';
            bcounter++;
        }
        else if (colors[u]=='b' && colors[v] != 'b'){
            colors[v]='a';
            acounter++;
        }
        else{
            cout<<-1<<endl;
            return 0;
        }

    }

    cout<<acounter<<endl;
    for(int i=1; i<verticies+1; i++){
        if(colors[i]=='a'){
            cout<<i;
            acounter--;
            if (acounter>0){
                cout<<" ";
            }
        }

    }
    cout<<endl<<bcounter<<endl;
    for(int i=1; i<verticies+1; i++){
        if(colors[i]=='b'){
            cout<<i;
            bcounter--;
            if(bcounter >0){
                cout<<" ";
            }
        }
    }
    return 0;

}
