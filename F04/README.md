## Análisis de la Mejora Implementada

La mejora aplicada en el sistema de adquisición de datos consiste en la integración de un proceso de **calibración y filtrado**, con el objetivo de aumentar la calidad y confiabilidad de las mediciones obtenidas.

### La Calibración
Se implementó una calibración inicial basada en el cálculo de un **offset** utilizando las primeras muestras registradas. Este procedimiento permite corregir errores sistemáticos del sensor, ajustando las lecturas desde el inicio del proceso de adquisición.

### Filtrado de Señal
Se aplicó un filtro de **media móvil**, el cual reduce el ruido presente en las señales de temperatura y LDR. Este método suaviza las variaciones bruscas y elimina picos no representativos, mejorando la estabilidad de los datos.

### El Almacenamiento de Datos
El sistema guarda tanto los datos originales como los filtrados en el archivo CSV, permitiendo:
- Comparar el comportamiento antes y después del filtrado
- Validar la mejora en la calidad de la señal
- Mantener la integridad de los datos originales

### Los Resultados
Gracias a estas mejoras:
- Se obtiene una señal más estable y continua
- Se reduce significativamente el ruido
- Se mejora la precisión en el análisis de los datos

---

## Conclusiones
La implementación de técnicas de calibración y filtrado permite transformar datos crudos en información más precisa y útil, optimizando así el proceso de adquisición y análisis.
