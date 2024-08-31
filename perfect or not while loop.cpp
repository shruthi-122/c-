#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter a positive integer: ";
    cin >> n;
    int arr[n];
    cout<<"enter num"<<"elements:\n";
    for (int i = 1; i <= n; i++) {
    	cin>>arr[i];
    }
    int sum = 0;
    for(int i=0;i<n;i++){
    	sum+=arr[i];
	}
    
    cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;
    
    return 0;
}
