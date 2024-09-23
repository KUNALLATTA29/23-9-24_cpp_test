#include<bits/stdc++.h>
using namespace std;

class Integer{
    private:
        int data;
        
    public:
        Integer(int val = 0){
            data = val;
        }
        Integer operator+(const Integer & obj){
            Integer result;
            result.data = data + obj.data;
            return result;
        }
        
        int getinfo(){
            return data;
        }
};

int main(){
    
    Integer obj1(5);
    Integer obj2(5);
    
    Integer result = obj1 + obj2;
    
    cout<<result.getinfo();
    
}