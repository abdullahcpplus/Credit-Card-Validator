#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;
int digit(int number){
return number%10 +(number/10 % 10);
}
int sumeven(string card){
int sum= 0;

for(int i =card.size()-2; i>=0; i= i-2 ){
sum+=digit( (card[i] - '0') * 2);
} 
return sum;
}
int sumodd(string number){
    int sum=0;
    for(int i= number.size()-1; i>=0 ; i= i-2){
        sum+= number[i]-'0';
    }
    return sum;
}
int main(){
string card;
int result;
cout<<"Enter your card number: ";
cin>> card;
result= sumeven(card)+ sumodd(card);
if(result%10 == 0){

    cout<<"That number is valid"<< endl;
     Sleep(1000);
}
else{
    cout<<"That number is not valid"<< endl;
    Sleep(1000);
}
    return 0;
}