/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSUUID, NSString;


@protocol HMDWACDevice
@property (nonatomic,readonly) NSUUID * identifier; 
@property (nonatomic,readonly) NSString * deviceID; 
@property (nonatomic,readonly) NSString * ssid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) BOOL isConfigured; 
@property (nonatomic,readonly) BOOL supportsAirPlay2; 
@property (nonatomic,readonly) id underlyingDevice; 
@required
-(NSString *)name;
-(NSUUID *)identifier;
-(BOOL)isConfigured;
-(void)startConfigurationWithCompletionHandler:(/*^block*/id)arg1;
-(NSString *)deviceID;
-(NSString *)ssid;
-(id)underlyingDevice;
-(void)cancelConfigurationWithCompletionHandler:(/*^block*/id)arg1;
-(BOOL)supportsAirPlay2;

@end

