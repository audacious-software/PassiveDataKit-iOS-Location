platform :ios, '12.0'

def required_pods
  pod 'AFNetworking', '~> 4.0'
  pod 'DTMHeatmap'
  pod 'PassiveDataKit', :git => 'https://github.com/audacious-software/PassiveDataKit-iOS.git'
end

target 'PassiveDataKit-iOS-Location' do
  use_frameworks!

  required_pods
  
  target 'PassiveDataKit-iOS-LocationTests' do
    inherit! :search_paths
    use_frameworks!
    required_pods
  end

  target 'PassiveDataKit-iOS-LocationUITests' do
    inherit! :search_paths
    use_frameworks!
    required_pods
  end

  target 'Test Dummy App' do
    inherit! :search_paths

    required_pods
  end
end

post_install do |installer|
  installer.pods_project.targets.each do |target|
    target.build_configurations.each do |config|
      config.build_settings['IPHONEOS_DEPLOYMENT_TARGET'] = '9.0'
    end
  end
end