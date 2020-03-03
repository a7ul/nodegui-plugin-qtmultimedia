#include <napi.h>

#include "src/cpp/QMediaContent/qmediacontent_wrap.h"
#include "src/cpp/QStatusBar/qstatusbar_wrap.h"

Napi::Object Main(Napi::Env env, Napi::Object exports) {
  QStatusBarWrap::init(env, exports);
  QMediaContentWrap::init(env, exports);
  return exports;
}

NODE_API_MODULE(NODE_GYP_MODULE_NAME, Main)
