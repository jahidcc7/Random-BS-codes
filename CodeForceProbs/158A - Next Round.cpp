 
#include <iostream>
using namespace std;

int main()
{
	int n, k,c=0;
	cin >> n >> k;
	int arr[99];

	for (int i = 0; i < n; i++)
		cin >> arr[i];
	
	for (int i = 0; i < n; i++)
		if (arr[i] > 0 && (arr[i] >= arr[k - 1]))
			c++;
	

	cout << c;

	//cin.get();
	return 0;
}
