#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
int main() {
    ifstream file("input.txt");
    vector<string>numbers;
    string x;
    while(file >> x){
        numbers.push_back(x);
    }
    file.close();
    int a=50;
    int cnt=0;
    for(int i =0;i<numbers.size();i++){
        if(numbers[i][0]=='L')a-=stoi(numbers[i].substr(1));
        else if(numbers[i][0]=='R')a+=stoi(numbers[i].substr(1));
        a = ((a % 100) + 100) % 100;
        if(a==0 )cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}   
