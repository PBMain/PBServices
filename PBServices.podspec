Pod::Spec.new do |s|
  s.name             = 'PBServices'
  s.version          = '1.5.4.3'
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
  s.dependency "Socket.IO-Client-Swift"
  s.dependency "AFNetworking"
  s.dependency "GZIP"
  s.dependency "TesseractOCRiOS"
  
end
