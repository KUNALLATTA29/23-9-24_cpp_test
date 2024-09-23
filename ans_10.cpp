#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    private:
        float len;
        float wid;
        
    public:
        Rectangle(float a, float b){
            len=a;
            wid=b;
        }
        
        friend class Area;
};

class Area{
    public:
        float sol(Rectangle result){
            return result.len * result.wid;
        }
};
int main(){
    
   Rectangle obj(2.4, 7.6);
   Area obj2;
   cout<<obj2.sol(obj);
   return 0;
}