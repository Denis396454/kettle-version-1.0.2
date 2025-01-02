#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  fstream fout;
  fout.open("a.cpp");

  if (!fout.is_open()) {
    cout << "Error0";
  } else {
    fout << "#include <iostream>\n#include <fstream>\n#include <string>\nusing namespace std;\nint main(){";
  }

  string iy;
  cin >> iy;

  ifstream inputFile(iy); // Открытие файла для чтения

  if (!inputFile) {
    cerr << ' ' << endl;
    return 1; // Завершение программы с ошибкой
  }

  string line;
  while (getline(inputFile, line)) { // Чтение файла построчно
    string input = line;
    if (input.substr(0, 1) == "s") {
      std::cout << line.size();
    }

    if (line.substr(0, 1) == "+") {
      cout << "+";
    }
    if (line.substr(0, 2) == "pi") {
      cout << 3.14;
    }
    if (line.substr(0, 3) == "tea") {
      cout << "kettle tea secret version     ";
    }
    if (line.substr(0, 3) == "int") {
      string otp = input.substr(0, input.size());
      /*
                 string otp;
                 int yut = 0;
                 string opp;
                for (int ttyttt = 4; input[ttyttt] < '=';){
		otp = otp + input[ttyttt];
                                   yut = ttyttt;
		ttyttt++;
}
                  // for (int ttyttot = yut; input[ttyttot] < ';';){
		opp = input.substr(yut, input.size());
                                   
		// ttyttot++;

}*/
      if (!fout.is_open()) {
        cout << "Error1";
      } else {
        fout << "\n" << otp << "\n";
      }
    }

    if (line.substr(0, 3) == "cat") {
      cout << "cat";
    } else if (line.size() >= 5) {
      if (line.substr(0, 5) == "print") { // Проверяем, начинается ли строка с "print"
        string op;
        for (int ttytt = 6; ttytt < input.size();) {
          op = op + input[ttytt];
          ttytt++;
        }

        if (!fout.is_open()) {
          cout << "Error2";
        } else {
          fout << "\n cout << " << op << "<< endl; \n";
        }
      }

      inputFile.close(); // Закрытие файла

      if (!fout.is_open()) {
        cout << "Error99";
      } else {
        fout << "\n return 0; \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n }";
      }

      fout.close();

      return 0;
    }
  }
}