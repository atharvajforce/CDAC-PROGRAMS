#include <iostream>

using namespace std;

// A custom String class to demonstrate string operations without standard libraries
class String {
private:
    char* m_data;    // Pointer to the dynamically allocated character array
    int m_length;    // Length of the string (number of characters, excluding null terminator)

    // Private helper function to manually calculate the length of a C-style string
    int my_strlen(const char* str) const {
        if (!str) {
            return 0;
        }
        int len = 0;
        // Iterate until the null terminator is found
        while (str[len] != '\0') {
            len++;
        }
        return len;
    }

    // Private helper function to manually copy a C-style string
    void my_strcpy(char* dest, const char* src) const {
        int i = 0;
        // Copy characters one by one until the null terminator
        while (src[i] != '\0') {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0'; // Manually add the null terminator
    }

    // Private helper function to manually compare two C-style strings
    int my_strcmp(const char* str1, const char* str2) const {
        while (*str1 && (*str1 == *str2)) {
            str1++;
            str2++;
        }
        return *(const unsigned char*)str1 - *(const unsigned char*)str2;
    }

public:
    // Default constructor
    String(const char* str = "") {
        m_length = my_strlen(str);
        // Allocate memory for the string data + 1 for the null terminator
        m_data = new char[m_length + 1];
        my_strcpy(m_data, str);
    }

    // Destructor to free the dynamically allocated memory
    ~String() {
        delete[] m_data;
    }

    // Copy constructor for deep copying
    String(const String& other) {
        m_length = other.m_length;
        m_data = new char[m_length + 1];
        my_strcpy(m_data, other.m_data);
    }

    // Copy assignment operator for deep copying
    String& operator=(const String& other) {
        // Self-assignment check to prevent issues
        if (this != &other) {
            // Free old memory
            delete[] m_data;
            // Allocate new memory and copy data
            m_length = other.m_length;
            m_data = new char[m_length + 1];
            my_strcpy(m_data, other.m_data);
        }
        return *this;
    }

    // Overload the + operator for string concatenation
    String operator+(const String& other) const {
        int newLength = m_length + other.m_length;
        char* temp = new char[newLength + 1];

        // Manually copy the first string
        for (int i = 0; i < m_length; ++i) {
            temp[i] = m_data[i];
        }
        // Manually append the second string
        for (int i = 0; i < other.m_length; ++i) {
            temp[m_length + i] = other.m_data[i];
        }
        temp[newLength] = '\0';

        String result(temp);
        delete[] temp;
        return result;
    }

    // Overload the == operator for string comparison
    bool operator==(const String& other) const {
        if (m_length != other.m_length) {
            return false;
        }
        return my_strcmp(m_data, other.m_data) == 0;
    }

    // Returns the length of the string
    int getLength() const {
        return m_length;
    }

    // Returns a substring of the string
    String substring(int start, int len) const {
        if (start < 0 || start >= m_length || len <= 0) {
            return String(""); // Return an empty string on invalid input
        }

        if (start + len > m_length) {
            len = m_length - start;
        }

        char* temp = new char[len + 1];
        for (int i = 0; i < len; ++i) {
            temp[i] = m_data[start + i];
        }
        temp[len] = '\0'; // Null-terminate the new string

        String result(temp);
        delete[] temp;
        return result;
    }

    // Prints the string content
    void print() const {
        cout << m_data << endl;
    }
};

int main() {
    // Creating String objects
    String s1("Hello, ");
    String s2("World!");

    cout << "Original Strings:" << endl;
    cout << "s1: ";
    s1.print();
    cout << "s2: ";
    s2.print();

    // Demonstrating Concatenation
    String s3 = s1 + s2;
    cout << "\nAfter Concatenation (s1 + s2):" << endl;
    cout << "s3: ";
    s3.print();

    // Demonstrating Length
    cout << "\nLength of s3: " << s3.getLength() << endl;

    // Demonstrating Substring
    String sub = s3.substring(7, 5);
    cout << "\nSubstring of s3 starting at index 7 with length 5:" << endl;
    cout << "sub: ";
    sub.print();

    // Demonstrating Comparison
    String s4("Hello, World!");
    cout << "\nComparison of s3 and s4 ('Hello, World!'):" << endl;
    if (s3 == s4) {
        cout << "Strings are equal." << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }

    String s5("Goodbye");
    cout << "\nComparison of s3 and s5 ('Goodbye'):" << endl;
    if (s3 == s5) {
        cout << "Strings are equal." << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }
    
    return 0;
}
