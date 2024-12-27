# INFORME AD8232
## Lectura del modulo ad8232
El modulo parece detectar el movimiento del musculo "bicep"

Estas visualizaciones son captadas gracias a un filtro pasa-bajo, 
los datos en bruto no estaban reflejando diferencias notables en el musculo.

Los electrodos utilizados, son marca 3M Red Dot, el modulo AD8232 me libero de cierta preocupacion, dandome 3 cables para la referencia del musculo.

probe promedio, datos en bruto y filtro pasa-bajo, el que parece haber resultado mejor fue el filtro, faltan datos para comprobar.

    El amarillo(L) lo conecte al musculo como referencia
    El Verde(R) lo conecte al inverso del musculo como referencia
    El Rojo(R) lo conecte al hombro (Hueso) para referencia a tierra

Dato: los colores me suenan raros, en mi cabeza rojo es senal principal, verde tierra y amarillo referencia 2. Deberia realizar algunas pruebas con los electrodos en las diferentes combinaciones, el problema es que serian 9 combinaciones 3*3 para comprobar cada una de ellas.

|Lugar      | Color    |
|-----------|----------|
| Musculo   | Amarillo |
| Invertido | Verde    |
| Hueso     | Rojo     |


| Estirado | Promedio         | Filtrado         |
|----------|------------------|------------------|
|          | 297              | 447              |
|          | 292              | 433              |
|          | 292              | 428              |
|          | 292              | 442              |
|          | 292              | 463              |
|          | 292              | 482              |
|          | 649              | 498              |
|          | 505              | 493              |
|          | 425              | 482              |
|          | 338              | 465              |
|          | 252              | 443              |
|          | 252              | 424              |
| Min      | 252              | 424              |
| Max      | 649              | 498              |
| Promedio | 348,166666666667 | 458,333333333333 |



| Contraido | Promedio | Filtrado         |
|-----------|----------|------------------|
|           | 337      | 550              |
|           | 337      | 560              |
|           | 653      | 570              |
|           | 652      | 578              |
|           | 652      | 585              |
|           | 651      | 592              |
|           | 649      | 597              |
|           | 636      | 599              |
|           | 641      | 601              |
|           | 580      | 594              |
|           | 545      | 585              |
|           | 432      | 565              |
| Min       | 337      | 550              |
| Max       | 653      | 601              |
| Promedio  | 563,75   | 581,333333333333 |


A destacar: el Promedio hace referencia al promedio(valga la redundancia) de 100 senales en bruto

# Promedio sin filtrar

    No se ve claramente la diferencia en las minimas y maximas del brazo contraido y estirado
    Lo que si podemos observar en una diferencia en el promedio de los datos sin filtrar

# Filtrado 

    En los datos filtrados podemos observar diferencias.
    Podemos ver que el maximo del brazo estirado no pasa el minimo del brazo flexionado, lo cual refleja que puede ser una medicion correcta
    Destacar que el minimo y el maximo de cada una varia en 100 unidades, lo cual tiene sentido pues son senales no deberia ser algo tan discreto.

    Esta medicion puede parecer correcta

| CASO       | Intervalo |
|------------|-----|
| Relajado   | 400 ~ 500 |
| Flexionado | 500 ~ 600 |

----

|Lugar      | Color    |
|-----------|----------|
| Musculo   | Rojo     |
| Invertido | Verde    |
| Hueso     | Amarillo |

| Estirado | Promedio | Filtrado |
|----------|----------|----------|
|          | 261      | 337      |
|          | 243      | 328      |
|          | 372      | 347      |
|          | 602      | 375      |
|          | 648      | 402      |
|          | 622      | 421      |
|          | 543      | 428      |
|          | 330      | 416      |
|          | 278      | 400      |
|          | 250      | 384      |
|          | 244      | 371      |
|          | 244      | 371      |
|          |          |          |
| Min      | 243      | 328      |
| Max      | 648      | 428      |
|Promedio	|386,416666666667|	381,666666666667|



| Contraido | Promedio | Filtrado         |
|-----------|----------|------------------|
|           | 321      | 335              |
|           | 338      | 339              |
|           | 338      | 342              |
|           | 360      | 343              |
|           | 343      | 342              |
|           | 344      | 342              |
|           | 327      | 340              |
|           | 337      | 339              |
|           | 324      | 338              |
|           | 324      | 336              |
|           | 317      | 334              |
|           | 320      | 333              |
| Min       | 317      | 333              |
| Max       | 360      | 343              |
| Promedio  | 332,75   | 338,583333333333 |

# Promedio sin filtrar

    No se ve claramente la diferencia en las minimas y maximas del brazo contraido y estirado
    Extranamente en el promedio podemos ver que el brazo contraido es menor que con el brazo estirado, no me convence como resultado, pues varian demasiado las senales dando como minimo 243 y maximo 648 con un intervalo de 400 unidades, lo cual no me genera confianza, luego, ademas las mediciones en brazo contraido estan entre 320 - 360 por lo que estan en medio de las otras mediciones
 
