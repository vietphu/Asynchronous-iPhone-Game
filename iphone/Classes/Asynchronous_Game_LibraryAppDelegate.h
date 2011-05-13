//
//  Asynchronous_iPhone_GameAppDelegate.h
//  Asynchronous-iPhone-Game
//
//  Created by Martin Grider on 2/7/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Asynchronous_Game_LibraryViewController;

@interface Asynchronous_Game_LibraryAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    Asynchronous_Game_LibraryViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet Asynchronous_Game_LibraryViewController *viewController;

@end

