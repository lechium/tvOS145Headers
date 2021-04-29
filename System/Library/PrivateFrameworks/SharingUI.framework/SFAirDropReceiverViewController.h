/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SharingUI/SharingUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SFWirelessSettingsControllerDelegate.h>

@class NSString, UILabel, UIButton, SFAirDropIconView, NSLayoutConstraint, SFAirDropActiveIconView, NSArray, SFAirDropDiscoveryController, SFWirelessSettingsController, UIVisualEffectView;

@interface SFAirDropReceiverViewController : UIViewController <SFWirelessSettingsControllerDelegate> {

	NSString* _sessionID;
	UILabel* _titleLabel;
	UIButton* _reportBugButton;
	SFAirDropIconView* _airDropIconView;
	NSLayoutConstraint* _airDropIconLeftConstraint;
	UILabel* _noWifiLabel;
	NSLayoutConstraint* _noWifiRightConstraint;
	SFAirDropActiveIconView* _airDropActiveIconView;
	NSLayoutConstraint* _airDropActiveIconLeftConstraint;
	UILabel* _instructionsLabel;
	NSLayoutConstraint* _instructionsRightConstraint;
	SFAirDropActiveIconView* _airDropInactiveIconView;
	NSLayoutConstraint* _airDropInactiveIconLeftConstraint;
	UILabel* _noAWDLLabel;
	NSLayoutConstraint* _noAWDLRightConstraint;
	NSArray* _labelYConstraints;
	NSArray* _largeTextLabelYConstraints;
	NSArray* _airdropViewYConstraints;
	NSArray* _largeTextAirdropViewYConstraints;
	SFAirDropDiscoveryController* _discoveryController;
	SFWirelessSettingsController* _wirelessSettings;
	UIVisualEffectView* _titleVibrancyView;
	UIVisualEffectView* _instructionsVibrancyView;
	UIVisualEffectView* _iconsVibrancyView;
	SFOperationRef _logger;
	NSString* _overriddenTitleText;
	NSString* _overriddenNoWiFIBTText;
	NSString* _overriddenNoAWDLText;
	NSString* _overriddenInstructionsText;

}

@property (nonatomic,copy) NSString * overriddenTitleText;                     //@synthesize overriddenTitleText=_overriddenTitleText - In the implementation block
@property (nonatomic,copy) NSString * overriddenNoWiFIBTText;                  //@synthesize overriddenNoWiFIBTText=_overriddenNoWiFIBTText - In the implementation block
@property (nonatomic,copy) NSString * overriddenNoAWDLText;                    //@synthesize overriddenNoAWDLText=_overriddenNoAWDLText - In the implementation block
@property (nonatomic,copy) NSString * overriddenInstructionsText;              //@synthesize overriddenInstructionsText=_overriddenInstructionsText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(void)stopAdvertising;
-(id)titleText;
-(void)viewDidLoad;
-(void)startAdvertising;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)updateFontSizes;
-(BOOL)isWifiEnabled;
-(void)wirelessSettingsDidChange:(id)arg1 ;
-(BOOL)isBluetoothEnabled;
-(void)didEnterBackground:(id)arg1 ;
-(void)willEnterForeground:(id)arg1 ;
-(void)updateContentAreaAnimated:(BOOL)arg1 ;
-(id)wifiBtHelpTextLocalizedStringKey;
-(void)enableAirDropRequiredFeatures;
-(id)noWiFiBTText;
-(id)attributedStringWithTitle:(id)arg1 content:(id)arg2 ;
-(id)noAWDLText;
-(id)instructionsText;
-(void)_createtvOSLayoutConstraints;
-(BOOL)isTetheredModeEnabled;
-(NSString *)overriddenTitleText;
-(void)setOverriddenTitleText:(NSString *)arg1 ;
-(NSString *)overriddenNoWiFIBTText;
-(void)setOverriddenNoWiFIBTText:(NSString *)arg1 ;
-(NSString *)overriddenNoAWDLText;
-(void)setOverriddenNoAWDLText:(NSString *)arg1 ;
-(NSString *)overriddenInstructionsText;
-(void)setOverriddenInstructionsText:(NSString *)arg1 ;
@end

