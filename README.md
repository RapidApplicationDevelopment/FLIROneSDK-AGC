[![GitHub license](https://img.shields.io/badge/license-MIT-blue.svg)](https://raw.githubusercontent.com/RapidApplicationDevelopment/FLIROneSDK-AGC/master/LICENSE)
[![Github Releases](https://img.shields.io/github/release/RapidApplicationDevelopment/FLIROneSDK-AGC.svg)](https://github.com/RapidApplicationDevelopment/FLIROneSDK-AGC/releases)
[![Github Issues](https://img.shields.io/github/issues/RapidApplicationDevelopment/FLIROneSDK-AGC.svg)](http://github.com/RapidApplicationDevelopment/FLIROneSDK-AGC/issues)

# FLIROneSDK+AGC

Auto gain control for the FLIROneSDK-iOS

Note: This code repository is based on iOS FLIROneSDK v0.2.10


0. Download and link the [FLIROneSDK](http://developer.flir.com) for iOS.
1. Download and link [libFLIROneSDKAGC.a](http://github.com/RapidApplicationDevelopment/FLIROneSDK-AGC/archive/master.zip) in your Xcode project.
2. Add the folder containing FLIROneSDKAGC.h to your include paths.


```objective-c
// Check if the AGC is already locked
if ([FLIROneSDKAGC isAGCLocked]) {

	// Unlock 
	[FLIROneSDKAGC unlockAGC];
} else {

	// Lock
	[FLIROneSDKAGC lockAGC];
}
```



## License

The class is licensed under the [MIT License](http://opensource.org/licenses/MIT):

Copyright (c) 2016 [Rapid Application Development, LLC](http://rapidappdevel.com).

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
