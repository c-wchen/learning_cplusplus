## Code Runner配置
在Vscode使用插件进行编译和运行， 简化代码输出流程
```json
// fileNameWithoutExt  不带后缀的文件名
// $dir                当前目录
// $fileName           当前文件全名
"code-runner.executorMap": {
    "cpp": "cd $dir && g++ $fileName -o ./build/$fileNameWithoutExt && $dir/build/$fileNameWithoutExt"
}
```

## 运行环境
> Linux Ubuntu

## CMake构建
```bash
# cd 项目目录, 需要安装cmake & make
cmake .
make
```