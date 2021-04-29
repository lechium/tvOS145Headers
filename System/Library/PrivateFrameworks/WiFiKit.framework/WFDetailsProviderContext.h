/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, NSString;


@protocol WFDetailsProviderContext <WFProviderContext>
@property (nonatomic,readonly) NSArray * recommendations; 
@property (assign) BOOL diagnosable; 
@property (assign,nonatomic) BOOL autoJoinEnabled; 
@property (assign,nonatomic) BOOL autoLoginEnabled; 
@property (assign,nonatomic) BOOL isInSaveDataMode; 
@property (getter=isCurrent,nonatomic,readonly) BOOL current; 
@property (getter=isKnownNetwork,nonatomic,readonly) BOOL knownNetwork; 
@property (getter=isRandomMACAddressDisabled,nonatomic,readonly) BOOL randomMACAddressDisabled; 
@property (getter=isRandomMACAddressConfigurable,nonatomic,readonly) BOOL randomMACAddressConfigurable; 
@property (getter=isRandomMACFeatureEnabled,nonatomic,readonly) BOOL randomMACFeatureEnabled; 
@property (getter=isConnectedWithHardwareAddress,nonatomic,readonly) BOOL connectedWithHardwareAddress; 
@property (getter=isRandomMACSwitchOn,nonatomic,readonly) BOOL randomMACSwitchOn; 
@property (nonatomic,copy,readonly) NSString * randomMACAddress; 
@property (nonatomic,copy,readonly) NSString * hardwareMACAddress; 
@property (nonatomic,copy) NSString * staticPrivateMACFooterText; 
@property (nonatomic,copy) NSString * turnONPrivateMACFooterText; 
@property (nonatomic,copy) NSString * turnOFFPrivateMACFooterText; 
@required
-(void)forget;
-(BOOL)isCurrent;
-(void)join;
-(void)manage;
-(BOOL)diagnosable;
-(void)setDiagnosable:(BOOL)arg1;
-(BOOL)autoJoinEnabled;
-(void)setAutoJoinEnabled:(BOOL)arg1;
-(BOOL)autoLoginEnabled;
-(void)setAutoLoginEnabled:(BOOL)arg1;
-(BOOL)isInSaveDataMode;
-(void)setIsInSaveDataMode:(BOOL)arg1;
-(NSString *)randomMACAddress;
-(NSString *)hardwareMACAddress;
-(BOOL)isRandomMACAddressDisabled;
-(BOOL)isRandomMACSwitchOn;
-(BOOL)isRandomMACAddressConfigurable;
-(id)diagnosticsContext;
-(void)enableRandomMAC;
-(void)disableRandomMAC;
-(BOOL)isRandomMACFeatureEnabled;
-(void)openRecommendationLink;
-(NSString *)staticPrivateMACFooterText;
-(void)renewLease;
-(void)setStaticPrivateMACFooterText:(id)arg1;
-(void)setTurnONPrivateMACFooterText:(id)arg1;
-(void)setTurnOFFPrivateMACFooterText:(id)arg1;
-(NSArray *)recommendations;
-(BOOL)isConnectedWithHardwareAddress;
-(BOOL)isKnownNetwork;
-(NSString *)turnONPrivateMACFooterText;
-(NSString *)turnOFFPrivateMACFooterText;

@end

