# 用CMake来构建GDExtension
1. 下载并编译godot-cpp(这里用的是4.3版本)
   ```cpp
   cmake -B build
   cmake --build build
   ```
3. 将该项目中CMakeLists.txt文件中的库路径改成自己编译出来的库路径(需要更改的部分用注释标注出来了)
4. 编译该项目在godot中打开即可
