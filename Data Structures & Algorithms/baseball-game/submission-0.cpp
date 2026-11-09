class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> storage;
        for(int i = 0; i < operations.size(); i++) {
            if(operations[i] == "+") {
                int n = storage.size();
                storage.push_back(storage[n - 1] + storage[n - 2]);
            } else if(operations[i] == "D") {
                storage.push_back(storage.back() * 2);
            } else if(operations[i] == "C") {
                storage.pop_back();
            } else {
                storage.push_back(stoi(operations[i]));
            }
        }
        int sum = 0;
        for(int x : storage) {
            sum += x;
        }
        return sum;
    }
};