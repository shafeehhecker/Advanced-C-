#include <iostream>
#include<vector>
using namespace std;

int main()
{
    string word;
    vector<string> myText;
    while(cin>>word){
        myText.push_back(word);
    }
    for(string i:myText)
    std::cout << i << std::endl;

    return 0;
}
