//
//  FLIROneSDKAGC.h
//  FLIROneSDKSwiftExample
//
//  Created by Beast on 2/19/16.
//  Copyright © 2016 Rapid Application Development, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

__attribute__((visibility("default")))
@interface FLIROneSDKAGC : NSObject

/**
 *  Locks the automatic gain so that there is a static mapping of temperature to color.
 */
+ (void)lockAGC;

/**
 *  Unlocks the automatic gain so that there is a dynamic mapping of temperature to color.
 */
+ (void)unlockAGC;

/**
 *  Gets the current state of the palette lock.
 *
 *  @return YES if locked; NO otherwise.
 */
+ (BOOL)isAGCLocked;

@end
