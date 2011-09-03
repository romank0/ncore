#ifndef __SHELL_H__
#define __SHELL_H__

class Dispatcher;
class Clock;

class Shell
{
public:
  void run(const Dispatcher& commands);
  void run(const Dispatcher& commands, const Clock& clock);
};

#endif // __SHELL_H__
// vim:cin:ai:sts=2 sw=2 ft=cpp

