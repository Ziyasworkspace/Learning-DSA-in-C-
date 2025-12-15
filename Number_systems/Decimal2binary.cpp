 // decimal to binary conversion 
 #include<iostream>
 using namespace std;
 int main(){
    int n;
    int remainder;
int power=1;
int answer=0;
//
    cout<<"Enter The Decimal number to convert in binary "<<endl;
    cin>>n;
    while(n>0){
    
        remainder=n%2;
        n/=2;
        answer+=(remainder*power);
    power*=10;    
 
    }
    cout<<answer<<endl;
return 0;
 }