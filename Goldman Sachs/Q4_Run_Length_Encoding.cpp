#include <bits/stdc++.h>
using namespace std;

string encode(string src);

int32_t main() {

	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;

		cout<<encode(str)<<endl;
	}
	return 0;
}

string encode(string src)
{
  //Your code here
  string s = "";
  int c=1;
  for(int i=0;i<src.length();i++){

      if(src[i] != src[i+1]){
          s = s+src[i];
          s = s+to_string(c);
          c=0;
      }
      c++;
  }

  return s;
}
