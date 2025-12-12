# CMakeList.txt : CMake project for Wave-Crash, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("Wave-Crash")

# Add source to this project's executable.
add_executable (Wave-Crash "src/Wave-Crash.cpp" "src/Wave-Crash.h" "src/WaveCrashAI.cpp" "src/WaveCrashAI.h" "src/wcgamedata.h" "src/Card.cpp" "src/Card.h" "src/Deck.cpp" "src/Deck.h" "src/Player.cpp" "src/Player.h" "src/Tile.cpp" "src/Tile.h" "src/Token.cpp" "src/Token.h" "src/Board.hpp" "src/graphics/Event.h" "src/graphics/Graphics.cpp" "src/graphics/Graphics.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Wave-Crash PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
