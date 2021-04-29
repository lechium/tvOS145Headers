/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFTimer.h>

@class NSUUID;

@interface HMDTriggerConfirmationTimer : HMFTimer {

	NSUUID* _executionSessionID;

}

@property (nonatomic,readonly) NSUUID * executionSessionID;              //@synthesize executionSessionID=_executionSessionID - In the implementation block
-(id)description;
-(id)initWithExecutionSessionID:(id)arg1 timeoutInterval:(double)arg2 ;
-(NSUUID *)executionSessionID;
@end

