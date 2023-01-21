#include <iostream>
using namespace std;
#define whiteblock  "\x20\x20"
#define verticalline  (char)179
#define horizontalline "\xC4\xC4"
#define cornerleftup (char)218
#define cornerleftdown  (char)192
#define cornerrightup  (char)191
#define cornerrightdown (char)217
#define blackblock "\xDB\xDB"
#define ANSII
void main()
{
#ifdef ANSII
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0) cout << endl;
		cout << i << "\t" << (char)i << "\n";
	}
#endif // ANSII
	int n;
	cout << "Enter Number: ";
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << cornerleftup;
			else if (i == 0 && j == n)cout << cornerrightup;
			else if (i == n && j == 0)cout << cornerleftdown;
			else if (j == n && i == n)cout << cornerrightdown;
			else if (i == 0 || i == n)cout << horizontalline;
			else if (j == 0 || j == n)cout << verticalline;
			else cout << (i % 2 == j % 2) ? whiteblock : blackblock;
		}
		cout << endl;
	}
}