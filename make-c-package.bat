@echo off
color 4
echo Making a C Package. . .
TIMEOUT /T 5 /NOBREAK
mkdir Includes
mkdir Includes\Lib
mkdir Includes\Bin
mkdir Includes\Modules
mkdir Includes\Scripts
echo {"package.Name": "mypackage"} > Includes/Modules/package.json

echo // Insert C Code Here > Includes/Bin/Code.c

echo Successfully Created A C/C++ Package. Inside Includes/

pause

