@echo off
REM 2008-11-13 (c) written by senshu
REM set COPY=echo (copy)
set COPY=copy

set PROJECT=hidmon
REM コピー先のディレクトリをセットする
set TARGET=C:\bin

if "%1"=="" (
REM 引数なし（標準設定）
) else (
REM HELPのチェック
  if "%1"=="HELP" goto HELP
  if "%1"=="?" goto HELP
  if "%1"=="help" goto HELP
  set TARGET=%1
)

echo ================= %PROJECT% をセットアップします ====================
echo %TARGET%フォルダ にコピーを希望する場合は、[Y]を大文字で入力のこと。
SET ANS=n
SET /P ANS="↑にセットアップをしますか[Y/n]"
IF %ANS%==Y (
  GOTO START
) ELSE (
  GOTO WHERE
)

:WHERE
SET TARGET=
SET /P TARGET="希望するフォルダ名を入力してください:"
SET ANS=n
SET /P ANS="%TARGET%フォルダにセットアップをしますか？ [Y/n]"
IF %ANS%==Y (
  GOTO START
) ELSE (
  echo ================= %PROJECT% のセットアップを中断 ====================
  GOTO END
)

:START
echo 必要なファイル群を%TARGET%にコピーします。

REM Check
IF NOT EXIST %TARGET% ( 
  mkdir %TARGET%
)
echo ==== [COPY to %TARGET%] ====
echo hidmon88.exe, bootloadHID.exe
%COPY% hidmon88.exe %TARGET% > NUL
%COPY% bootloadHID.exe %TARGET% > NUL
echo ==== %PROJECT% setup finished ====
goto END

:HELP
  echo これは %PROJECT%のセットアッププログラムであり、更新時にも利用できます。
  echo   setup [希望するフォルダ名]
  echo のように使います。
  echo [希望するフォルダ名]を省略すると標準とする%TARGET%にコピーします。

:END
pause
