#ifndef MODEL_Hpp
#define MODEL_Hpp

#include <string>


class suga_mommie {
    private:
        std::string name;
        int age;
        long long Income;
        
    public:
        suga_mommie(std::string Name, int Age, long long                 Income)
            : name(Name), age(Age), Income(Income) {}        
        suga_mommie()
            : name(""), age(0), Income(0) {}
            
    void setAge(int x){
        age = x;
        }
            
    void setIncome(long long y){
        Income = y;
        }
       
    void setName(std::string z){
        name = z;
        }
};

#endif