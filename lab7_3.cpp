#include<iostream>

using namespace std;

int main(){
    int age,height,property;
    cout << "Input age : ";
    cin >> age;
    if (age <=20){
        cout << "Input your height : ";
        cin >> height ;
        if (height <160){
            cout << "status = UNFRIEND";
        }else if(height < 175){
            cout << "status = FRIEND";
        }else {
            cout << "Input your property : ";
            cin >> property;
            if (property < 69000000){
                cout << "status = ONE-NIGHT-STAND";
            }else {
                cout << "status = MARRIED";
            }

        }


    }else if(age>20 and age <30 ){
        cout << "Input your property : ";
        cin >> property;
        if(property < 10000000){
            cout <<"status = UNFRIEND";

        }else{
            cout << "status = BESTFRIEND";
        }

    }else {
        cout << "status = UNFRIEND";
    }


}
