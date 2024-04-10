/* 
Assignment 2: Marriage Pact

This assignment asks you to discover your one true love using containers and pointers.
There are two parts: implement get_applicants and find_matches.

Submit to Paperless by 11:59pm on 2/1/2024.
*/

#include <iostream>
#include <string>
#include <queue>
#include <set>
#include <fstream>
#include <unordered_set>
std::unordered_set<std::string> get_applicants(std::string filename) {
    std::ifstream ifs(filename);
    std::unordered_set<std::string> result;
    std::string buff;
    while (1)
    {
        getline(ifs,buff,'\n');
        if (ifs.fail())
        {
            break;
        }
        result.insert(buff);
        std::cout<<buff<<'\n';
    
    }
    return result;
}

std::queue<std::string*> find_matches(std::unordered_sset<std::string> &students) {
    std::queue<std::string*> results;
    for (auto item:students)
    {
        if (item[0] == 'T' or item[0] == 't')
        {
            results.push(&item);
        }
        
    }
    return results;
}



int main() {
    // Your code goes here. Don't forget to print your true love!
    auto students = get_applicants("./students.txt");
    auto chose_students = find_matches(students);

    return 0;
}
