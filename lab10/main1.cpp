// 成功版
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class myString {
    private:
        string m_str;
    public:
        myString(string s) {
            m_str = s;
        }
};

class ReadClass {
    public:
    int m = 0;
    string line;
    string i[50];
    
    void showClass() {
        ifstream in;
        in.open("main.cpp");
        
        while (getline(in, line)) {
            if (line.find("class ") == 0) {
                
                i[m] = line;
                i[m].pop_back();
                m++;
            }
        }
        
        
        
        cout << m << " class in main.cpp" << endl;
        for(int y = 0; y < m; y++) {
            cout << i[y] << endl;
        }
        in.close();
    }
};
int main() {
    
    ReadClass rfile;
    rfile.showClass();
    return 0;
}
