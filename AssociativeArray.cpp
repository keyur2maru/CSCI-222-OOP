/**
 *   CSCI-222 Assignment 10 P13.7: Associative Array
 *   @Maru_Assignment10_P13-7.cpp
 *   @author Keyur Maru
 *   @version 1.0 12/26/21
 */
#include<iostream>
#include<string>
#include<map>

class AssociativeArray {
public:
    /**
     * Overload index operator[] to provide access to value using Key
     * @param key
     * @return
     */
     double& operator[] (const std::string& key) {
        for(auto & i : arr) {
            if(key==i.first)
                return i.second; //element found
        }
        arr[key]=0.0;
        auto it = arr.find(key);
        return it->second;
    }
private:
    std::map<std::string,double> arr;                                               //Store Key and Value in Map
};

int main() {
    AssociativeArray prices;
    prices["Toaster Oven"] = 19.95;
    prices["Car Vacuum"] = 24.95;
    std::cout << prices["Toaster Oven"] << std::endl;
    std::cout << prices["Car Vacuum"] << std::endl;
    return 0;
}