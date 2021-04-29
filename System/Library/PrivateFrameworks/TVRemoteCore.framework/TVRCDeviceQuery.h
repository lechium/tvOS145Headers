/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVRCDeviceQueryDelegate;
@class NSSet;

@interface TVRCDeviceQuery : NSObject {

	id<TVRCDeviceQueryDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TVRCDeviceQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSSet * devices; 
+(id)_allDiscoveredDevices;
+(void)_allDiscoveredDevicesDidUpdate:(id)arg1 ;
+(void)fetchActiveEndpointUIDWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id<TVRCDeviceQueryDelegate>)delegate;
-(void)setDelegate:(id<TVRCDeviceQueryDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(NSSet *)devices;
@end
