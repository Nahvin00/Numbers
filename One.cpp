#include <iostream>
using namespace std;

int main() {
int i, num[19], even=0, odd=0, zero=0;
cout<<"Please enter 20 integers, positive, negative, or zeros."<<endl;
for(i=0;i<20;i++){
    cin>>num[i];
}
cout<<endl<<"The numbers you entered are:"<<endl;
for(i=0;i<20;i++){
    cout<<num[i]<<"\t";
    {if(num[i]%2==0){
        even++;
    }
    else{
        odd++;
    }}
    if(num[i]==0){
        zero++;
    }
}
cout<<endl<<"There are "<<even<<" evens, which includes "<<zero<<" zeros."<<endl<<"The number of odd numbers is "<<odd<<".";
    return 0;
}
