#include <thread>
#include <vector>
#include <atomic>

class Client {
    public:
        Client(string ip, int port);
        ~Client();
        void start();
        void uploadFile(DefaultIO* dio, string filePath);
        void downloadFile(DefaultIO* dio, string file_path, string content);
        bool validChoice(string m);

    private:
        DefaultIO* dio;
        thread t;
        bool downloaded = false;
        int port;
        string ip;
};
