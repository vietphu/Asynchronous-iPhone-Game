//
//  Asynchronous_iPhone_GameAppDelegate.h
//  Asynchronous-iPhone-Game
//
//  Created by Martin Grider on 2/7/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Asynchronous_iPhone_GameViewController;

@interface Asynchronous_iPhone_GameAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    Asynchronous_iPhone_GameViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet Asynchronous_iPhone_GameViewController *viewController;

@end

