cmake -B build . -GNinja&&cmake --build build&& xcopy "script" ".\bin\script" /E /H /C /I &&.\bin\main
