#ifndef APP_Hpp
#define APP_Hpp

#include <string>
#include "UTILS.hpp"
#include "MODEL.hpp"
#include <cctype>

using namespace std;

inline void run() {
    
        suga_mommie best_suga_mommie;
    
    int tempAge;
    long long tempIncome;
    std::string tempName;
    
    
    print("Please enter your name my highness:");
        input(tempName);
            best_suga_mommie.setName(tempName);
    print("Please enter your age my highness:");
        input(tempAge);
            best_suga_mommie.setAge(tempAge);
    print("Please enter your income my highness:");
        input(tempIncome);
            best_suga_mommie.setIncome(tempIncome);
  
    
    std::string type = "I like sugar mommies";
    println(type);
    
    
    double pi = 3.14159865;
    println(pi);
    const int circumcised_pi =static_cast<int>(pi);
    println(circumcised_pi == 3);
    println(circumcised_pi);
    
    bool do_I_have_dihh = true;
    println(!do_I_have_dihh);
    
    int age;
    print("Enter your age:");
    input(age);
    
    if (age >= 18) {
        println("goon now");
        }
             
    else {
        println("don't goon");
        }
        
    int dihh_size;
    print("Enter your dihh size in inches:");
    input(dihh_size);
    
    std::string dihh_size_comparison = (dihh_size >= 6) ?
    "good dihh" : "bad dihh";
    println(dihh_size_comparison);
          
    int number[3] = {69, 2013, 6};
    println(sizeof(number[0])); 
    println((number[1] && number[2]));
    
    int gooning_day;
    print("Enter the day: ");
    input(gooning_day); 
    
    switch (gooning_day) {
    case 1:
        println("Goon to suga mommies");
        break;
    case 2:
        println("Goon to goth mommies");
        break;
    case 3: 
        println("Goon to thot mommies" );
        break;
    case 69:
        println("special day hehe");
        break;
        
    default:
        println("don't goon; risk of dihh exploding");
    }
    
    int second_dihh_size = dihh_size;
    
    for (; second_dihh_size <= 6; second_dihh_size++) {
            println(second_dihh_size);
            if (second_dihh_size == 6 ) {
                println("Perfect dihh ");
                }           
            }
            
    while (dihh_size == 6) {
        println("Perfect dihh ");
        break;
        }
        
     std::string mommie_type;
    
     do {
         println("Do u like mommies?");
         input(mommie_type);
         for (char& x : mommie_type)
             x = std::tolower(x);     
     } while (mommie_type != "yes" );
       
     do {
         overwrite(&dihh_size);
         println(dihh_size);
         } while (dihh_size == gooning_day);           
    }
#endif
