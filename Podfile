platform :ios, '9.0'

def required_pods
  pod 'AFNetworking', '~> 3.0'
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
