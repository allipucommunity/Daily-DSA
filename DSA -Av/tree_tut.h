#include <vector>
template<typename T>
class TreeNode{
    public: 
    T data;
    std::vector<TreeNode<T>*> children;
    
    TreeNode(T data){
        this->data=data;
    }

};