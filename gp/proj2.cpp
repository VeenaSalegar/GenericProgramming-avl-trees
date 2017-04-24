#include "avl.cpp"
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>

using namespace std;
void disp(int i) 
{  // function:
  cout << ' ' << i;
}

int main()
{
	int choice, item;
	vector<int> b={1,2,3,4,-1,0,4};
	avl<int,less<int>> a(b.begin(),b.end());
	/*a.insert(1);
	a.insert(2);
	a.insert(3);
	a.insert(4);
	a.insert(-1);
	a.insert(0);
	a.insert(4);*/
	a.display();
	cout<<endl;
	for_each(a.begin(), a.end(), disp);
	
	cout<<endl;
	
}
