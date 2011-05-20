//
//  AGL.m
//  Asynchronous-Game-Library
//
//  Created by Martin Grider on 5/20/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "AGL.h"
#import "SynthesizeSingleton.h"


@implementation AGL

SYNTHESIZE_SINGLETON_FOR_CLASS(AGL);


- (BOOL)handleOpenURL:(NSURL *)url
{
	if (!url) {
		return NO;
	}

	return YES;
}


@end
