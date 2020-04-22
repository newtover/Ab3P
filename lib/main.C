#include <Ab3P.h>
#include <vector>
#include <fstream>
#include <iostream>
#include <string>

extern "C"
{
    Ab3P* create_ab3p()
    {
        return new Ab3P();
    }

    void delete_ab3p(Ab3P* ptr)
    {
        delete ptr;
    }

    void get_abbrs(char* line, std::vector<AbbrOut>* v, Ab3P* ab3p) {
        string s(line);
        ab3p->get_abbrs(s, *v);
    }

    std::vector<AbbrOut>* new_vector(){
        return new vector<AbbrOut>();
    }

    void delete_vector(vector<AbbrOut>* v){
        delete v;
    }

    int vector_size(std::vector<AbbrOut>* v){
        return v->size();
    }

    AbbrOut* vector_get(std::vector<AbbrOut>* v, int i){
        return &(v->at(i));
    }
}

int main() {
    return 0;
}