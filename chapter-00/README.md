
## 配置C/C++环境

### 配置编译器
按快捷键Ctrl+Shift+P调出命令面板，输入C/C++，选择`Edit Configurations(UI)`进入配置。

**Compiler Path：** `D:/MinGW/bin/g++.exe`
> 这里的路径根据大家自己安装的Mingw编译器位置和配置的环境变量位置所决定。


**IntelliSense mode：** `gcc-x64`


`.vscode`文件夹下会生成一个`c_cpp_properties.json`文件，内容如下：

```json
{
    "configurations": [
        {
            "name": "Win32",
            "includePath": [
                "${workspaceFolder}/**"
            ],
            "defines": [
                "_DEBUG",
                "UNICODE",
                "_UNICODE"
            ],
            "windowsSdkVersion": "10.0.22000.0",
            "compilerPath": "D:/MinGW/bin/g++.exe",
            "cStandard": "c17",
            "cppStandard": "c++17",
            "intelliSenseMode": "gcc-x64"
        }
    ],
    "version": 4
}

```

### 配置构建任务

按快捷键`Ctrl+Shift+P`调出命令面板，输入`tasks`，选择`Tasks:Configure Default Build Task`，再选择`C/C++: g++.exe build active file` 会创建一个`tasks.json`配置文件。

```json
{
	"version": "2.0.0",
	"tasks": [
		{
			"type": "shell",
			"label": "g++.exe build active file",
			"command": "D:/MinGW/bin/g++.exe",
			"args": [
				"-fdiagnostics-color=always",
				"-g",
				"${file}",
				"-o",
				"${fileDirname}\\${fileBasenameNoExtension}.exe"
			],
			"options": {
				"cwd": "D:/MinGW/bin"
			},
			"problemMatcher": [
				"$gcc"
			],
			"group": {
				"kind": "build",
				"isDefault": true
			},
			"detail": "compiler: D:/MinGW/bin/g++.exe"
		}
	]
}
```

### 配置调试设置
点击菜单栏的`Run-->Start Debugging`，选择`C++(GDB/LLDB)` ，会产生一个`launch.json`文件。

```json
{
    // Use IntelliSense to learn about possible attributes.
    // Hover to view descriptions of existing attributes.
    // For more information, visit: https://go.microsoft.com/fwlink/?linkid=830387
    "version": "0.2.0",
    "configurations": [
        {
            "name": "(gdb) Launch",
            "preLaunchTask": "g++.exe build active file",//调试前执行的任务，就是之前配置的tasks.json中的label字段
            "type": "cppdbg",//配置类型，只能为cppdbg
            "request": "launch",//请求配置类型，可以为launch（启动）或attach（附加）
            "program": "${fileDirname}\\${fileBasenameNoExtension}.exe",//调试程序的路径名称
            "args": [],//调试传递参数
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": true,//true显示外置的控制台窗口，false显示内置终端
            "MIMode": "gdb",
            "miDebuggerPath": "D:\\MinGW\\bin\\gdb.exe",
            "setupCommands": [
                {
                    "description": "Enable pretty-printing for gdb",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ]
        }
    ]
}

```

写个程序，在代码中打个断点，按`F5` 进入Debug 调试模式。


**注**：`launch.json`的`preLaunchTask`要跟`tasks.json`的`label名称`一致。

否则会报错：
> 找不到任务”g+ + .exe build active file"。