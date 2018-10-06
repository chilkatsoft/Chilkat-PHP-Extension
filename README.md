
# Chilkat PHP Extension
#### Current Version: 9.5.0.76 pre-release

This repo provides a means for building the Chilkat PHP Extension to match your PHP version and configuration exactly.  At this time, only the files for the 64-bit Linux build are provided.  


## Building the Chilkat PHP Extension on 64-bit Linux

1. Download the ZIP and unzip.
2. cd build/linux64
3. If necessary: chmod a+x *.sh
4. Open buildChilkat.sh for editing.
5. Point the "phpIncludeDir" variable to the directory where your PHP includes are located.  For example:  phpIncludeDir="/home/john/php/5.6"
6. Run buildChilkat.sh.  This produces "chilkat\_9\_5\_0.so".
7. Copy the .so to your PHP extensions directory.  See [http://www.chilkatsoft.com/installPhpExtension.asp
](http://www.chilkatsoft.com/installPhpExtension.asp)




