/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <RunningBoard/RunningBoard-Structs.h>
@class NSDate, NSString;

@interface RBPowerAssertion : NSObject {

	unsigned _identifier;
	NSDate* _acquisitionDate;
	NSString* _name;
	NSString* _baseName;
	BOOL _invalidated;
	os_unfair_lock_s _lock;

}
-(id)description;
-(id)init;
-(void)dealloc;
-(id)_preventIdleSleepIdentifiers;
-(int)_targetPid;
@end

