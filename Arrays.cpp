#include<iostream>
#include<string>
using namespace std;
int main(){
    
  // array declaration with  its size
     
    string address[] = {"B123 " ,"C234" ,"A345" , "C15" ,"B177 ","G3003","C235 ","B179 "};
                 int  length = sizeof(address)/sizeof(address[0]);
          for(int i=0; i <=length; i++){
           
                if (address[i][0]=='B') {
                

          
           cout<<address[i];

    return 0;
                }
}
}
 
                
