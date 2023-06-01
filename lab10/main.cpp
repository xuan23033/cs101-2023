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
    
    
    void showClass() {
        ifstream in;
        string line;
        in.open("main.cpp");
        if (in.fail()) {
            cout << "Error opeing a file" << endl;
            in.close();
        }
    
        while (getline(in, line)) {
            cout << line << endl;
        }
        in.close();
    }
    
};
int main() {
    
    ReadClass rfile;
    rfile.showClass();
    return 0;
}