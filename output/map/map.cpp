#include<iostream>
#include<map>
using namespace std;
void print(map<int,string>&m)
{
cout<<m.size()<<endl;
for(auto pr: m)
{
    cout<<pr.first<<" "<<pr.second<<endl;//log(n)
}
}

int main()
{
    map<int,string>m;
    m[1]="abc";//log(n)
    m[5]="cdc";
    m[7]="acd";
    m[6]="a";
    m[5]="cde";
    m[1]="abc";
 m.insert({4,"afg"});
//  map<int,string>::iterator it;
// for(it=m.begin();it!=m.end();it++)
// {
//     cout<<(*it).first<<" "<<(*it).second<<endl;
// } 
auto it=m.find(5);//log(n)
if (it==m.end())
{
    cout<<"no values"<<endl;

}
else{
    cout<<(*it).first<<" "<<(*it).second<<endl;
}
print(m);


m.erase(6);//o(log(n));
cout<<endl;
print(m);
map<string,string>p;
p["strin"]="name";//s.size()*log(n);

 return 0;

}