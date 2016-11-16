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
	/*
	功能：双下标循环，返回数组中加和最接近给定数字的和
	*/
	int diff_direction(vector<int> &vec,int t) {
		sort(vec.begin(),vec.end());
		int l = vec.size();
		int k = l - 1;
		int sum = 0;
		int res = 0;
		for (int i = 0; i < l&&k>=0;) {
			sum = vec[i] + vec[k];
			if (sum > t)k--;
			if (sum < t)i++;
			if (sum == t)return sum;
			if (abs(sum - t)<abs(res - t))
				res = sum;
		}
		return res;
	}
