#include<iostream>
#include<string>

#ifndef VIDEO_H
#define VIDEO_H

class Video
{
  public:
  void print();
  Video(std::string, std::string, std::string, float, int);

  private:
  std::string a1, a2, a3;
  float length;
  int num;


};


#endif
