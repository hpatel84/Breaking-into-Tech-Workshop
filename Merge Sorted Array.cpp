void merge (vector<int>& nums1, int m, vector<int>& nums2, int n){
	int j =0;
	int i=0;

	while(i<n){
		if(nums1[j]>nums2[i]){
			nums1.insert(nums2[i], j);
			i++;
		else
			j++;
		}
	}
}