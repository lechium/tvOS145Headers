/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol WFNetworkListing <NSObject>
@property (assign,nonatomic) BOOL showOtherNetwork; 
@property (assign) float currentNetworkScaledRSSI; 
@property (retain) id<WFNetworkListRecord> currentNetwork; 
@property (assign) long long currentNetworkState; 
@property (assign) unsigned long long currentNetworkSignalBars; 
@property (assign,nonatomic) long long deviceCapability; 
@property (nonatomic,copy) NSString * currentNetworkSubtitle; 
@property (assign,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL userAutoJoinEnabled; 
@optional
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1;
-(void)setScanning:(BOOL)arg1;
-(void)setCurrentNetwork:(id)arg1 previousNetwork:(id)arg2 reason:(unsigned long long)arg3;
-(void)setUserAutoJoinEnabled:(BOOL)arg1;
-(void)updateViewsForNetworks:(id)arg1;
-(NSString *)currentNetworkSubtitle;
-(BOOL)userAutoJoinEnabled;
-(long long)deviceCapability;
-(BOOL)shouldPromptWhenPersonalHotspotIsEnabled;
-(BOOL)shouldPromptWhenCarPlaySessionIsActive;
-(void)networkListDelegateWillPresentAccessoryViewController:(id)arg1;
-(void)networkListDelegateDidPresentAccessoryViewController:(id)arg1;
-(BOOL)supportsWiFiPasswordSharing;
-(BOOL)supportsHealthRecommendations;
-(void)powerModificationStateDidChange:(BOOL)arg1;
-(void)setAskToJoinMode:(long long)arg1;
-(void)setAutoInstantHotspotJoinOption:(long long)arg1;
-(void)setEnableCoreWiFi:(BOOL)arg1;
-(void)reloadCellsForNetworkNames:(id)arg1;
-(unsigned long long)currentNetworkSignalBars;
-(void)setCurrentNetworkSignalBars:(unsigned long long)arg1;
-(void)setDeviceCapability:(long long)arg1;
-(void)setCurrentNetworkSubtitle:(id)arg1;

@required
-(void)refresh;
-(void)setCurrentNetwork:(id)arg1;
-(id<WFNetworkListRecord>)currentNetwork;
-(void)setNetworks:(id)arg1;
-(void)setListDelegate:(id)arg1;
-(void)powerStateDidChange:(BOOL)arg1;
-(BOOL)showOtherNetwork;
-(void)setShowOtherNetwork:(BOOL)arg1;
-(float)currentNetworkScaledRSSI;
-(void)setCurrentNetworkScaledRSSI:(float)arg1;
-(long long)currentNetworkState;
-(void)setCurrentNetworkState:(long long)arg1;

@end

