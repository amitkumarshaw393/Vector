#include <iostream>
#include <vector>
  
using namespace std;
  
int main()
{
	int n,i,arr[100];
    vector<int> g1;
  cout<<"enter the number of element  :";
  cin>>n;
    for (i = 0; i < n; i++)
    {
    cin>>arr[i];
        g1.push_back(arr[i]);
    }
  
    cout << "Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";
  
    cout << "\nOutput of cbegin and cend: ";
    for (auto i = g1.cbegin(); i != g1.cend(); ++i)
        cout << *i << " ";
  
    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << " ";
  
    cout << "\nOutput of crbegin and crend : ";
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
           cout << *ir << " ";
           
           cout <<endl;
    cout<< "Size : "<< g1.size()<<endl;
    cout << "\nCapacity : " <<g1.capacity()<<endl;
    cout << "\nMax_Size : " <<g1.max_size()<<endl;
     g1.shrink_to_fit();
    cout << "\nVector elements are: ";
    for (auto it = g1.begin(); it != g1.end(); it++)
        cout << *it << " ";
        cout << "\nCapacity : " <<g1.capacity()<<endl;
        
  
    return 0;
}
