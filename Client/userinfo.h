//Arthor:YangYunbo
//Date:2024.6.19
#ifndef USERINFO_H
#define USERINFO_H

#include <QString>

class userinfo
{
public:
    int id;
    QString name;
    bool islogin;
    QString ip;
    int port;

    userinfo(int id_,QString name_);
    userinfo();
};

#endif // USERINFO_H
