cmake_minimum_required(VERSION 3.4.1)

get_property(rtdir GLOBAL PROPERTY ROOT_DIR)
include ( ${rtdir}/includes.cmake )

set (my_SOURCES
  GUIDialogAudioSubtitleSettings.cpp
  GUIDialogFullScreenInfo.cpp
  GUIDialogSubtitles.cpp
  GUIDialogTeletext.cpp
  GUIDialogVideoBookmarks.cpp
  GUIDialogVideoInfo.cpp
  GUIDialogVideoOSD.cpp
  GUIDialogVideoSettings.cpp
  GUIDialogOSDSettings.cpp
  )

file(GLOB my_HEADERS *.h)

add_library(
  videodialogs
  STATIC

  ${my_SOURCES}
  ${my_HEADERS}
  )
