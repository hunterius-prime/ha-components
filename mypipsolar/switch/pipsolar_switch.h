#pragma once

#include "../mypipsolar.h"
#include "esphome/components/switch/switch.h"
#include "esphome/core/component.h"

namespace esphome {
namespace mypipsolar {
class MyPipsolar;
class PipsolarSwitch : public switch_::Switch, public Component {
 public:
  void set_parent(MyPipsolar *parent) { this->parent_ = parent; };
  void set_on_command(const std::string &command) { this->on_command_ = command; };
  void set_off_command(const std::string &command) { this->off_command_ = command; };
  void dump_config() override;

 protected:
  void write_state(bool state) override;
  std::string on_command_;
  std::string off_command_;
  MyPipsolar *parent_;
};

}  // namespace pipsolar
}  // namespace esphome
