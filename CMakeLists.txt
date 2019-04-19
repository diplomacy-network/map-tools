cmake_minimum_required(VERSION 3.13)
project(dnw_map_tools)

set(CMAKE_CXX_STANDARD 14)


#LUADIST LIBSQLITE3
FIND_PATH(SQLITE3_INCLUDE_DIR NAMES sqlite3.h)

# Look for the library.
FIND_LIBRARY(SQLITE3_LIBRARY NAMES sqlite)

# Handle the QUIETLY and REQUIRED arguments and set SQLITE3_FOUND to TRUE if all listed variables are TRUE.
INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(SQLITE3 DEFAULT_MSG SQLITE3_LIBRARY SQLITE3_INCLUDE_DIR)

# Copy the results to the output variables.
IF(SQLITE3_FOUND)
    SET(SQLITE3_LIBRARIES ${SQLITE3_LIBRARY})
    SET(SQLITE3_INCLUDE_DIRS ${SQLITE3_INCLUDE_DIR})
ELSE(SQLITE3_FOUND)
    SET(SQLITE3_LIBRARIES)
    SET(SQLITE3_INCLUDE_DIRS)
ENDIF(SQLITE3_FOUND)

MARK_AS_ADVANCED(SQLITE3_INCLUDE_DIRS SQLITE3_LIBRARIES)
#LUADIST LIBSQLITE3 - ENDE



file(GLOB dnw_map_tools_SRC
        "*.hpp"
        "*.h"
        "*.cpp"
        )

add_executable(dnw_map_tools ${dnw_map_tools_SRC})