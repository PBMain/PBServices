Pod::Spec.new do |s|
  s.name             = 'PBServices'
  s.version          = '1.6.0.3'
  s.summary          = 'Photo Butler pod that contains support for connecting to Photo Butler services'

  s.description      = <<-DESC
Photo Butler pod that contains support for connecting to Photo Butler services, including uploads, photo streams, photo assets, and people.
                       DESC

  s.homepage         = 'https://github.com/PBMain'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'drewspencer@yourvideokeepsakes.com' => 'Photo Butler' }
  s.source           = { :git => 'https://github.com/PBMain/PBServices.git', :tag => s.version.to_s }

  s.platform = :ios, '10.0'
  s.swift_version = '4.1'

  #s.source_files = 'PBServices/Classes/**/*'
  
  s.ios.vendored_frameworks = 'PBFrameworkServices.framework'
  
  s.ios.frameworks = 'Foundation', 'CoreGraphics', 'AdSupport', 'UIKit', 'SystemConfiguration'
  
  s.dependency "PBNetworkingLibraries"
  s.dependency "PBAnalytics"
  s.dependency "AFNetworking"
  s.dependency "GZIP"
  s.dependency "TesseractOCRiOS"

  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  
end
