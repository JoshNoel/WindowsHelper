cmake_minimum_required(VERSION 3.6)

set(inc_dir winhelp)
set(HEADER_FILE_LIST ErrorHandling.h WindowsHelper.h)

prepend(HEADER_FILE_LIST ${CMAKE_CURRENT_SOURCE_DIR}/${inc_dir})
set(HEADER_FILE_LIST ${HEADER_FILE_LIST} PARENT_SCOPE)

set(additional_include_dirs "${additional_include_dirs} ${CMAKE_CURRENT_SOURCE_DIR}" PARENT_SCOPE)
