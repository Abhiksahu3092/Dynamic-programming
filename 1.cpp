/*Dynamic programming for fibonacci series*/
#include<iostream>
using namespace std;

/*Note: Here we could have used recursion but we used memorization technique smartly to evaluate the result. Also we did not use the array as for this operation we had to intialize an array of size of n integer variables but in this method we used only the space of 3 integer variables to get the desired result thus optimizing space complexity*/

int main(){
    int n;
    cin>>n;
    int prev=1;
    int prev2=0;
    int current;
    for(int i=2;i<=n;i++){
        current=prev+prev2;
        prev2=prev;
        prev=current;
    }

    cout<<current<<endl;
}