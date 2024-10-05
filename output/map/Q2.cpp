#include<iostream>
#include<map>
#include<string>

using namespace std;
int main()
{map<string,int>p;

cout<<"Enter  the number of elements in map p: ";
int a;
cin >>a;
cout<<"Enter the elements in map p: ";
for(int i=0;i<a;i++)
{
 string s;
 cin>>s;
 p[s]++;
}

    cout << "Unique strings in lexicographical order with their frequency:" << endl;
    for (const auto& m : p) {
        cout << m.first << " " << m.second << endl;
    }

 return 0;
}