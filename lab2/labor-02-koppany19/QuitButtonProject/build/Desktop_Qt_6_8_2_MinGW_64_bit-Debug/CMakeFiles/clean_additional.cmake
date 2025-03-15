# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QuitButtonProject_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QuitButtonProject_autogen.dir\\ParseCache.txt"
  "QuitButtonProject_autogen"
  )
endif()
