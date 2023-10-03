    #include <iostream>
    #include <string>
    using namespace std;
     
    int main (){
        int a , b , count=0;
        cin >> a >> b;
        for (a ; a <= b ; a=a*3){
           b=b*2;
           count++;
        }
        cout << count;
        return 0;
    }
