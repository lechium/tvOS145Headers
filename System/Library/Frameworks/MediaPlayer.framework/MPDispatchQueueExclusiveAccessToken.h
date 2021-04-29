/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MPExclusiveAccessToken.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface MPDispatchQueueExclusiveAccessToken : NSObject <MPExclusiveAccessToken> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	id _owner;

}
+(id)tokenWithQueue:(id)arg1 owner:(id)arg2 ;
-(id)_init;
-(void)assertHasExclusiveAccessForOwner:(id)arg1 ;
@end
