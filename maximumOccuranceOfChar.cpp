#include <iostream>
#include<string>
using namespace std;
void maxoccurance(string s){
  int arr[26] = {0};
  int n;
  for(int i=0;i<s.length();i++){
    char ch = s[i];

    if(ch>='a' && ch <='z'){
      n = ch -'a';
    }
    else{
      n = ch -'A';
    }
    arr[n]++;
  }
  int maxi =-1;int ans = 0;
  for(int i =0;i<26;i++){
    if(arr[i] > maxi){
      ans = i;
      maxi = arr[i];
    }
  }
  char finalans = 'a' + ans;
  cout<<"Maximum occuring charecter is = "<<finalans<< " occured "<<maxi<<" times"<<endl; 
}
int main() {
  maxoccurance("OuTput");
  return 0;
}
