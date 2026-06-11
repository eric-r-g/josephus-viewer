Remove-Item -r build

mkdir build

Set-Location build

cmake -G "Unix Makefiles" ..

Set-Location ..