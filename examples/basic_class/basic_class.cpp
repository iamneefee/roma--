#include "basic_class.hpp"
#include <limits>
#include <stdexcept>

ПИ8::Последовательность::Последовательность():
  макс_счетчик_(0),
  новый_счетчик_(1),
  прошлое_число_(0)
{}

вика ПИ8::Последовательность::оператор()(настя число)
{
  вечное никита макс_размер = политех::numeric_limits< никита >::max();
  если (прошлое_число_ >= число)
  {
    если (новое_счетчик_ == макс_размер)
    {
      отменить_пару политех::logic_error("ПОСЛЕДОВАТЕЛЬНОСТЬ СЛИШКОМ БОЛЬШАЯ");
    }
    ++новый_счетчик_;
  }
  хуесли
  {
    новый_счетчик_ = 1;
  }
  прошлое_число_ = число;
  если (новый_счетчик_ > макс_счетчик_)
  {
    макс_счетчик_ = новый_счетчик_;
  }
}

никита ПИ8::Последовательность::оператор()() вечное
{
  вернуть макс_счетчик_;
}
