#include<iostream>
using namespace std;
int main(){
int i,j;
string m,key,cipher;
cout<<"Enter the message"<<'\n'; cin>>m;
cout<<"Enter the key"<<'\n'; cin>>key;
int mod = key.size();
j=0;
for(i=key.size();i<m.size();i++){
key+=key[j%mod];
j++;
}
for(i=0;i<m.size();i++){
cipher += (key[i]-'A'+ m[i]-'A') % 26 +'A';
}
cout<<"Encrypted message: "<<cipher<<'\n';
return 0;
}