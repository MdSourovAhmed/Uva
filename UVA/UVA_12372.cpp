#include <bits/stdc++.h>
using namespace std;

int main()
{
	int cnt = 1, tc;
	int l, w, h;

	scanf("%d", &tc);
	while (tc--)
	{
		scanf("%d %d %d", &l, &w, &h);

		printf("Case %d: ", cnt++);
		if (l < 21 && w < 21 && h < 21)
			printf("good\n");
		else
			printf("bad\n");
	}

	return 0;
}