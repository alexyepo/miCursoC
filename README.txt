CREAR REPOSITORIO EN GIT HUB DE MI CARPETA ACTUAL

Comando git remote add origin y pegar la ruta del repositorio
en la carpeta de trabajo del proyecto:
--------------------------------------------------------------
mi-carpeta-de-trabajo>

git init
git add .
git commit -m "first commit"
git branch -M master
git remote add origin https://github.com/alexyepo/miCursoC.git
git push -u origin master


BORRAR .GIT DESDE GIT BASH - INICIALIZACION DEL REPOSITORIO
-En buscar escribir Git bash para que abra la aplicación
-Con el comando "cd" para entrar a la carpeta del proyecto, ej: "cd dropbox" y otra vez 
    "cd 26-EjerciciosC++". En nombre de la carpeta no puede tener espacio, 
    cambielo si es necesario
-Use el comando "ls" para listar contenido de la carpeta y "ls -all" para
    ver los ocultos
-Use el comando "rm -rf .git" para eliminar la inicializacion del repositorio
-para verificar use el comando "git status" en el directorio
