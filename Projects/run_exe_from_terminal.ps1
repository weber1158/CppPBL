<#
When a C++ (.cpp) program is executed in VS Code, a corresponding
executable file (.exe) is generated. You can run these .exe files
from your Windows terminal.

For example, let's say that your C++ program generated an execut-
able file called guess_the_number.exe, and the file is stored at 
C:\Users\JohnDoe\C\. You can run the executable in PowerShell:
#>

cd "C:\Users\JohnDoe\C\"
.\guess_the_number         # Equivalent: .\guess_the_number.exe