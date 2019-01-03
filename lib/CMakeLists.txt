add_library(bencode
            BInteger.cpp
            BString.cpp
            BList.cpp
            BDictionary.cpp)

target_include_directories(bencode PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
