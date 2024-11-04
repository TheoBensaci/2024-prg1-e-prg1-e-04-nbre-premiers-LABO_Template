file(GLOB HeaderfilesInDir
     "*.h"
)
file(GLOB CppfilesInDir
     "*.cpp"
)

target_sources(${PROJECT_NAME}
    PRIVATE
        ${CppfilesInDir}
    PUBLIC
        ${HeaderfilesInDirs}
)