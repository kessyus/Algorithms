#include <string>
#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

string mensagem {};
getline(cin, mensagem);

int k = 1;

for (int i = 0; i < mensagem.size(); ++i){
  
  for (int y = (mensagem.size() - 1 - i); y > 0; --y){
    cout << " ";
  }
  
  for (int j = 0; j <= i; ++j){
    cout << mensagem.at(j);
  }
  
  for (int l = i; l > 0; --l){
    cout << mensagem.at(l-1);
  }
  
  cout << endl;
  k += 2;
}

  return 0;
}
