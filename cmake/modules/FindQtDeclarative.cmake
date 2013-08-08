if (NOT QT_QTDECLARATIVE_FOUND)
    find_path(QT_QTDECLARATIVE_INCLUDE_DIR NAMES QtDeclarative PATHS ${QT_HEADERS_DIR}/QtDeclarative NO_DEFAULT_PATH)
    find_library(QT_QTDECLARATIVE_LIBRARY NAMES QtDeclarative HINTS ${QT_LIBRARY_DIR})

    if (QT_QTDECLARATIVE_INCLUDE_DIR AND QT_QTDECLARATIVE_LIBRARY)
        set(QT_QTDECLARATIVE_FOUND ON)
    endif ()
endif ()
