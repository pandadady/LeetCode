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
