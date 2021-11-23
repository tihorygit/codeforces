cmake_minimum_required(VERSION 3.20)
project(Codeforces)

set(CMAKE_CXX_STANDARD 17)

SET(SOURCE_FILES 499B.cpp 25A.cpp 734A.cpp 405A_19.cpp 59A_5.cpp 318A_17.cpp 617A_11.cpp 469A_24.cpp 500A_33.cpp 580A_19.cpp 479A_26.cpp 344A_12.cpp 208A_18.cpp 468A_24.cpp 337A_9.cpp 451A_29.cpp 144A_19.cpp 41A_9.cpp 472A_25.cpp 467A_17.cpp 1A_8.cpp 237A_28.cpp 69A_23.cpp 141A_32.cpp 58A_9.cpp 61A_19.cpp 122A_9.cpp 427A_21.cpp 268A_21.cpp 379A_21.cpp 266B_10.cpp 136A_9.cpp 271A_11.cpp 228A_20.cpp 110A_20.cpp 236A_10.cpp 281A_22.cpp 339A_11.cpp 160A_20.cpp 426B_42.cpp 148A_10.cpp 119A_21.cpp 96A_10.cpp 112A_11.cpp 133A_34.cpp 82A_11.cpp 266A_8.cpp 282A_21.cpp 131A_17.cpp 116A_12.cpp 231A_11.cpp 158B_10.cpp 118A_13.cpp 71A_13.cpp 158A_12.cpp 4A_8.cpp 50A_14.cpp 791A.cpp 977A.cpp 677A.cpp 1030A.cpp 200B.cpp)

add_executable(FakeExe ${SOURCE_FILES})

string(REGEX MATCHALL "[a-zA-Z.0-9_]+|[a-zA-Z.0-9_]+$" SOURCE_FILES "${SOURCE_FILES}")

foreach (FILE ${SOURCE_FILES})
    string(REGEX REPLACE "\\.[^.]*$" "" FILE_WITHOUT_EXT ${FILE})
    add_executable(${FILE_WITHOUT_EXT} ${FILE})
endforeach ()
