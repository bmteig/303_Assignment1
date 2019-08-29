#include <iostream>
#include <iomanip>

using namespace std;

int v_y1 = 0;
int v_y2 = 0;
int n = 0;

int main()
{

	for (int i = n; i <= 100; i += 10) {
		v_y1 = 100 * i + 10;
		v_y2 = 5 * i * i + 2;
		cout << "y1 Value: " << setw(5) << v_y1 << " / y2 Value: " << setw(5) << v_y2 << endl;
	}
	
	system("pause");
	return 0;
}