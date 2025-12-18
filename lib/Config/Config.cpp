#include "Config.h"
#include <Preferences.h>

Preferences preferences;

Config::Config(){
}

Config::~Config(){
}

    void Config::saveConfig(void){
        preferences.begin("myApp", false);

        preferences.putUShort("someValue1", this->exampleParam1);
        preferences.putChar("someValue2", this->exampleParam2);
        preferences.putString("someValue3", this->exampleParam3);
        
        preferences.end();
    }
    

    void Config::readConfig(void){
        preferences.begin("myApp", false);

        this->exampleParam1 = preferences.getUShort("someValue1", 16000);
        this->exampleParam2 = preferences.getChar("dacFor10V", 255);
        this->exampleParam3 = preferences.getString("someValue3", "default");
    
        preferences.end();

    }

    void Config::showConfig(Stream &serialport){
        serialport.print(F("someValue1 = ")); serialport.println(this->exampleParam1 );
        serialport.print(F("someValue2 = ")); serialport.println(this->exampleParam2 );
        serialport.print(F("someValue3 = ")); serialport.println(this->exampleParam3 );        
    }