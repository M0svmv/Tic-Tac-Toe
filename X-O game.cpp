#include <iostream>
#include <cctype>
using namespace std;
void board(char b[]){
    cout<< "###################"<<"\n";
    cout<< "#     #     #     #"<<"\n";
    cout<< "#  "<<b[0] << "  #  "<< b[1] <<"  #  "<< b[2] <<"  #"<<"\n";
    cout<< "#     #     #     #"<<"\n";
    cout<< "###################"<<"\n";
    cout<< "#     #     #     #"<<"\n";
    cout<< "#  "<<b[3] << "  #  "<<b[4]<<"  #  "<<b[5]<<"  #"<<"\n";
    cout<< "#     #     #     #"<<"\n";
    cout<< "###################"<<"\n";
    cout<< "#     #     #     #"<<"\n";
    cout<< "#  "<< b[6]<<"  #  "<<b[7]<<"  #  "<<b[8]<<"  #"<<"\n";
    cout<< "#     #     #     #"<<"\n";
    cout<< "###################"<<"\n";        
}

int main(){
    int scoreX=0;
    int scoreO=0;
    char again = 'y';
    while(again=='y'){
    int X[5],O[5];
    int Xr1=0,Xr2=0,Xr3=0,Xc1=0,Xc2=0,Xc3=0,Xd1=0,Xd2=0;
    int Or1=0,Or2=0,Or3=0,Oc1=0,Oc2=0,Oc3=0,Od1=0,Od2=0;
    char b[]={'1','2','3','4','5','6','7','8','9'};
    for(int i=0;i<5;i++){
        
        board(b);
        cout<< "X player turn : ";
        cin>>X[i];
        b[X[i]-1]='X';
        if(X[i]==1 ||  X[i]==2|| X[i]==3) Xr1+=1;
        if(X[i]==4 ||  X[i]==5|| X[i]==6) Xr2+=1;
        if(X[i]==7 ||  X[i]==8|| X[i]==9) Xr3+=1;
        if(X[i]==1 ||  X[i]==4|| X[i]==7) Xc1+=1;
        if(X[i]==2 ||  X[i]==5|| X[i]==8) Xc2+=1;
        if(X[i]==3 ||  X[i]==6|| X[i]==9) Xc3+=1;
        if(X[i]==1 ||  X[i]==5|| X[i]==9) Xd1+=1;
        if(X[i]==3 ||  X[i]==5|| X[i]==7) Xd2+=1;
        if(Xr1==3||Xr2==3||Xr3==3||Xc1==3||Xc2==3||Xc3==3||Xd1==3||Xd2==3){
            board(b);
            cout<<" X wins !!";
            scoreX+=1;
            break;}
        if(i==4){
            board(b);
            cout<<"draw"<<"\n";
            break;
        }
        board(b);
        cout<< "O player turn : ";
        cin>>O[i];
        b[O[i]-1]='O';
        if(O[i]==1 ||  O[i]==2|| O[i]==3) Or1+=1;
        if(O[i]==4 ||  O[i]==5|| O[i]==6) Or2+=1;
        if(O[i]==7 ||  O[i]==8|| O[i]==9) Or3+=1;
        if(O[i]==1 ||  O[i]==4|| O[i]==7) Oc1+=1;
        if(O[i]==2 ||  O[i]==5|| O[i]==8) Oc2+=1;
        if(O[i]==3 ||  O[i]==6|| O[i]==9) Oc3+=1;
        if(O[i]==1 ||  O[i]==5|| O[i]==9) Od1+=1;
        if(O[i]==3 ||  O[i]==5|| O[i]==7) Od2+=1;
        if(Or1==3||Or2==3||Or3==3||Oc1==3||Oc2==3||Oc3==3||Od1==3||Od2==3){
            board(b);
            cout<<" O wins !!";
            scoreO+=1;
            break;}
    }
    cout<<"\n"<<"Score X : "<<scoreX<<"\n"<<"Score O : "<<scoreO;
    cout<<"\nagain(y/n)?";
    cin>>again;
    again = tolower(again);
    if(again=='y'){
    int X[5],O[5];
    int Xr1=0,Xr2=0,Xr3=0,Xc1=0,Xc2=0,Xc3=0,Xd1=0,Xd2=0;
    int Or1=0,Or2=0,Or3=0,Oc1=0,Oc2=0,Oc3=0,Od1=0,Od2=0;
    char b[]={'1','2','3','4','5','6','7','8','9'};
    for(int i=0;i<=5;i++){
        board(b);
        cout<< "O player turn : ";
        cin>>O[i];
        b[O[i]-1]='O';
        if(O[i]==1 ||  O[i]==2|| O[i]==3) Or1+=1;
        if(O[i]==4 ||  O[i]==5|| O[i]==6) Or2+=1;
        if(O[i]==7 ||  O[i]==8|| O[i]==9) Or3+=1;
        if(O[i]==1 ||  O[i]==4|| O[i]==7) Oc1+=1;
        if(O[i]==2 ||  O[i]==5|| O[i]==8) Oc2+=1;
        if(O[i]==3 ||  O[i]==6|| O[i]==9) Oc3+=1;
        if(O[i]==1 ||  O[i]==5|| O[i]==9) Od1+=1;
        if(O[i]==3 ||  O[i]==5|| O[i]==7) Od2+=1;
        if(Or1==3||Or2==3||Or3==3||Oc1==3||Oc2==3||Oc3==3||Od1==3||Od2==3){
            board(b);
            cout<<" O wins !!";
            scoreO+=1;
            break;}
            if(i==4){
                board(b);
                cout<<"draw"<<"\n";
            break;
        }
        board(b);
        cout<< "X player turn : ";
        cin>>X[i];
        b[X[i]-1]='X';
        if(X[i]==1 ||  X[i]==2|| X[i]==3) Xr1+=1;
        if(X[i]==4 ||  X[i]==5|| X[i]==6) Xr2+=1;
        if(X[i]==7 ||  X[i]==8|| X[i]==9) Xr3+=1;
        if(X[i]==1 ||  X[i]==4|| X[i]==7) Xc1+=1;
        if(X[i]==2 ||  X[i]==5|| X[i]==8) Xc2+=1;
        if(X[i]==3 ||  X[i]==6|| X[i]==9) Xc3+=1;
        if(X[i]==1 ||  X[i]==5|| X[i]==9) Xd1+=1;
        if(X[i]==3 ||  X[i]==5|| X[i]==7) Xd2+=1;
        if(Xr1==3||Xr2==3||Xr3==3||Xc1==3||Xc2==3||Xc3==3||Xd1==3||Xd2==3){
            board(b);
            cout<<" X wins !!";
            scoreX+=1;
            break;}

        }
        cout<<"\n"<<"Score X : "<<scoreX<<"\n"<<"Score O : "<<scoreO;
        cout<<"\nagain(y/n)?";
    cin>>again;
    again = tolower(again);
    }}

    return 0;
}