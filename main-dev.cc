#include <drogon/drogon.h>
int main() {
    drogon::app().loadConfigFile("config-dev.json");
    drogon::app().run();
    return 0;
}
