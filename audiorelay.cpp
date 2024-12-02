#include <cstdlib>
#include <iostream>

int main() {
    // Change directory
    int result1 = system("cd \"c:\\Program Files (x86)\\AudioRelay\"");
    if (result1 != 0) {
        std::cerr << "Failed to change directory." << std::endl;
        return 1;
    }

    // Run the Java application and redirect output
    int result2 = system("\"c:\\Program Files (x86)\\AudioRelay\\runtime\\bin\\java.exe\" -cp \"app/audiorelay.jar\" com.azefsw.audioconnect.desktop.app.MainKt > %USERPROFILE%/desktop/output.log 2>&1");
    if (result2 != 0) {
        std::cerr << "Failed to run the Java application." << std::endl;
        return 1;
    }

    std::cout << "Commands executed successfully." << std::endl;
    return 0;
}
