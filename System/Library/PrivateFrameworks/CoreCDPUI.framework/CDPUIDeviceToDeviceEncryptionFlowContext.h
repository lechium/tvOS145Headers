/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIViewController, NSString;

@interface CDPUIDeviceToDeviceEncryptionFlowContext : NSObject {

	UIViewController* _presentingViewController;
	long long _deviceToDeviceEncryptionUpgradeUIStyle;
	long long _deviceToDeviceEncryptionUpgradeType;
	NSString* _securityUpgradeContext;
	NSString* _featureName;
	NSString* _altDSID;

}

@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic) long long deviceToDeviceEncryptionUpgradeUIStyle;                //@synthesize deviceToDeviceEncryptionUpgradeUIStyle=_deviceToDeviceEncryptionUpgradeUIStyle - In the implementation block
@property (assign,nonatomic) long long deviceToDeviceEncryptionUpgradeType;                   //@synthesize deviceToDeviceEncryptionUpgradeType=_deviceToDeviceEncryptionUpgradeType - In the implementation block
@property (nonatomic,copy) NSString * securityUpgradeContext;                                 //@synthesize securityUpgradeContext=_securityUpgradeContext - In the implementation block
@property (nonatomic,copy) NSString * featureName;                                            //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,copy,readonly) NSString * altDSID;                                       //@synthesize altDSID=_altDSID - In the implementation block
-(NSString *)altDSID;
-(id)initWithAltDSID:(id)arg1 ;
-(UIViewController *)presentingViewController;
-(NSString *)securityUpgradeContext;
-(void)setSecurityUpgradeContext:(NSString *)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(NSString *)featureName;
-(void)setFeatureName:(NSString *)arg1 ;
-(long long)deviceToDeviceEncryptionUpgradeUIStyle;
-(void)setDeviceToDeviceEncryptionUpgradeUIStyle:(long long)arg1 ;
-(long long)deviceToDeviceEncryptionUpgradeType;
-(void)setDeviceToDeviceEncryptionUpgradeType:(long long)arg1 ;
@end

