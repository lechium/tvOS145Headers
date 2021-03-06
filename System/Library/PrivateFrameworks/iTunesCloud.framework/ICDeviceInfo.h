/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/ICNanoPairedDeviceStatusObserver.h>

@class NSString, NSData, NSNumber;

@interface ICDeviceInfo : NSObject <ICNanoPairedDeviceStatusObserver> {

	atomic_flag _hasRegisteredForNameNotifications;
	MGNotificationTokenStructRef _nameNotificationToken;
	NSString* _productVersion;
	NSString* _deviceModel;
	NSString* _rawDeviceModel;
	NSString* _hardwarePlatform;
	NSString* _buildVersion;
	int _deviceClass;
	unsigned _fairPlayDeviceType;
	NSString* _currentLocale;
	NSData* _deviceGUIDData;
	NSString* _deviceGUID;
	NSString* _name;
	NSString* _serialNumber;
	NSData* _macAddressData;
	CGSize _mainScreenSize;
	NSNumber* _hasCellularDataCapabilityNumber;
	NSNumber* _hasTelephonyCapabilityNumber;
	NSNumber* _hasWiFiCapabilityValue;
	NSNumber* _hasWAPICapabilityValue;
	NSNumber* _has720pCapabilityValue;
	NSNumber* _has1080pCapabilityValue;
	NSNumber* _screenClassValue;
	NSNumber* _isInternalBuildNumber;
	NSNumber* _supportsMusicStreamingValue;
	NSString* _systemReleaseType;
	os_unfair_lock_s _lock;

}

@property (nonatomic,copy,readonly) NSString * deviceModel; 
@property (nonatomic,copy,readonly) NSString * rawDeviceModel; 
@property (nonatomic,copy,readonly) NSString * hardwarePlatform; 
@property (nonatomic,copy,readonly) NSString * deviceGUID; 
@property (nonatomic,copy,readonly) NSData * deviceFairPlayGUIDData; 
@property (nonatomic,copy,readonly) NSString * serialNumber; 
@property (nonatomic,copy,readonly) NSString * macAddress; 
@property (nonatomic,copy,readonly) NSData * macAddressData; 
@property (nonatomic,readonly) CGSize mainScreenSize; 
@property (nonatomic,readonly) BOOL hasCellularDataCapability; 
@property (nonatomic,readonly) BOOL hasTelephonyCapability; 
@property (nonatomic,readonly) BOOL hasWiFiCapability; 
@property (nonatomic,readonly) BOOL hasWAPICapability; 
@property (nonatomic,readonly) BOOL has720pCapability; 
@property (nonatomic,readonly) BOOL has1080pCapability; 
@property (nonatomic,readonly) int screenClass; 
@property (nonatomic,readonly) int deviceClass; 
@property (nonatomic,readonly) BOOL isIPhone; 
@property (nonatomic,readonly) BOOL isAppleTV; 
@property (nonatomic,readonly) BOOL isIPad; 
@property (nonatomic,readonly) BOOL isIPod; 
@property (nonatomic,readonly) BOOL isWatch; 
@property (nonatomic,readonly) BOOL isAudioAccessory; 
@property (nonatomic,readonly) BOOL isMac; 
@property (nonatomic,copy,readonly) NSString * productVersion; 
@property (nonatomic,copy,readonly) NSString * productPlatform; 
@property (nonatomic,copy,readonly) NSString * buildVersion; 
@property (getter=isInternalBuild,nonatomic,readonly) BOOL internalBuild; 
@property (nonatomic,copy,readonly) NSString * systemReleaseType; 
@property (nonatomic,readonly) unsigned fairPlayDeviceType; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * currentLocale; 
@property (nonatomic,readonly) BOOL supportsSideLoadedMediaContent; 
@property (nonatomic,readonly) BOOL supportsMusicStreaming; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentDeviceInfo;
+(id)defaultInfo;
-(NSString *)name;
-(void)dealloc;
-(id)_init;
-(NSString *)currentLocale;
-(NSString *)productVersion;
-(int)deviceClass;
-(BOOL)isWatch;
-(BOOL)isMac;
-(NSString *)buildVersion;
-(NSString *)serialNumber;
-(NSString *)macAddress;
-(BOOL)isInternalBuild;
-(NSString *)deviceModel;
-(NSString *)systemReleaseType;
-(NSString *)deviceGUID;
-(BOOL)isAppleTV;
-(NSString *)hardwarePlatform;
-(BOOL)hasTelephonyCapability;
-(BOOL)hasCellularDataCapability;
-(NSString *)rawDeviceModel;
-(NSData *)deviceFairPlayGUIDData;
-(NSData *)macAddressData;
-(CGSize)mainScreenSize;
-(BOOL)hasWiFiCapability;
-(BOOL)hasWAPICapability;
-(BOOL)has720pCapability;
-(BOOL)has1080pCapability;
-(int)screenClass;
-(BOOL)isIPhone;
-(BOOL)isIPad;
-(BOOL)isIPod;
-(BOOL)isAudioAccessory;
-(NSString *)productPlatform;
-(unsigned)fairPlayDeviceType;
-(BOOL)supportsSideLoadedMediaContent;
-(BOOL)supportsMusicStreaming;
-(int)_gestaltDeviceClass;
@end

