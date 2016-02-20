# FLIROneSDK+AGC
Auto gain control for the FLIROneSDK-iOS

Note: This code repository is based on iOS FLIROneSDK v0.2.10


0. Download and link the FLIROneSDK for iOS.
1. Link libFLIROneSDKAGC.a in your Xcode project.
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
