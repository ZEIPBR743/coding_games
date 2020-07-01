//
// Created by liyuangu on 6/30/20.
//

#include "../cmake-build-debug/subtree.h"
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSubtree(TreeNode* s, TreeNode* t) {
        // if (s == NULL || t == NULL){
        //     std::cout << "null case" << "\n";
        //     return true;
        // }
        if (s->val != t ->val){
            if (s->left == NULL && s->right == NULL){
                return false;
            }

            TreeNode* sl = s->left;
            TreeNode* sr = s->right;
            if (s->left == NULL){
                return isSubtree(sr, t);
            }
            else if (s->right == NULL){
                return isSubtree(sl, t);
            }
            else{
                return isSubtree(sl, t) || isSubtree(sr, t);
            }

        }
        else if (s->val == t->val){
            if ( s->left == NULL && s->right == NULL
                 && t->left == NULL && t->right == NULL){
                return true;
            }
            else if (s->left == NULL && t->left != NULL){
                if (s->right == NULL){
                    return false;
                }
                else{
                    return isSubtree(s->right, t);
                }
            }
            else if (s->right == NULL && t->right != NULL){
                if (s->left == NULL){
                    return false;
                }
                else{
                    return isSubtree(s->left, t);
                }
            }
            else if (s->left != NULL && t->left == NULL){
                return false || isSubtree(s->left, t);
            }
            else if (s->right != NULL && t->right == NULL){
                return false|| isSubtree(s->right, t);
            }
            else if (s->left == NULL){
                return isSubtree(s, t->right);
            }
            else if (s->right == NULL){
                return isSubtree(s, t->left);
            }
            else{
                TreeNode* sl = s->left;
                TreeNode* sr = s->right;
                TreeNode* tl = t->left;
                TreeNode* tr = t->right;
                return isSubtree(sl, tl) && isSubtree(sr, tr)
                       &&(sl->val == tl->val) && (sr->val == tr->val);
            }

        }
        return true;
    }
};