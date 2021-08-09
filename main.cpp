//
//  main.cpp
//  0806
//
//  Created by kyohei namai on 2021/08/05.
//
#include <iostream>
#include <string>
#include <random>
#include <algorithm>
#include <fstream>
#include <vector>

using namespace std;
class menu{
string name;
int id;
public:
void setMName(const string& newName) {name=newName;}
    string getMName()
{return name;}
    void setMID(int newID) {id= newID;}
    int getMID()
    {return id;}
   
    void setLName(const string& newName) {name=newName;}
        string getLName()
    {return name;}
        void setLID(int newID) {id= newID;}
        int getLID()
        {return id;}
    
    void setDName(const string& newName) {name=newName;}
        string getDName()
    {return name;}
        void setDID(int newID) {id= newID;}
        int getDID()
        {return id;}
    };

auto randomInt(const int min, const int max, const int num){
    vector<int> vec;
    random_device rnd;
    uniform_int_distribution<int> dist(min, max);
    for (int i = 0; i < num; i++) vec.push_back(dist(rnd));
    return vec;
}
                                                    


int main(){
ifstream Mfile("morning.txt");
string mname;
int mid;
vector<int>vi;
vector<string >vn;
    sort(vi.begin(), vi.end());
while(Mfile>>mid>>mname){vi.push_back(mid);
                       vn.push_back(mname);
}
ifstream Lfile("lunch.txt");
string lname;
int lid;
vector<int>vu;
vector<string>vm;
while(Lfile>>lid>>lname){vu.push_back(lid);
                         vm.push_back(lname);
}
ifstream Dfile("dinner.txt");
string dname;
int did;
vector<int>v;
vector<string>vb;
while(Dfile>>did>>dname){v.push_back(did);
                         vb.push_back(dname);
}
    


    int n=randomInt(0, 1, 2)[1];
    int k=randomInt(0, 5, 6)[1];
    int j=randomInt(0, 8, 9)[1];
    
menu X;
menu Y;
menu Z;
X.setMID(vi[n]);
Y.setLID(vu[k]);
Z.setDID(v[j]);
X.setMName(vn[n]);
Y.setLName(vm[k]);
Z.setDName(vb[j]);
cout<<"time:" << X.getMID() << "food:"<<X.getMName()<<endl;
cout<<"time:" << Y.getLID() << "food:"<<Y.getLName()<<endl;
cout<<"time:" << Z.getDID() << "food:"<<Z.getDName()<<endl;
Mfile.close();
Lfile.close();
Dfile.close();

}
