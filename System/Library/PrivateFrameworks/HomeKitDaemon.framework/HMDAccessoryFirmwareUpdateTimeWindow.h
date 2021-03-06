/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMFLogging.h>

@class NSDateComponents, NSString;

@interface HMDAccessoryFirmwareUpdateTimeWindow : NSObject <HMFLogging> {

	NSDateComponents* _startTimeComponents;
	NSDateComponents* _endTimeComponents;

}

@property (readonly) NSDateComponents * startTimeComponents;              //@synthesize startTimeComponents=_startTimeComponents - In the implementation block
@property (readonly) NSDateComponents * endTimeComponents;                //@synthesize endTimeComponents=_endTimeComponents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)initWithStartTime:(id)arg1 endTime:(id)arg2 ;
-(NSDateComponents *)startTimeComponents;
-(NSDateComponents *)endTimeComponents;
@end

