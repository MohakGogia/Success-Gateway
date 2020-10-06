// Time Complexity - O(nlogn)
// Sapce Complexity - O(n)


#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s1, s2, result;
    cin>>s1;
    cin>>s2;

    int total = s1.size() + s2.size();

    sort(begin(s1), end(s1));
    sort(begin(s2), end(s2));

    set_intersection(begin(s1), end(s1), begin(s2), end(s2),back_inserter(result));

    cout<<total-(2*result.size());

    return 0;
}