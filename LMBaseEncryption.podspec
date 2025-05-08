Pod::Spec.new do |spec|

  spec.name         = "LMBaseEncryption"
  spec.version      = "1.0.0"
  spec.summary      = "LMBaseEncryption For 加解密"
  spec.homepage     = "https://github.com/zhaoxifan666/LMBaseEncryption"
  spec.license      = "MIT"
  spec.author       = { "zhaoxifan" => "xifan.zhao@aqara.com" }
  spec.platform     = :ios, "12.0"
  spec.source       = { :git => "https://github.com/zhaoxifan666/LMBaseEncryption.git", :tag => "#{spec.version}" }

  spec.vendored_frameworks = "LMBaseEncryption.framework"
  spec.frameworks = 'Foundation', 'UIKit'

  spec.pod_target_xcconfig = {
    'ENABLE_BITCODE' => 'YES',
    'DEFINES_MODULE' => 'YES'
  }

end
