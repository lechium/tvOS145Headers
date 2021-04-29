/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class AVExternalDeviceInternal, NSArray, NSDictionary, NSData, NSString;

@interface AVExternalDevice : NSObject {

	AVExternalDeviceInternal* _externalDevice;

}

@property (assign,nonatomic) id<AVExternalDeviceDelegate> delegate; 
@property (nonatomic,readonly) NSArray * screenIDs; 
@property (nonatomic,readonly) NSDictionary * screenInputCapabilities; 
@property (nonatomic,readonly) NSDictionary * screenPrimaryInputDevices; 
@property (nonatomic,readonly) NSDictionary * screenViewAreas; 
@property (nonatomic,readonly) NSDictionary * screenSafeAreas; 
@property (nonatomic,readonly) NSData * OEMIcon; 
@property (nonatomic,readonly) NSArray * OEMIcons; 
@property (nonatomic,readonly) NSString * OEMIconLabel; 
@property (nonatomic,readonly) BOOL OEMIconVisible; 
@property (nonatomic,readonly) NSString * modelName; 
@property (nonatomic,readonly) NSArray * externalDeviceHIDs; 
@property (nonatomic,readonly) BOOL nightMode; 
@property (nonatomic,readonly) BOOL nightModeSupported; 
@property (nonatomic,readonly) BOOL rightHandDrive; 
@property (nonatomic,readonly) NSArray * limitedUIElements; 
@property (nonatomic,readonly) BOOL limitedUI; 
@property (nonatomic,readonly) BOOL ownsScreen; 
@property (nonatomic,readonly) BOOL ownsTurnByTurnNavigation; 
@property (nonatomic,readonly) BOOL recognizingSpeech; 
@property (nonatomic,readonly) NSArray * supportedFeatures; 
@property (nonatomic,readonly) long long electronicTollCollection; 
@property (nonatomic,readonly) long long navigationAidedDriving; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * ID; 
@property (nonatomic,readonly) long long transportType; 
@property (nonatomic,readonly) NSData * MFiCertificateSerialNumber; 
+(BOOL)isCarPlaySessionActive;
+(id)sharedLocalDevice;
+(id)currentCarPlayExternalDevice;
+(id)currentExternalDevice;
-(NSString *)name;
-(id)init;
-(void)dealloc;
-(id<AVExternalDeviceDelegate>)delegate;
-(void)setDelegate:(id<AVExternalDeviceDelegate>)arg1 ;
-(long long)transportType;
-(NSString *)ID;
-(id)_weakReference;
-(NSArray *)supportedFeatures;
-(NSString *)modelName;
-(BOOL)limitedUI;
-(NSArray *)limitedUIElements;
-(BOOL)nightMode;
-(OpaqueFigEndpointRef)figEndpoint;
-(id)_figEndpointPropertyValueForKey:(CFStringRef)arg1 ;
-(id)_screenInfo;
-(id)initWithFigEndpoint:(OpaqueFigEndpointRef)arg1 ;
-(NSArray *)screenIDs;
-(NSArray *)externalDeviceHIDs;
-(NSArray *)OEMIcons;
-(void)requestCarUIForURL:(id)arg1 withUUID:(id)arg2 ;
-(NSDictionary *)screenViewAreas;
-(NSDictionary *)screenSafeAreas;
-(NSDictionary *)screenInputCapabilities;
-(NSDictionary *)screenPrimaryInputDevices;
-(id)externalDeviceHIDWithUUID:(id)arg1 ;
-(NSData *)OEMIcon;
-(NSString *)OEMIconLabel;
-(BOOL)OEMIconVisible;
-(BOOL)nightModeSupported;
-(BOOL)rightHandDrive;
-(BOOL)ownsTurnByTurnNavigation;
-(BOOL)ownsScreen;
-(BOOL)recognizingSpeech;
-(long long)electronicTollCollection;
-(long long)navigationAidedDriving;
-(NSData *)MFiCertificateSerialNumber;
-(void)requestCarUI;
-(void)requestCarUIForURL:(id)arg1 ;
-(void)requestViewArea:(long long)arg1 forScreenID:(id)arg2 ;
-(id)requestTurnByTurnNavigationOwnership;
-(id)borrowScreenForClient:(id)arg1 reason:(id)arg2 ;
-(void)takeScreenForClient:(id)arg1 reason:(id)arg2 ;
-(void)takeScreenForConnection;
-(void)sendCommand:(id)arg1 withParameters:(id)arg2 ;
-(void)_triggerFakeNotificationNamed:(id)arg1 withPayload:(id)arg2 ;
@end
