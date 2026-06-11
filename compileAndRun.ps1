Set-Location build

make

if ($LASTEXITCODE -ne 0) {
    Set-Location ..
    exit 1
}

Set-Location ..

build/MetodosNum2.exe