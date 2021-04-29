/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IMBatteryStatusTestDelegate;
@interface IMBatteryStatus : NSObject {

	id<IMBatteryStatusTestDelegate> _testDelegate;

}

@property (assign,nonatomic,__weak) id<IMBatteryStatusTestDelegate> testDelegate;              //@synthesize testDelegate=_testDelegate - In the implementation block
@property (getter=isCharging,readonly) BOOL charging; 
-(BOOL)isCharging;
-(id<IMBatteryStatusTestDelegate>)testDelegate;
-(void)setTestDelegate:(id<IMBatteryStatusTestDelegate>)arg1 ;
@end
