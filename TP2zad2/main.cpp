
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
    ifstream file("test.txt");

    string line;
    while (getline(file, line)) {
        istringstream iss(line);

        string word;
        while (iss >> word) {
            if (word.size() == 2 && isdigit(word[0]) && isdigit(word[1])) {
                cout << line << endl;
                break;
            }
        }
    }

    return 0;
}

//#include <iostream>
//#include <fstream> 
//#include <sstream>
//
//using namespace std;
//
//int main() {
//    ifstream file("test.txt");
//    int flag = 0;
//    int flag1 = 0;
//    string line;
//    while (getline(file, line))
//    {
//        flag = 0;
//        istringstream iss(line);
//
//        string word;
//        while (iss >> word)
//        {
//            for (int i = 0; i < word.size(); i++)
//            {
//                if (!(isdigit(word[i])))
//                    flag1 = 0;
//                if ((isdigit(word[i])) && flag1 == 0)
//                {
//                    i++;
//                    if (isdigit(word[i]))
//                    {
//                        i++;
//                        if (!(isdigit(word[i])))
//                        {
//                            cout << line << endl;
//                            flag = 1;
//
//                        }
//                        else
//                            flag1 = 1;
//                    }
//                }
//                if (flag == 1)
//                    break;
//            }
//            if (flag == 1)
//                break;
//        }
//
//
//    }
//    return 0;
//}


