# 本项目名称为：Message即时通讯软件

## 本项目的系统设计概要如下：
1. 用户管理系统方面，实现用户注册和登录功能，用户信息存储和管理以及用户身份验证和安全性。
2. 通讯协议方面，选择UDP协议实现消息传输和接收的协议规范。
3. 消息传输方面，实现实时消息传输，包括文本、图片、音频和视频。
4. 联系人管理方面，用户可以添加、删除、编辑联系人，可以实时同步联系人列表。
5. 平台支持方面，支持linux操作系统。
6. 消息存储和历史记录方面，存储用户消息历史记录，以便在需要时进行检索。
7. 安全性方面，通过数据传输的加密以及用户身份验证和授权，防止恶意攻击。
8. 性能和可伸缩性方面，高并发支持，可以处理较多用户同时在线。
9. 用户界面设计方面，直观简洁，美观实用。
10. 监控和分析方面，设计日志文件功能实时记录用户的操作，以跟踪应用程序性能和问题，收集分析数据以改进用户体验。
11. 合规性方面，遵守数据隐私法规，保障用户数据的隐私性。
12. 本项目使用QSQLLITE数据库，建立了people,friend,chat三个表分别记录用户信息，好友信息和文件信息，聊天信息.

## 目录结构：

Client
    ---chatdialog.cpp chatdialog.h chatdialog.ui 聊天界面
    ---client.cpp client.h client.ui 登陆界面
    ---home.cpp home.h home.ui 主界面
    ---registerdialog.cpp registerdialog.h registerdialog.ui 注册
    ---sendfiledialog.cpp sendfiledialog.h sendfiledialog.ui 发送文件
    ---receivefiledialog.cpp receivefiledialog.h receivefiledialog.ui 接受文件
    ---userinfo.cpp userinfo.h userinfo.ui 存放部分数据（ip,port等）
    ---main
Server
    ---server.cpp server.h server.ui 服务器
    ---main
