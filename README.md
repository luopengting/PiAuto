# PiAuto

## 编译
```
catkin_make
```

## 设置环境变量
```
source devel/setup.bash
```

## 测试imu发送和接收
### 启动imu发送
```
roslaunch fdilink_ahrs ahrs_data.launch
```
### 启动imu接收
```
roslaunch fdilink_receiver fdilink_receiver.launch
```