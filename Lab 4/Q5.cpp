#include <iostream>

using namespace std;

bool isPalindrome(string str) {
    char* start=&str[0];
    char* end=&str[str.size()-1];
    bool palindrome;
    for (int i=0;i<str.size();i++) {
        if (*start==*end) {
            palindrome=true;
        }
        else {
            palindrome = false;
            break;
        }
        start++;
        end--;    
    }
    return palindrome;
}

int main() {
    string str1 = "hannah", str2= "Hello";
    cout << boolalpha;
    cout << "Hannah is palindrome: "<< isPalindrome(str1) <<endl;
    cout << "Hello is palindrome: "<< isPalindrome(str2)<<endl;
    
    return 0;    
}
