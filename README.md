# 纯c++简易渲染器

构建
```
mkdir build
cd build
cmake ..
make
./cgray
```
项目总共四个文件夹分别是
```
core 实现图像点，线，向量等基本操作
```
```
main 调用各种基础实现，渲染出图片，这里可以自行修改
```
```
model 放置需要渲染的模型或着纹理
```
```
rt 完成光线追踪的不同部件,包括光源,积分器,材料反射性质,纹理匹配,
超分辨采样等模块
```
![image](https://github.com/gkUwen/-c-/blob/master/examples/a6-4e.png)
![image](https://github.com/gkUwen/-c-/blob/master/examples/a8-fog-1.png)
![image](https://github.com/gkUwen/-c-/blob/master/examples/a3-1.png)
![image](https://github.com/gkUwen/-c-/blob/master/examples/final.png)

