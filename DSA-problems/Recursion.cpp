 #include <iostream>;
  using namespace std;
  
  //Function for factorial
    int factorial(int n){
        if(n==0){
            return 1;
        }
        int smallOutput = factorial(n-1);
        return n*smallOutput;
    }
    int main(){
        int n;
        cin>>n;
        cout<<factorial(n)<<endl;
    }
