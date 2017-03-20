# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def diameterOfBinaryTree(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        def getheight(root):
            if not root:
                return 0
            return 1 + max(getheight(root.left), getheight(root.right))
        
        if not root:
            return 0
        height=getheight(root.left)+getheight(root.right)
        dia = max(self.diameterOfBinaryTree(root.left), self.diameterOfBinaryTree(root.right))
        
        return max(height,dia)
