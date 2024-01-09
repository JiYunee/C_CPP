#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    if (arr.size() <= 1) {
        answer.push_back(-1);
    } else {
        int num = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] < num)
                num = arr[i];
        }
        
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == num) {
                arr.erase(arr.begin() + i);
                break;
            }
        }

        answer = arr;
    }
    
    return answer;
}