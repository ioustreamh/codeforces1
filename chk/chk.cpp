
  //In The Name Of GOD

#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;
typedef long long ll ;
const ll mod = 998244353;
const ll inf = 2000000000;
const ll infll = (ll)2*1000*1000*1000*1000*1000*1000;
const ll maxn = 100*1000+1;
#define pb push_back
#define pp pop_back
#define X first
#define Y second
#define IO ios_base::sync_with_stdio(false);

int main(int argc,char* argv[]){
  IO;
  int maxn;
  string h=to_string(maxn);
  system("g++ gen.cpp -o gen");
  system("g++ Main.cpp -o Main");
  system("g++ main.cpp -o main");
  system("echo Hi! > 7");
  system("echo ... > 8");
  system("echo Accepted > 5");
  cin>>maxn;
  int l=1,r=maxn,p=0;
  while(l + 1 <r){
    // cout<<l<<' '<<r<<endl;
    int i=(l+r)/2;
    string s = (string)"./gen " + to_string(i) + " > 1 ";
    system(s.c_str());
    system("./Main < 1 > 2");
    system("cat < 1 > 3");
    system("ech > 3");
    system("cat < 2 >> 3");
    bool diff=system("./main < 3 > 4");
    // bool diff=false;
    if(diff){
      system("cat < 1 > 7");
      system("cat < 2 > 8");
      system(((string)"echo Wrong answer on test " + to_string(i) + " > 5").c_str());
      system("cat < 4 >> 5");
      r=i;
      p=0;
    }
    if(p==10){
      l=i;
      p=0;
    }
    p++;
    // cout<<i<<' '<<endl;
  }
  cout<<endl;
  cout<<"Test :" << endl << endl;
  system("cat < 7");
  cout<<endl<<endl;
  cout <<"Your output :" << endl << endl;
  system("cat < 8");
  cout<<endl<<endl;
  cout<<"Checker log :" <<  endl << endl;
  system("cat < 5");
  cout<<endl<<endl;
  return 0;
}
