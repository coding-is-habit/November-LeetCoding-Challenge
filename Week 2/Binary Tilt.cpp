int rec(TreeNode *root, int &sum) {
	if (!root)  return 0;
	int l = rec(root->left, sum);
	int r = rec(root->right, sum);
	sum += abs(l-r);
	return l+r+root->val;
}
    
int findTilt(TreeNode* root) {
	int sum = 0;
	rec(root, sum);
	return sum;
}