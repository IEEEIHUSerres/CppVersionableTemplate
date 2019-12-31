//
// Created by ikostelidis on 28/12/19.
//

#include <iostream>
#include "../resources/Config.h"

int main() {
    std::cout << Config::getAppName() << " " << Config::getAppVersion() << std::endl;
    std::cout << "Developed by " << Config::getAppDeveloper() << std::endl << Config::getAppCopyright() << std::endl;
}