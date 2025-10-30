#include <iostream>
#include <vector>
#include <memory>

class Tree : public std::enable_shared_from_this<Tree>{

    int count;
    int child;
    std::vector<std::shared_ptr<Tree>> children;
public:
    Tree(int cnt=0) : count(cnt){}

    Tree(std::shared_ptr<Tree> tree,int cnt=0) : count(cnt){
        if(tree){
            tree->addChild(shared_from_this());
        }
    }
    void addChild(std::shared_ptr<Tree> child){
        children.push_back(child);
    }
};