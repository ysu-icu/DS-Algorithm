/*
看到数据范围就应该明白，这题不能递推，一是数组开不了这么大，二是递推时间很长。因此只能用数学方法算出来(这就是数据范围给我们做题的提示)。

一个数字n如果可以被3整除，，那么，1, 2, 3, 4, ...分别对3取模得到1, 2, 0, 1, 2, 0, ...，这个时候再看题中给出的序列，1, 12, 123, 1234, ...是不是可以把其中元素分解成，那么可以发现，1, 12, 123, 1234, 12345, ...，能被3整除的如下false, true, true, false, true, true, false, ...，可以发现这个序列以3为周期，因此，代码就可以写出来了。

*/
#include <bits/stdc++.h>

using namespace std;

int fun(int x) {
	return x / 3 * 2 + (x % 3 == 0 ? 0 : x % 3 == 1 ? 0 : 1);
}

int main() {
	for (int l, r; cin >> l >> r; cout << fun(r) - fun(l - 1) << endl) {}
	return 0;
}
