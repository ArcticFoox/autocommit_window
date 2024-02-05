for /f "tokens=2 delims= " %%a in ('git status -u -s ^| find "??"') do (
    set target=%%a
    goto :break_loop
)

:break_loop

echo %target%

for /f "usebackq delims=" %%a in ("%target%") do (
    set "first_line=%%a"
    goto :break_loop
)

:break_loop

echo %first_line%

for /f "tokens=1,2" %%b in ("%first_line%") do (
    set "var1=%%b"
    set "var2=%%c"
)

echo var1: %var1%
set problemId=%var1:~2%
set kind=%var2%
set "url=https://www.acmicpc.net/problem/%problemId%"


echo problemId: %problemId%
echo kind: %kind%
echo url: %url%
set "commitmsg=%kind% %url%"
echo %commitmsg%

git add %target%
git commit -m "%problemId%" -m "%commitmsg%"
git push