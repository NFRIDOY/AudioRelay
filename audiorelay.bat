@echo off
cd "c:\Program Files (x86)\AudioRelay"
.\runtime\bin\java.exe -cp "app/audiorelay.jar" com.azefsw.audioconnect.desktop.app.MainKt > %USERPROFILE%/desktop/output.log 2>&1
