# Uncomment the next line to define a global platform for your project
# platform :ios, '13.0'

target 'testingTiendeo' do
  # Comment the next line if you don't want to use dynamic frameworks
  use_frameworks!

  # Pods for testingTiendeo

  #pod 'Alamofire'
  pod 'ViewerProLite','1.5.7-lite'

end

post_install do |installer|
  installer.pods_project.targets.each do |target|
    target.build_configurations.each do |config|
        config.build_settings['BUILD_LIBRARY_FOR_DISTRIBUTION'] = 'YES'
      	config.build_settings['ENABLE_BITCODE'] = 'YES'
      	config.build_settings['CODE_SIGNING_ALLOWED'] = 'NO'
        config.build_settings['ARCHS[sdk=iphonesimulator*]'] = 'x86_64 arm64'
        config.build_settings['IPHONEOS_DEPLOYMENT_TARGET'] = '13.0'
    end
  end
end
