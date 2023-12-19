
#include <string> 
#include <vector>
#include <iostream>
#include "Node.h"

using namespace std;
struct sentences{
    string sent ;
    int loc[4] ;
};
class SearchEngine {
private:

    vector<sentences> text ;
    long long unsigned int no_of_sentences ;
    long long unsigned int text_size ;

public: 

    SearchEngine();

    ~SearchEngine();

    void insert_sentence(int book_code, int page, int paragraph, int sentence_no, string sentence);

    Node* search(string pattern, int& n_matches);

};