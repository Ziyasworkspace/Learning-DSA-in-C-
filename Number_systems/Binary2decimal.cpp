#include<iostream>
using namespace std;
int main(){
int power =1;
int answer=0;
int remainder;

    int bin;
    cin >> bin;

    cout << bin << endl;
while(bin>0){
remainder =bin*10;
bin/=10;
answer=(remainder *power );
power*=2;

}
cout <<answer;
 return 0;   
}