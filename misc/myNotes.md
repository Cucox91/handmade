# Here are all my notes for the Project

## Day 1

### Setup Info
To execute the .bat file you need to do it like .\build.bat

You will need to add cl to the "path".<br/>

That is located here:<br/>
C:\Program Files\Microsoft Visual Studio\18\Community\VC\Auxiliary\Build<br/>

And the file is the following:<br/>
vcvarsall.bat<br/>

And we paln to compile x64 code at all times.<br/>

The CL we need to use I think is the one in:<br/>
C:\Program Files\Microsoft Visual Studio\18\Community\SDK\ScopeCppSDK\vc15\VC\bin<br/>
Google says is this one: C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\[your-version]\bin\Hostx64\x64 <br/>
in my case: C:\Program Files\Microsoft Visual Studio\18\Community\VC\Tools\MSVC\14.51.36231\bin\Hostx64\x64 <br/>


Interestingly, if we add a .bat file to the path below, this one will execute
every time we start the computer:
C:\Users\razie\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Startup\startup.bat

### Debugging

The cl -Zi parameter is to generate debug info. And the path to generate the .exe
Then from there we call VS by doing:
devenv \build\win32_handmade.exe.
The .exe will contain debug steps inside. 

Notice that we declare most of the time with relative path.

The assets goes on the data directory.

For the .exe properties inside the solution explorer. Set the working directory
as : W:\handmade\data

The one calling during the debuggiong session is the C Runtime Library (CRT).
