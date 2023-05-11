# nowcode_webserver
> 牛客网c++项目学习记录

# 入门

## GCC

![image-20230511120948028](assets/image-20230511120948028.png)

![image-20230511154841921](assets/image-20230511154841921.png)

## 静态库

> 在程序的**链接阶段**被复制到程序中
>
> 对比动态库：在程序**运行阶段**由系统动态加载到内存中供程序调用

*命名规则*

- Linux: libxxx.a
- Windows: libxxx.lib

*制作过程*

- gcc -- .o 文件
- 将 .o 文件打包<img src="assets/image-20230511162045961.png" alt="image-20230511162045961" style="zoom:33%;" />
- 
