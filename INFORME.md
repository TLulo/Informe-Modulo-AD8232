# INFORME AD8232
## Lectura del modulo ad8232
El modulo parece detectar el movimiento del musculo "bicep"

| CASO       | Min | Max |
|------------|-----|-----|
| Relajado   | Aprox 200 | < 340 |
| Flexionado | > 340 | <390 |


Estas visualizaciones son captadas gracias a un filtro pasa-bajo, 
los datos en bruto no estaban reflejando diferencias notables en el musculo.

Los electrodos utilizados, son marca 3M Red Dot, el modulo AD8232 me libero de cierta preocupacion, dandome 3 cables para la referencia del musculo.

probe promedio, datos en bruto y filtro pasa-bajo, el que parece haber resultado mejor fue el filtro, faltan datos para comprobar.

    El amarillo(L) lo conecte al musculo como referencia
    El Verde(R) lo conecte al inverso del musculo como referencia
    El Rojo(R) lo conecte al hombro (Hueso) para referencia a tierra

Dato: los colores me suenan raros, en mi cabeza rojo es senal principal, verde tierra y amarillo referencia 2. Deberia realizar algunas pruebas con los electrodos en las diferentes combinaciones, el problema es que serian 9 combinaciones 3*3 para comprobar cada una de ellas.


| Estirado | Promedio         | Filtrado         |
|------------|------------------|------------------|
|            | 297              | 447              |
|            | 292              | 433              |
|            | 292              | 428              |
|            | 292              | 442              |
|            | 292              | 463              |
|            | 292              | 482              |
|            | 649              | 498              |
|            | 505              | 493              |
|            | 425              | 482              |
|            | 338              | 465              |
|            | 252              | 443              |
|            | 252              | 424              |
|            | 259              | 408              |
| Min        | 252              | 408              |
| Max        | 649              | 498              |
| Promedio   | 341,307692307692 | 454,461538461538 |


| Contraido | Promedio         | Filtrado         |
|-----------|------------------|------------------|
|           | 337              | 550              |
|           | 337              | 560              |
|           | 653              | 570              |
|           | 652              | 578              |
|           | 652              | 585              |
|           | 651              | 592              |
|           | 649              | 597              |
|           | 636              | 599              |
|           | 641              | 601              |
|           | 580              | 594              |
|           | 545              | 585              |
|           | 432              | 565              |
|           | 356              | 540              |
|           | 273              | 512              |
| Min       | 273              | 512              |
| Max       | 653              | 601              |
| Promedio  | 542,846153846154 | 575,230769230769 |

A destacar: el Promedio hace referencia al promedio(valga la redundancia) de 100 senales en bruto

# Promedio sin filtrar

    No se ve claramente la diferencia en las minimas y maximas del brazo contraido y estirado
    Lo que si podemos observar en una diferencia en el promedio de los datos sin filtrar

# Filtrado 

    En los datos filtrados podemos observar diferencias.
    Podemos ver que el maximo del brazo estirado no pasa el minimo del brazo flexionado, lo cual refleja que puede ser una medicion correcta
    Destacar que el minimo y el maximo de cada una varia en 100 unidades, lo cual tiene sentido pues son senales no deberia ser algo tan discreto.