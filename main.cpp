#include <bits/stdc++.h>

using namespace std;

vector<int> res;
void check()
{
  vector<string> str;
  map<string,int> occ;
  string in;
  while(in!="\n")
  {
    cin >> in;
    str.push_back(in);
    occ[in]++;
  }
  for(int i=0;i<str.size();i++)
  {
    if(occ[str[i]]>1)
    {
      break;
      res.push_back(0);
      return;
    }
  }
  res.push_back(1);
  return;
}
int main()
{

  int n;

  cin >> n;

  for(int i=0;i<n;i++)
  {
    check();

  }
  for(int i=0;i<res.size();i++)
  {
    cout << res[i]<<endl;
  }
  return 0;
}