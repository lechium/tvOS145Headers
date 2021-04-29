/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HMDMediaPlaybackAction, NSArray;

@interface HMDMediaPlaybackActionAsCharacteristicWriteRequests : HMFObject {

	HMDMediaPlaybackAction* _residualAction;
	NSArray* _characteristicWriteRequests;

}

@property (readonly) HMDMediaPlaybackAction * residualAction;              //@synthesize residualAction=_residualAction - In the implementation block
@property (readonly) NSArray * characteristicWriteRequests;                //@synthesize characteristicWriteRequests=_characteristicWriteRequests - In the implementation block
-(id)init;
-(NSArray *)characteristicWriteRequests;
-(HMDMediaPlaybackAction *)residualAction;
-(id)initWithAction:(id)arg1 characteristicWriteRequests:(id)arg2 ;
@end