# Filtrado 

    Pasa algo similar al promedio de datos brutos, pues ante un extremo como tener el brazo estirado y el otro como tener el brazo totalmente contraido, los valores del contraido se encuentran en el intervalo del brazo estirado, por lo que o esta midiendo mal alguno de los dos o ambos.


----

|Lugar      | Color    |
|-----------|----------|
| Musculo   | Verde    |
| Invertido | Rojo     |
| Hueso     | Amarillo |


| Estirado | Promedio | Filtrado |
|----------|----------|----------|
|          | 298      | 295      |
|          | 288      | 296      |
|          | 268      | 295      |
|          | 332      | 299      |
|          | 335      | 303      |
|          | 342      | 308      |
|          | 347      | 312      |
|          | 352      | 315      |
|          | 338      | 317      |
|          | 351      | 320      |
|          | 351      | 317      |
|          | 351      | 315      |
|          |          |          |
| Min      | 268      | 295      |
| Max      | 352      | 320      |
|Promedio   |329,416666666667	|307,666666666667|


| Contraido | Promedio         | Filtrado         |
|-----------|------------------|------------------|
|           | 154              | 251              |
|           | 284              | 256              |
|           | 322              | 264              |
|           | 372              | 276              |
|           | 370              | 285              |
|           | 364              | 293              |
|           | 360              | 299              |
|           | 345              | 296              |
|           | 345              | 284              |
|           | 102              | 267              |
|           | 217              | 265              |
|           | 252              | 266              |
| Min       | 102              | 251              |
| Max       | 372              | 299              |
| Promedio  | 290,583333333333 | 275,166666666667 |

# Promedio sin filtrar

    Los datos del musculo contraido se encuentran en el intervalo del musculo estirado

# Filtrado 

    En los datos filtrados podemos observar diferencias.
    Podemos ver que el maximo del brazo contraido pasa por poco (4 unidades) el minimo del brazo estirado, lo cual refleja que puede ser una medicion correcta
    Destacar que el minimo y el maximo de cada una varia en 40 unidades maximo, lo cual tiene sentido pues son senales no deberia ser algo tan discreto.

    Esta medicion puede parecer correcta

| CASO       | Intervalo |
|------------|-----|
| Relajado   | 290 ~ 330 |
| Flexionado | 250 ~ 300 |


----

|Lugar      | Color    |
|-----------|----------|
| Musculo   | Amarillo |
| Invertido | Rojo     |
| Hueso     | Verde    |


| Estirado | Promedio         | Filtrado |
|----------|------------------|----------|
|          | 650              | 534      |
|          | 644              | 543      |
|          | 644              | 552      |
|          | 617              | 555      |
|          | 485              | 543      |
|          | 445              | 528      |
|          | 310              | 504      |
|          | 310              | 481      |
|          | 310              | 465      |
|          | 310              | 460      |
|          | 310              | 475      |
|          | 310              | 492      |
| Min      | 310              | 460      |
| Max      | 650              | 555      |
| Promedio | 445,416666666667 | 511      |

| Contraido | Promedio         | Filtrado |
|-----------|------------------|----------|
|           | 225              | 477      |
|           | 650              | 494      |
|           | 648              | 510      |
|           | 648              | 523      |
|           | 627              | 530      |
|           | 534              | 526      |
|           | 449              | 513      |
|           | 331              | 492      |
|           | 273              | 468      |
|           | 239              | 445      |
|           | 239              | 430      |
|           | 239              | 433      |
| Min       | 225              | 430      |
| Max       | 650              | 530      |
| Promedio  | 425,166666666667 | 486,75   |

# Promedio sin filtrar

    Los datos del musculo contraido se encuentran en el intervalo del musculo estirado, destacar que ambos tienen como maximo 650

# Filtrado 

    Los datos del musculo contraido se encuentran en el intervalo del musculo estirado, Destacar que pareciese que el intervalo fue "movido" aprox 25 unidades a la "derecha" pasando de un minimo de 460 -> 430 y un maximo de 555 -> 530

----

|Lugar      | Color    |
|-----------|----------|
| Musculo   | Rojo     |
| Invertido | Amarillo |
| Hueso     | Verde    |


| Estirado | Promedio         | Filtrado |
|----------|------------------|----------|
|          | 337              | 461      |
|          | 284              | 441      |
|          | 266              | 422      |
|          | 266              | 404      |
|          | 266              | 392      |
|          | 266              | 392      |
|          | 266              | 407      |
|          | 647              | 431      |
|          | 647              | 452      |
|          | 645              | 471      |
|          | 615              | 482      |
|          | 480              | 477      |
| Min      | 266              | 392      |
| Max      | 647              | 482      |
| Promedio | 415,416666666667 | 436      |

