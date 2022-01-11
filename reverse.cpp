#include<iostream>
using namespace std;

void swap(char &a, char &b){
    char temp = a;
    a=b;
    b= temp;
}

int main(){
    char name[20] = {'\0'};
    cin>>name;

    int length=0;
    char reversed[20] = {'\0'};

    for(int i=0; name[i]!='\0'; i++){
        length++;
    }
    for(int i=0; i<(length-1)/2; i++){
        swap(name[i], name[length-i-1]);
    }

    cout<<name;
    return 0;
}