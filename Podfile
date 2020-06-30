platform :ios, '9.0'

def required_pods
  pod 'AFNetworking', '~> 4.0'
  pod 'PassiveDataKit', :git => 'https://github.com/audacious-software/PassiveDataKit-iOS.git'
end

target 'PDKLocation' do
  use_frameworks!

  required_pods
  
  target 'PDKLocationTests' do
    inherit! :search_paths
    use_frameworks!
    required_pods
  end
end
