
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

void out(){
}

int main(int argc,char* argv[]){
  IO;
  int maxn;
  string h=to_string(maxn),m;
  system("g++ gen.cpp -o gen");
  system("g++ Main.cpp -o Main");
  system("g++ main.cpp -o main");
  system("g++ ch.cpp -o ch");
  system("echo Hi! > 7");
  system("echo ... > 8");
  system("echo ... > 9");
  system("echo Accepted > 5");
  cin>>maxn;
  int l = 1,r = maxn + 1,p=0,q;
  cin>>m>>q;
  while( l+1 < r ){
    int i=(l+r)/2;
    // cout<<i<<endl;
    string s = (string)"./gen " + to_string(i) + " " + to_string( abs(time(NULL) + 2*l + 3*p + 4*r + 5*i + maxn) ) + " " + m  + " > 1 ";
    system(s.c_str());
    system("./Main < 1 > 22");
    system("./main < 1 > 33");
    system("./ch < 22 > 2");
    system("./ch < 33 > 3");
    bool diff=system("diff -w 2 3 > 4");
    if(diff){
      system("cat < 1 > 7");
      system("cat < 2 > 8");
      system("cat < 3 > 9");
      system(((string)"echo Wrong answer on test " + to_string(i) + " > 5").c_str());
      system("cat < 4 >> 5");
      r=i;
      p=0;
      cout<< "wrong anwer on " << i<<endl;
    }
    if(p==q){
      l = i + 1;
      p=0;
    }
    p++;
  }

  cout<<endl;
  cout<<"================================================="<<endl;
  cout<<endl;
  cout<<"Test :" << endl << endl;
  system("cat < 7");
  cout<<endl<<endl;
  cout<<"================================================="<<endl;
  cout<<endl;
  cout <<"Your output :" << endl << endl;
  system("cat < 8");
  cout<<endl<<endl;
  cout<<"================================================="<<endl;
  cout<<endl;
  cout<<"judge output :" <<  endl << endl;
  system("cat < 9");
  cout<<endl<<endl;
  cout<<"================================================="<<endl;
  cout<<endl;
  cout<<"Checker log :" <<  endl << endl;
  system("cat < 5");
  cout<<endl;
  cout<<"================================================="<<endl;
  cout<<endl;
  return 0;
}
