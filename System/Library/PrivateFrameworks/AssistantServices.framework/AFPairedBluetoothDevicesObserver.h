/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AssistantServices/AssistantServices-Structs.h>
@class NSArray;

@interface AFPairedBluetoothDevicesObserver : NSObject {

	NSArray* _pairedDevices;
	os_unfair_lock_s _pairedDevicesLock;

}
+(id)sharedObserver;
-(id)init;
-(void)updatePairedDevices:(id)arg1 ;
-(id)pairedBluetoothDevices;
@end

