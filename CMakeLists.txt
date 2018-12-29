cmake_minimum_required(VERSION 3.0)
project(EsercitazioniFondamenti)
enable_language(C)

find_package(Curses)
if(CURSES_HAVE_NCURSES_H)
  include_directories(${CURSES_INCLUDE_DIR})
endif()

set(CALORE
    Calore/functions.c
    Calore/main.c
   )

set(CARATTEREASCII
    CarattereASCII/functions.c
    CarattereASCII/main.c
   )

set(CINQUENUMERI
    CinqueNumeri/functions.c
    CinqueNumeri/main.c
   )

set(DATIRETTANGOLO
    DatiRettangolo/functions.c
    DatiRettangolo/main.c
   )

set(FORMATODATA
    FormatoData/functions.c
    FormatoData/main.c
   )

set(MEDIACONSENTINELLA
    MediaConSentinella/functions.c
    MediaConSentinella/main.c
   )

set(MEDIACONVETTORE
    MediaConVettore/functions.c
    MediaConVettore/main.c
   )

set(MESESUCCESSIVO
    MeseSuccessivo/functions.c
    MeseSuccessivo/main.c
   )

set(NUMERIPARI
   NumeriPari/functions.c
   NumeriPari/main.c
  )

set(ORDINAREARRAY
    OrdinareArray/functions.c
    OrdinareArray/main.c
   )

set(SEPARAZIONECIFRE
    SeparazioneCifre/functions.c
    SeparazioneCifre/main.c
   )

set(SERIEPARIDISPARI
   SeriePariDispari/functions.c
   SeriePariDispari/main.c
  )

set(SONOMULTIPLI
    SonoMultipli/functions.c
    SonoMultipli/main.c
   )

set(SUDOKU
    Sudoku/functions.c
    Sudoku/main.c
   )

set(TIPOTRIANGOLO
    TipoTriangolo/functions.c
    TipoTriangolo/main.c
   )

set(TRASPONIMATRICE
   TrasponiMatrice/functions.c
   TrasponiMatrice/main.c
  )

set(TRIANGOLOSTELLATO
   TriangoloStellato/functions.c
   TriangoloStellato/main.c
  )

set(ALL_SOURCES
    Calore/functions.c
    CarattereASCII/functions.c
    CinqueNumeri/functions.c
    DatiRettangolo/functions.c
    FormatoData/functions.c
    MediaConSentinella/functions.c
    MediaConVettore/functions.c
    MeseSuccessivo/functions.c
    NumeriPari/functions.c
    OrdinareArray/functions.c
    SeparazioneCifre/functions.c
    SeriePariDispari/functions.c
    SonoMultipli/functions.c
    Sudoku/functions.c
    TipoTriangolo/functions.c
    TrasponiMatrice/functions.c
    TriangoloStellato/functions.c
    00-Main/common.c
   )

if(CURSES_HAVE_NCURSES_H)
  set(NCURSED
      ${ALL_SOURCES}
      00-Main/maincursed.c
      )
endif()

set(CURSELESS
    ${ALL_SOURCES}
    00-Main/maincurseless.c
    )

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY
    ${CMAKE_BINARY_DIR}/bin
    )

if(CURSES_HAVE_NCURSES_H)
  add_executable(${PROJECT_NAME}
                 ${NCURSED}
                 )
  target_link_libraries(${PROJECT_NAME}
                        ${CURSES_LIBRARIES}
                        menu
                       )

  add_executable(curseless
                 ${CURSELESS}
                 )
  target_link_libraries(curseless
                        m
                       )
else()
  add_executable(${PROJECT_NAME}
                 ${CURSELESS}
                 )
endif()
target_link_libraries(${PROJECT_NAME}
                      m
                     )

add_executable(calore
               ${CALORE}
               )

add_executable(carattere_ascii
               ${CARATTEREASCII}
              )

add_executable(cinque_numeri
               ${CINQUENUMERI}
               )
target_link_libraries(cinque_numeri
                      m
                     )

add_executable(dati_rettangolo
               ${DATIRETTANGOLO}
              )
target_link_libraries(dati_rettangolo
                      m
                     )

add_executable(formato_data
               ${FORMATODATA}
              )

add_executable(media_con_sentinella
               ${MEDIACONSENTINELLA}
               )

add_executable(media_con_vettore
               ${MEDIACONVETTORE}
              )

add_executable(mese_successivo
               ${MESESUCCESSIVO}
              )

add_executable(numeri_pari
               ${NUMERIPARI}
              )


add_executable(ordinare_array
               ${ORDINAREARRAY}
              )

add_executable(separazione_cifre
               ${SEPARAZIONECIFRE}
              )

add_executable(sono_multipli
               ${SONOMULTIPLI}
              )

add_executable(sudoku
               ${SUDOKU}
              )

add_executable(tipo_triangolo
               ${TIPOTRIANGOLO}
              )

add_executable(trasponi_matrice
               ${TRASPONIMATRICE}
              )

add_executable(triangolo_stellato
               ${TRIANGOLOSTELLATO}
              )
