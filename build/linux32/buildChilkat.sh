#!/bin/bash -ev

cppDefs="-DCK_LINUX -D_GNU_SOURCE"
mopt="-m32"
libDir=-L"."
phpIncludeDir="/home/chilkat/workspace/php/5.6"
cppOpts="-g0 -Werror -fmessage-length=0 -fno-stack-protector -fPIC -fvisibility-inlines-hidden -fvisibility=hidden"
incDirs="-I$phpIncludeDir -I$phpIncludeDir/main -I$phpIncludeDir/TSRM -I$phpIncludeDir/Zend -I$phpIncludeDir/ext -I$phpIncludeDir/ext/date/lib"

g++ $mopt $cppOpts $incDirs $cppDefs ../chilkatPhpNW.cxx $libDir -shared -o"chilkat_9_5_0.so" -lchilkat-9.5.0 -lpthread -lresolv



