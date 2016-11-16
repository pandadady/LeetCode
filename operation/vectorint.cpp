	/*
	功能：数组逆序
	*/
	vector<int> v_updown(vector<int> &vec) {
		int l = vec.size() - 1;
		int m =  l / 2;
		for (int i = 0, j = l; j >= m && i <= m; i++,j--) {
			int tmp = vec[i];
			vec[i] = vec[j];
			vec[j] = tmp;
		}
		return vec;
	}
	/*
	功能：双下标循环，返回数组中不相同元素个数，前提是数组已排序
	*/
	int same_direction(vector<int> &vec) {
		int index = 0;
		for (int i = 0; i <= vec.size()-1; i++) {
			if (vec[i] != vec[index])vec[++index] = vec[i];
		}
		return ++index;
	}
