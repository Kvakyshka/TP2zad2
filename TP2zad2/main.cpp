
#include <iostream>
#include <fstream> 
#include <sstream>

using namespace std;

int main() {
    ifstream file("test.txt");

    string line; //ќбъ€вл€ет строку дл€ хранени€ текущей строки из файла
    if (!file.is_open())
        cout << "error" << endl;
    else
    {
        while (getline(file, line)) { //Ёто считывает строки из файла,пока не будет достигнут конец файла.
            istringstream iss(line); //создает строковый поток из текущей строки

            string word; 
            while (iss >> word) { //считывает слова из этого строкового потока до конца строки
                if (word.size() == 2 && isdigit(word[0]) && isdigit(word[1])) {
                    cout << line << endl; //он печатает текущую строку и выходит из цикла
                    break;
                }
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
//    if (!file.is_open())
//        cout << "error" << endl;
//    else
//    {
//        while (getline(file, line))
//        {
//            flag = 0;
//            istringstream iss(line);
//
//            string word;
//
//            while (iss >> word)
//            {
//                for (int i = 0; i < word.size(); i++)
//                {
//                    if (!(isdigit(word[i])))
//                        flag1 = 0;
//                    if ((isdigit(word[i])) && flag1 == 0)
//                    {
//                        i++;
//                        if (isdigit(word[i]))
//                        {
//                            i++;
//                            if (!(isdigit(word[i]))) 
//                            {
//                                cout << line << endl;
//                                flag = 1;
//
//                            }
//                            else
//                                flag1 = 1;
//                        }
//                    }
//                    if (flag == 1)
//                        break;
//                }
//                if (flag == 1)
//                    break;
//            }
//
//
//        }
//    }
//    return 0;
//}


