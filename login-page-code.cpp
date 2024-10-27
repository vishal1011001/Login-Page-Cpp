//Login Page
//By VISHAL JAKHAR

#include <iostream>

using namespace std;

string setUserName(){
    string uName = "";
    cout << "set a username for your id: ";
    getline(cin, uName);
    return uName;
}

string setPassWord(){
    string pass = "";
    cout << "Now, Set a password: ";
    getline(cin, pass);
    return pass;
}

void login(string userName, string passKey){
    string uName = "";
    string pass = "";

    while(true){
        cout << "enter your username: ";
        getline(cin, uName);
        if(uName == userName){
            while(true){
                cout << "enter your password: ";
                getline(cin, pass);
                if(pass == passKey){
                    cout << "Welcome " << userName << endl
                        << "Access Granted." << endl;
                    break;
                }
                else {
                    cout << "Wrong password. Try again!" << endl;
                }
            }
            break;
        }
        else{
            cout << "Invalid username." << endl;
        }
    }
}

int main(){
    cout << "LOGIN PAGE" << endl;

    string userName = setUserName();
    string passWord = setPassWord();

    login(userName, passWord);


    return 0;
}