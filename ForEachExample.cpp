// CPP program to demonstrate for each loop 
// and using auto keyword

#include <iostream>
#include <map>
using namespace std;

// Driver code
int main() {
	
	// Def map data structure
	map<int, string> mapExample;
	mapExample.insert(pair<int, string>(1, "1"));
	mapExample.insert(pair<int, string>(2, "4"));
	mapExample.insert(pair<int, string>(3, "9"));
	mapExample.insert(pair<int, string>(4, "16"));
	
	// Printing map using for each
	cout<<"\nTraversing the map with foreach using auto keyword\n";
	for (auto mpEx : mapExample)
		
		cout<<mpEx.first<<" "<<mpEx.second<<endl;
	
	return 0;

} // End driver
