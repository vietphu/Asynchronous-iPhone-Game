//
//  AGL.h
//  Asynchronous-Game-Library
//
//  Created by Martin Grider on 5/20/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface AGL : NSObject {

}


// singleton
+ (AGL *)sharedAGL;

// url handling
- (BOOL)handleOpenURL:(NSURL *)url;


@end
