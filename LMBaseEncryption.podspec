
Pod::Spec.new do |spec|

  spec.name         = "LMBaseEncryption"
  spec.version      = "1.0.0"
  spec.summary      = "LMBaseEncryption For 加解密"
  spec.homepage     = "https://github.com/zhaoxifan666/LMBaseEncryption"
  spec.license      = "MIT"
  spec.author       = { "zhaoxifan" => "xifan.zhao@aqara.com" }
  spec.platform     = :ios, "12.0"
  spec.source       = { :git => "https://github.com/zhaoxifan666/LMBaseEncryption", :tag => "#{spec.version}" }

  spec.frameworks = 'Foundation','UIKit'

  spec.vendored_frameworks = "LMBaseEncryption.framework"
  #文案放在这里的话，没修改一个问题就需要发版本，为了方便，先放在主工程里。
  #spec.resource =  'LMFramework/LMFramework.bundle'
  spec.pod_target_xcconfig = {
    'ENABLE_BITCODE' => 'YES',
    'DEFINES_MODULE' => "YES",
    'VALID_ARCHS' => 'armv7 arm64',
    "GCC_PREPROCESSOR_DEFINITIONS" => "HAVE_INTTYPES_H HAVE_PKCRYPT HAVE_STDINT_H HAVE_WZAES HAVE_ZLIB"
  }

end