| Contraido | Promedio | Filtrado |
|-----------|----------|----------|
|           | 233      | 394      |
|           | 233      | 403      |
|           | 592      | 422      |
|           | 647      | 445      |
|           | 627      | 460      |
|           | 556      | 465      |
|           | 453      | 459      |
|           | 343      | 444      |
|           | 276      | 425      |
|           | 254      | 408      |
|           | 254      | 434      |
|           | 254      | 455      |
| Min       | 233      | 394      |
| Max       | 647      | 465      |
| Promedio  | 393,5    | 434,5    |

# Promedio sin filtrar

    Los datos del musculo contraido se encuentran en el intervalo del musculo estirado, destacar que ambos tienen como maximo 647

# Filtrado 

    Los datos del musculo contraido se encuentran en el intervalo del musculo estirado, destacar que el minimo de ambos es similar 392 - 394

----

|Lugar      | Color    |
|-----------|----------|
| Musculo   | Verde    |
| Invertido | Amarillo |
| Hueso     | Rojo     |


| Estirado | Promedio         | Filtrado |
|----------|------------------|----------|
|          | 365              | 272      |
|          | 231              | 266      |
|          | 178              | 257      |
|          | 197              | 253      |
|          | 262              | 256      |
|          | 305              | 262      |
|          | 343              | 272      |
|          | 360              | 281      |
|          | 368              | 289      |
|          | 368              | 295      |
|          | 368              | 298      |
|          | 257              | 290      |
| Min      | 178              | 253      |
| Max      | 368              | 298      |
| Promedio | 300,166666666667 | 274,25   |

| Contraido | Promedio         | Filtrado         |
|-----------|------------------|------------------|
|           | 287              | 315              |
|           | 250              | 308              |
|           | 205              | 298              |
|           | 203              | 290              |
|           | 238              | 287              |
|           | 269              | 287              |
|           | 300              | 290              |
|           | 325              | 295              |
|           | 347              | 301              |
|           | 359              | 307              |
|           | 360              | 312              |
|           | 359              | 317              |
| Min       | 203              | 287              |
| Max       | 360              | 317              |
| Promedio  | 291,833333333333 | 300,583333333333 |


# Promedio sin filtrar

    Los datos del musculo contraido se encuentran en el intervalo del musculo estirado, destacar que ambos tienen como maximo 650

# Filtrado 

    En los datos filtrados podemos observar diferencias.
    Podemos ver que el minimo del brazo contraido se encuentra por poco en el intervalo de el maximo del brazo estirado, lo cual refleja que puede ser una medicion correcta
    Destacar que el minimo y el maximo de cada una varia en 30 unidades maximo, lo cual tiene sentido pues son senales no deberia ser algo tan discreto.

    Esta medicion apunta a ser correcta aunque tiene cosas que me llaman la atencion para ser haber medido dos extremos

    | CASO       | Intervalo |
    |------------|-----|
    | Relajado   | 253 ~ 300 |
    | Flexionado | 290 ~ 320 |

# Primera conclusion

Descartaremos los datos que en ambos casos, se han entrelazado mucho las medicion del brazo estirado y contraido

    Descartados:

    #1

|Lugar      | Color    |
|-----------|----------|
| Musculo   | Rojo     |
| Invertido | Verde    |
| Hueso     | Amarillo |

    #2

|Lugar      | Color    |
|-----------|----------|
| Musculo   | Amarillo |
| Invertido | Rojo     |
| Hueso     | Verde    |
    
    #3

|Lugar      | Color    |
|-----------|----------|
| Musculo   | Rojo     |
| Invertido | Amarillo |
| Hueso     | Verde    |

Hemos eliminado los que utilizaban el cable verde en el hueso, tiene sentido que ambos cumplan la misma caracteristica #2 y #3.

Ademas aqui podemos observar que #1 y #3 comparten el cable rojo en el musculo por lo que podemos deducir que, al contrario de mi hipotesis, el rojo no se ubica en el musculo y el verde no se ubica en el hueso (tierra). 


    Seleccionados:

    #1

|Lugar      | Color    |
|-----------|----------|
| Musculo   | Amarillo |
| Invertido | Verde    |
| Hueso     | Rojo     |

| CASO       | Intervalo |
|------------|-----|
| Relajado   | 400 ~ 500 |
| Flexionado | 500 ~ 600 |

    #2

|Lugar      | Color    |
|-----------|----------|
| Musculo   | Verde    |
| Invertido | Rojo     |
| Hueso     | Amarillo |

| CASO       | Intervalo |
|------------|-----|
| Relajado   | 290 ~ 330 |
| Flexionado | 250 ~ 300 |

    #3

|Lugar      | Color    |
|-----------|----------|
| Musculo   | Verde    |
| Invertido | Amarillo |
| Hueso     | Rojo     |

| CASO       | Intervalo |
|------------|-----|
| Relajado   | 253 ~ 300 |
| Flexionado | 290 ~ 320 |