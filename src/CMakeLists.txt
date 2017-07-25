set(SOURCES
    betu-veto.c
)

set(INCLUDE_DIRS
    .
)

include_directories(${INCLUDE_DIRS})

add_library(betuveto SHARED ${SOURCES})
