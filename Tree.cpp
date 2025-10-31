#include <iostream>
#include <vector>
#include <memory>
#include <string>

class Tree : public std::enable_shared_from_this<Tree>{

    private:
        int id;
        int count;
        std::string name;
        std::vector<std::shared_ptr<Tree>> children;
        static int global_id;

        Tree(std::string name_,int cnt=0) : id(global_id++),name(name_), count(cnt){}
    
    public:
        static std::shared_ptr<Tree> createRoot(std::string name_,int cnt=0){
            return std::make_shared<Tree>(name_,cnt);
        }
        
        static std::shared_ptr<Tree> createChild(std::shared_ptr<Tree> parent,std::string name_,int cnt=0){
            auto child = std::make_shared<Tree>(name_,cnt);
            if(parent){
                parent->addChild(child);
            }
            return child;
        }
        void addChild(std::shared_ptr<Tree> child){
            children.push_back(child);
        }

};