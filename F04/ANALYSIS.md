### Antes (código original)
- Los datos se almacenaban directamente desde el sensor (`temp_raw`, `ldr_raw`)
- No existía calibración inicial
- Las señales presentaban:
  - Ruido
  - Variaciones bruscas
  - Picos erráticos
- La gráfica era menos estable
- Menor precisión en el análisis

---

###  Después (código mejorado)
- Se implementó **calibración por offset** usando las primeras muestras
- Se añadió un **filtro de media móvil** para suavizar los datos
- Se incorporaron nuevas columnas en el CSV:
  - `temp_filt`
  - `ldr_filt`
- Se conservaron los datos originales para comparación
- La gráfica muestra:
  - Datos crudos
  - Datos filtrados (más estables)

---

## Diferencias clave

| Aspecto          | Antes         | Después               |
|------------------|---------------|------------------------|
| Precisión        | Baja          | Mayor                  |
| Ruido            | Alto          | Reducido               |
| Estabilidad      | Inestable     | Suavizada              |
| Calibración      | No            | Sí (offset inicial)    |
| Análisis         | Limitado      | Más confiable          |
| Datos guardados  | Solo crudos   | Crudos + filtrados     |

---

## Conclusión
El código mejorado permite obtener datos más **precisos, estables y confiables**, facilitando su análisis sin perder la información original.
