First off, make sure MinGW is installed and know where the folder for MinGw is. Then append MinGw\bin into User or System Environment Variable.
    Then use "g++" to compile the program.

The command for 1 cpp: g++ filename.cpp -o customOutputName

The command for multiple cpp: g++ filename1.cpp filename2.cpp filename3.cpp -o customOutputName
        (Notice, there are no filename.hpp. The .hpp file must be in the same folder as the .cpp to work. Because it looks for it there to find all the
            classes and/or other .cpp files.)