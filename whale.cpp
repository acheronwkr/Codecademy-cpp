#include <iostream>
#include <vector>
#include <string>

int main() {

    std::string sentence = "this is the human to whale translator";
    std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    std::vector<char> result;

    for (int i = 0; i < sentence.size(); i++) {
        for (int j =0; j < vowels.size(); j++) {
            if (sentence[i] == vowels[j]) {
                result.push_back(sentence[i]);
            }
        }
        if (sentence[i] == 'e' || sentence[i] == 'u') {
            result.push_back(sentence[i]);
        }
    }
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
}