#include <iostream>
#include <fstream>
#include <sstream>

int main() {
    std::string filename = "tokens.h";
    std::string file_content;

    /** CARACTER POR CARACTER **/
    std::ifstream ifs(filename); //filebuf
    char c = ifs.get();

    while(ifs.good()) {
        //std::cout << c;
        file_content += c;
        c = ifs.get();
    }

    ifs.close();
    //std::cout << file_content << "\n";
    file_content = "";

    /** Línea por línea **/
    if(ifs.eof()) //is eofbit set?
        ifs.open(filename);

    while(!ifs.eof()){
        std::getline(ifs, file_content);
        //std::cout << file_content << std::endl;
    }
    ifs.close();
    file_content = "";

    /** Palabra por palabra **/
    if(ifs.eof())
        ifs.open(filename);
    
    std::getline(ifs, file_content);
    std::string word;
    std::stringstream string_stream(file_content);
    while(string_stream.good()) {
        string_stream >> word;
        std::cout << word << std::endl;
    }
}