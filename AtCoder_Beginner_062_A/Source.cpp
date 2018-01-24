/*
問題文
すぬけ君は、1 から 12 までの整数を下図のようにグループ分けしました。 整数 x, y (1≤x<y≤12) が与えられるので、x, y が同一のグループに属しているか判定してください。
*/

#include<iostream>
#include<vector>
#include<algorithm>

int main() {
	std::vector<std::vector<int>> vv{ {1,3,5,7,8,10,12},{4,6,9,11},{2} };
	int x, y,count=0;
	bool flag=false;

	std::cin >> x >> y;
	
	for (int i = 0; i < 2; i++) {
		auto itr_x = std::find(vv[i].begin(), vv[i].end(), x); 
		auto itr_y = std::find(vv[i].begin(), vv[i].end(), y);

		if (itr_x != vv[i].end() && itr_y != vv[i].end()) {
			flag = true;
			break;
		}
	}

	std::cout << (flag ? "Yes" : "No") << std::endl;

	return 0;
}