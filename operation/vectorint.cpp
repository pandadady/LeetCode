	vector<int> v_updown(vector<int> &vec) {
		for (int i = 0, j = vec.size() - 1; j >= (vec.size() - 1) / 2 && i <= (vec.size() - 1) / 2; i++,j--) {
			int tmp = vec[i];
			vec[i] = vec[j];
			vec[j] = tmp;
		}
		return vec;
	}
