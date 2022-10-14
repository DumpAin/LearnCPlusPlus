#include <iostream>
#include <iomanip>
using namespace std;

#define PI 3.14159265358979323846

int main()
{
    int n = 0, max = 0;
    cin >> n;        
	max = n + 4;
	for (n; n <= max; n++)
	    cout << setiosflags(ios::fixed) << setprecision(n) << PI << endl;
    return 0;
}
