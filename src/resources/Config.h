//
// Created by ikostelidis on 27/12/19.
//

#ifndef CPPVERSIONABLETEMPLATE_CONFIG_H
#define CPPVERSIONABLETEMPLATE_CONFIG_H

#define TO_STR2(x) #x
#define TO_STR(x) TO_STR2(x)

class Config {
public:
    static const char *getAppName();

    static const char *getAppDeveloper();

    static const char *getAppCopyright();

    static const char *getAppVersion();
};


#endif //CPPVERSIONABLETEMPLATE_CONFIG_H
