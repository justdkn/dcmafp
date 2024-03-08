#include <iostream>

#include <fmt/color.h>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/sinks/rotating_file_sink.h>
#include <dcmtk/dcmnet/scu.h>
#include <mysql++/mysql++.h>
#include <pistache/endpoint.h>
#include <sw/redis++/redis++.h>
#include <yaml-cpp/yaml.h>
#include <loki/Singleton.h>
#include <opencv2/opencv.hpp>

using namespace cv;

// using namespace Pistache;

// struct HelloHandler : public Http::Handler {
//     HTTP_PROTOTYPE(HelloHandler)
//     void onRequest(const Http::Request&, Http::ResponseWriter writer) override {
//         writer.send(Http::Code::Ok, "Hello, World!");
//     }
// };
// class MyClass{
// public:
//     // 有默认构造
//     MyClass(){;}
//     // 显示自己所在的内存地址，用以区分是否是同一个对象
//     void ShowPtr()
//     {
//         std::cout << this << std::endl;
//     }
// };

// typedef Loki::SingletonHolder<MyClass> MyClassSingleton;

int main() {
    printf(CV_VERSION);
    spdlog::info("{:<30}", "left aligned");
    // MyClass& v = MyClassSingleton::Instance();
    // v.ShowPtr();
    // MyClassSingleton::Instance()总是返回同一个MyClass实例
    // MyClassSingleton::Instance().ShowPtr();
    // YAML::Node config;
    // config = YAML::LoadFile("test.yaml");
    // std::cout << "Node type " << config.Type() << std::endl;
    // std::cout << "Name " << config["name"].as<std::string>() << std::endl;
    // sw::redis::Redis redis("tcp://127.0.0.1:6379");
    // auto result = redis.ping();
    // fmt::print(fg(fmt::color::crimson) | fmt::emphasis::bold, result);

    // Http::listenAndServe<HelloHandler>(Pistache::Address("*:9080"));
    return 0;
}
