#include <iostream>
#include <string>
#include "matplotlibcpp.h"
#include <vector>
namespace plt = matplotlibcpp;

int main() {
    std::vector<int> test_data = {4, 17, 19, 10, 7, 9, 2, 3, 6, 11, 16, 13, 12, 20, 8, 15, 18, 14, 1, 5};
    int count = 0;
    bool sorted = true;
    for(const auto elements:test_data){
        std::cout<<elements<<" ";
    }
    std::cout<<"\n";
    int img = 0;
    std::string img_name;
    
    while(count!=test_data.size()-1){
       
        
        
        for (int i = 0; i <test_data.size()-1; i++){
            
            if (test_data[i]<test_data[i+1]){
               int temp = test_data[i];
               test_data[i] = test_data[i+1];
               test_data[i+1] = temp;
               
               plt::clf();
               plt::title("Sorting in descending order...");
               plt::bar(test_data);
               img_name = std::to_string(img);
               plt::save(img_name); // REMOVE line if you don't want to save images.
               plt::pause(0.000001);
               img++;
               
            }
            else{
                count++;
                                
            }
   
            for(const auto elements:test_data){
            std::cout<<elements<<" ";
        
            }
            
    
           
    }
            std::cout<<"\n"<<"Count: "<<count<<"\n";
            if (count==test_data.size()-1){
            std::cout<< "Sorting done";
        

    }
            else{
            count = 0;

    }


    }
    plt::title("Sorting is complete!!");
    plt::bar(test_data);
    plt::show();
    
    
    
   
    return (0);
}