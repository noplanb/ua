//
//  ZTAppDependenices.h
//  ZazoTest
//
//  Created by UAwan on 11/13/15.
//  Copyright © 2015 UAwan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
@class UIApplication;

@interface ZTAppDependenices : NSObject

- (void)initialApplicationSetup:(UIApplication *)application launchOptions:(NSDictionary *)options;
- (void)handleApplicationDidBecomeActive;
- (void)handleApplicationWillTerminate:(UIApplication *)application;

@end
