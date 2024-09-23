#include<bits/stdc++.h>
using namespace std;

class CustomString{
    private:
        string data;
        
    public:
        CustomString(string str = ""){
            data = str;
        }
        CustomString operator+(const CustomString & obj){
            CustomString result;
            result.data = data + obj.data;
            return result;
        }
        
        string getinfo(){
            return data;
        }
};

int main(){
    
    CustomString obj1("kunal");
    CustomString obj2("latta");
    
    CustomString result = obj1 + obj2;
    
    cout<<result.getinfo();
    
}