/*123*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* mergeTrees(struct TreeNode* t1, struct TreeNode* t2) {
	TreeNode *t = NULL;
	if (t1 == NULL)
	{
		if (t2 == NULL)
			return NULL;
		else //t1 == NULL t2 != NULL
			return t2;
	} else {
		if (t2 == NULL)
			return t1;
		else { //t1 != NULL t2 != NULL
			t = (TreeNode*)malloc(sizeof(TreeNode));
			t->val = t1->val + t2->val;
			t->left = mergeTrees(t1->left, t2->right);
			return t;
		}
	}
}


/**
 * data: 2017/6/28
 * times: 1
 * option: NO
 * result: Accepted, 19ms, beats 88.52% of c submissions. 
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* mergeTrees(struct TreeNode* t1, struct TreeNode* t2) {
    struct TreeNode *t = NULL;
	if (t1 == NULL)
	{
		if (t2 == NULL)
			return NULL;
		else //t1 == NULL t2 != NULL
			return t2;
	} else {
		if (t2 == NULL)
			return t1;
		else { //t1 != NULL t2 != NULL
			t = (struct TreeNode*)malloc(sizeof(struct TreeNode));
			t->left = NULL;
			t->right = NULL;
			t->val = t1->val + t2->val;
			t->left = mergeTrees(t1->left, t2->left);
			t->right = mergeTrees(t1->right, t2->right);
			return t;
		}
	}
}


//修改注意事项
//1.malloc函数申请内存空间的形式，结构体的形式
//2.malloc申请空间之后的结构体中如果有指针类型，需要将指针类型赋值为NULL.



//sample 18 ms submission
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* mergeTrees(struct TreeNode* t1, struct TreeNode* t2) {
    if (t1 == NULL)
        return t2;
    if (t2 == NULL)
        return t1;
    t1->val += t2->val;
    t1->left = mergeTrees(t1->left, t2->left);
    t1->right = mergeTrees(t1->right, t2->right);
    free(t2);
    return t1;
    //
}

