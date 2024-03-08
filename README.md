# dcmafp

胶片自动打印服务

## 计划
SCP服务端
API服务端
任务进程
守护进程
nginx

## 库依赖
* spdlog
* dcmtk
* mysql++
* redis-plus-plus
* pistache
* yaml-cpp
* libuv

## 环境
### 系统环境
Ubuntu 22.04

### 第三方库安装
```shell
sudo add-apt-repository ppa:pistache+team/unstable
sudo apt install libpistache-dev
sudo apt install libspdlog-dev
sudo apt install libfmt-dev
sudo apt install libdcmtk-dev
sudo apt install libmysql++-dev
# sudo apt install libhiredis-dev # 自己编译安装
sudo apt install libyaml-cpp-dev
sudo apt install libuv1-dev
sudo apt install libopencv-dev
```

### Mysql数据库
```shell
sudo apt install mysql-server
cat /etc/mysql/debian.cnf
mysql -udebian-sys-maint -p # 输入上面提示的密码
use mysql;
alter user "root"@"localhost" identified with mysql_native_password by "123456"; # 123456改为输入需要设置的新密码
flush privileges;
exit
service mysql restart
```

### Redis服务端
```shell
sudo apt install redis-server
```

### hiredis编译
```shell
git clone https://github.com/redis/hiredis.git
cd hiredis
make
sudo make install
```

### redis-plus-plus编译
```shell
git clone https://github.com/sewenew/redis-plus-plus.git
cd redis-plus-plus
mkdir build
cd build
cmake .. -DREDIS_PLUS_PLUS_CXX_STANDARD=17 -DREDIS_PLUS_PLUS_BUILD_ASYNC=libuv
make
sudo make install
cd ..
sudo ldconfig # 更新动态链接库
```

### loki
```shell
git clone https://github.com/dutor/loki.git
mv loki /usr/include
```

## 资料
[内存泄露](https://www.zhihu.com/question/382668081/answer/3281627320)

## Github
https://github.com/fmtlib/fmt
https://github.com/gabime/spdlog
https://github.com/DCMTK/dcmtk
https://github.com/pistacheio/pistache
https://github.com/tangentsoft/mysqlpp
https://github.com/sewenew/redis-plus-plus
https://github.com/jbeder/yaml-cpp
https://github.com/libuv/libuv
https://github.com/dutor/loki
