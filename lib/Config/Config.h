#ifndef C4D74590_85C9_4B24_94C8_C731DAF71C34
#define C4D74590_85C9_4B24_94C8_C731DAF71C34

#include <Arduino.h>

class Config
{
private:
    
public:
    uint16_t exampleParam1;
    uint8_t  exampleParam2;
    String   exampleParam3;

    void saveConfig(void);
    void readConfig(void);
    void showConfig(Stream &serialport);
    Config();
    ~Config();
};




#endif /* C4D74590_85C9_4B24_94C8_C731DAF71C34 */
