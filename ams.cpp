#include<iostream>
using namespace std;

int main(){

int num;
cout<<"enter number: ";
cin>>num;

int tem=num;
int check=num;

int count=0;
while(num>0){
    count++;
    num=num/10;
}
int sum=0;
while(tem>0){
    int rem=tem%10;
    int ams=1;
    for(int i=0;i<count;i++){
        ams=ams*rem;
    }
    sum=sum+ams;
    tem=tem/10;

}
if(check==sum){
    cout<<check<<" is armstrong number";
}
else{
    cout<<check<<" is not a armstrong number";
}
    return 0;
}