#include "lex/Lexer.h"

#include <iostream>

using std::cout;
using std::endl;

int main(int argc, const char *argv[]) {
    Lexer lexer;
    lexer.openFile("/Users/liufengkai/Documents/JavaProject/Hobby/lfkdsk.hy");

    while (true) {
        Token *token = lexer.nextToken();
        if (token == nullptr)
            break;
        cout << token->getTagNum() << endl;
    }

//    lexer.printWordTable();
    return 0;
}