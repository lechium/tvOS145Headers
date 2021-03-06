/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSPointerArray, NSObject, NSArray;

@interface MRExternalDeviceManager : NSObject {

	NSPointerArray* _devicesPointerArray;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,readonly) NSArray * allDevices; 
+(id)sharedManager;
-(id)init;
-(void)clearDevices;
-(NSArray *)allDevices;
-(id)deviceWithIdentifier:(id)arg1 ;
-(void)registerDevice:(id)arg1 ;
@end

