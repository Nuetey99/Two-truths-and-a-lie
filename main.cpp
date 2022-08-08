#include <iostream>
using namespace std;
int main(){
    
    int count;
    string name;
    string animal;
    int num;
    string element;
    int point =0;
    
    cout<< "Enter your name" << endl;
    getline (cin,name);
    cout << "Hello, " << name << ":),"<< endl<< "Are you ready?" <<endl<< "Enter 1 to continue or 2 to cancel"<< endl;
    cin>> count;
    if ( count == 1){
        cout << "Question 1: What is the roman numeral V in decimal?"<< endl;
        cin >> num;
        if (num == 5 ){
            point++;
        }else{
            point = point;
        }
        
        cout << "Question 2: The plural of sheep is ?"<< endl;
        cin >> animal;
        if (animal == "sheep" ){
            point++;
        }else{
            point = point;
        }
        cout << "Question 3: What is the element with periodic number 3?"<< endl;
        cin >> element;
        if (element == "helium" ){
            point++;
        }else{
            point = point;
             }
        cout << "Your total point is " << point<<endl;
    } else {
        cout << "Program canceled"<< endl;
    }
    return 0;
}

