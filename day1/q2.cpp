#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int floor(int a,int b);
int main() {
    ifstream file("input.txt");
    vector<string> numbers;
    string x;
    while(file >> x){
        numbers.push_back(x);
    }
    file.close();
    int a = 50; 
    int cnt = 0;
    for(int i = 0; i < numbers.size(); i++){
        int d = stoi(numbers[i].substr(1));
        if(numbers[i][0] == 'L') {
            a-=d;
            cnt+= floor(a+d,100) - floor(a,100);
        } else {
            a+=d;
            cnt += floor(a-d,100) - floor(a,100);
        }
    }
    cout << cnt;
    return 0;
}

int floor(int a,int b) {
    int res = a / b;
    if ((a % b != 0) && (a < 0)) {
        res--;
    }
    return res;
}