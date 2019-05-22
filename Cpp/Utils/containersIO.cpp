#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vec{101, 102};
	
	copy_n(istream_iterator<int>(cin), 3, back_inserter(vec));
	copy(vec.begin(), vec.end(), ostream_iterator<int>{cout, " "});
	
	copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(vec));
	copy(vec.begin(), vec.end(), ostream_iterator<int>{cout, " "});
	
	return 1;
}
