//
// Created by ikostelidis on 27/12/19.
//

#include <ctime>
#include <string>
#include "Config.h"


#define VERSION_MAJOR 0
#define VERSION_BUILD 0
#define VERSION_STRING ("v" TO_STR(VERSION_MAJOR) " (Build #" TO_STR(VERSION_BUILD) ")")

const char *Config::getAppName() {
    return "CppVersionableTemplate";
}

const char *Config::getAppDeveloper() {
    return "Iordanis Kostelidis";
}

const char *Config::getAppCopyright() {
    auto timeObj = time(nullptr);
    auto *localTimeObj = localtime(&timeObj);

    auto startYear = 2019;
    auto currentYear = localTimeObj->tm_year + 1900;

    if (startYear == currentYear) {
        return "© 2019 IEEE IHU Serres";
    }

    auto copyright = new char[100];
    sprintf(copyright, "© 2019-%d IEEE IHU Serres", currentYear);
    return copyright;
}

const char *Config::getAppVersion() {
    return VERSION_STRING;
}
