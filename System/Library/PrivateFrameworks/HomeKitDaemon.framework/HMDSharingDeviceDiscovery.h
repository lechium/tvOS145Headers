/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDSharingDeviceDiscovery.h>

@protocol HMDSharingDeviceDiscovery <NSObject>
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue; 
@property (assign,nonatomic) unsigned long long discoveryFlags; 
@property (nonatomic,copy) id deviceFoundHandler; 
@property (nonatomic,copy) id deviceLostHandler; 
@property (nonatomic,copy) id deviceChangedHandler; 
@required
-(void)start;
-(void)stop;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(id)arg1;
-(id)deviceFoundHandler;
-(void)setDeviceFoundHandler:(/*^block*/id)arg1;
-(id)deviceLostHandler;
-(void)setDeviceLostHandler:(/*^block*/id)arg1;
-(void)setDiscoveryFlags:(unsigned long long)arg1;
-(unsigned long long)discoveryFlags;
-(void)setDeviceChangedHandler:(/*^block*/id)arg1;
-(id)deviceChangedHandler;
-(void)repairDevice:(id)arg1 flags:(unsigned)arg2 completion:(/*^block*/id)arg3;

@end


@class SFDeviceDiscovery, NSString;

@interface HMDSharingDeviceDiscovery : HMFObject <HMDSharingDeviceDiscovery> {

	SFDeviceDiscovery* _deviceDiscovery;

}

@property (nonatomic,retain) SFDeviceDiscovery * deviceDiscovery;                     //@synthesize deviceDiscovery=_deviceDiscovery - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue; 
@property (assign,nonatomic) unsigned long long discoveryFlags; 
@property (nonatomic,copy) id deviceFoundHandler; 
@property (nonatomic,copy) id deviceLostHandler; 
@property (nonatomic,copy) id deviceChangedHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)start;
-(void)stop;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)deviceFoundHandler;
-(void)setDeviceFoundHandler:(id)arg1 ;
-(id)deviceLostHandler;
-(void)setDeviceLostHandler:(id)arg1 ;
-(void)setDiscoveryFlags:(unsigned long long)arg1 ;
-(unsigned long long)discoveryFlags;
-(void)setDeviceChangedHandler:(id)arg1 ;
-(id)deviceChangedHandler;
-(void)repairDevice:(id)arg1 flags:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(SFDeviceDiscovery *)deviceDiscovery;
-(void)setDeviceDiscovery:(SFDeviceDiscovery *)arg1 ;
@end
