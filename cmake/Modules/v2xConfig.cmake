INCLUDE(FindPkgConfig)
PKG_CHECK_MODULES(PC_V2X v2x)

FIND_PATH(
    V2X_INCLUDE_DIRS
    NAMES v2x/api.h
    HINTS $ENV{V2X_DIR}/include
        ${PC_V2X_INCLUDEDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/include
          /usr/local/include
          /usr/include
)

FIND_LIBRARY(
    V2X_LIBRARIES
    NAMES gnuradio-v2x
    HINTS $ENV{V2X_DIR}/lib
        ${PC_V2X_LIBDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/lib
          ${CMAKE_INSTALL_PREFIX}/lib64
          /usr/local/lib
          /usr/local/lib64
          /usr/lib
          /usr/lib64
)

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(V2X DEFAULT_MSG V2X_LIBRARIES V2X_INCLUDE_DIRS)
MARK_AS_ADVANCED(V2X_LIBRARIES V2X_INCLUDE_DIRS)

