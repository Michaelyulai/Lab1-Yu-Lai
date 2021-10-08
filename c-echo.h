#include <iostream>

std::string echo(int length, char** chars) {
    std::string ret = "";

    for(int i = 1; i < length; i++) {

        if(chars[i] != NULL) {

            if(ret.length() > 0) {
                ret += " ";
            }

            ret += chars[i];
            
        }
    }

    return ret;
}
