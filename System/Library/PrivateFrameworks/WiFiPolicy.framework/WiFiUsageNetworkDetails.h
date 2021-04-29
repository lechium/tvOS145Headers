/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiPolicy/WiFiPolicy-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, WiFiUsageBssDetails, NSMutableArray, NSDate;

@interface WiFiUsageNetworkDetails : NSObject <NSCopying> {

	BOOL _isKnown;
	BOOL _isOpen;
	BOOL _isPublic;
	BOOL _isHome;
	BOOL _isWork;
	BOOL _isInternal;
	BOOL _isManaged;
	BOOL _isCarrierBased;
	BOOL _isCarPlay;
	BOOL _isAppBased;
	BOOL _isWalletBased;
	BOOL _isPersonalHotspot;
	BOOL _isInstantHotspot;
	BOOL _isAutoHotspot;
	BOOL _isMoving;
	BOOL _isMesh;
	BOOL _isWidelyDeployed;
	BOOL _isAutoJoined;
	BOOL _isAdhoc;
	BOOL _isHidden;
	BOOL _isPasspoint;
	BOOL _isMetered;
	BOOL _hasWapi;
	BOOL _hasWeakSecurity;
	BOOL _hasWpa3;
	BOOL _hasWep;
	BOOL _hasEnterpriseSecurity;
	BOOL _hasLegacyEnterpriseSecurity;
	BOOL _hasNoMap;
	BOOL _hasAmbiguousSsid;
	BOOL _hasCustomNetworkSettings;
	BOOL _requiresUsername;
	BOOL _requiresPassword;
	BOOL _requiresIdentity;
	BOOL _requiresOtp;
	BOOL _canExposeImsi;
	BOOL _addedFromUI;
	BOOL _addedFromApp;
	BOOL _addedViaSync;
	BOOL _addedViaATJ;
	BOOL _addedViaRecommendation;
	BOOL _addedViaSharing;
	BOOL _autoJoinDisabled;
	BOOL _autoLoginDisabled;
	BOOL _lowDataModeEnabled;
	BOOL _controlCenterDisabled;
	BOOL _privateMacFeatureToggled;
	BOOL _privateMacUnderClassification;
	BOOL _privateMacDisabledByProfile;
	BOOL _privateMacNetworkTypeHome;
	long long _usageRank;
	unsigned long long _advertisedCountryCode;
	unsigned long long _appliedCountryCode;
	unsigned long long _localeSource;
	NSString* _bssEnvironment;
	NSString* _networkName;
	unsigned long long _colocatedNetworkCount;
	WiFiUsageBssDetails* _connectedBss;
	unsigned long long _switchedAwayCount;
	unsigned long long _switchedToCount;
	long long _networkScore;
	NSMutableArray* _downloadSpeedResults;
	NSDate* _lastJoinDate;
	NSString* _privateMacType;
	unsigned long long _captiveStatus;

}

@property (nonatomic,retain) NSMutableArray * downloadSpeedResults;                 //@synthesize downloadSpeedResults=_downloadSpeedResults - In the implementation block
@property (assign,nonatomic) BOOL isKnown;                                          //@synthesize isKnown=_isKnown - In the implementation block
@property (assign,nonatomic) BOOL isOpen;                                           //@synthesize isOpen=_isOpen - In the implementation block
@property (assign,nonatomic) BOOL isPublic;                                         //@synthesize isPublic=_isPublic - In the implementation block
@property (assign,nonatomic) BOOL isHome;                                           //@synthesize isHome=_isHome - In the implementation block
@property (assign,nonatomic) BOOL isWork;                                           //@synthesize isWork=_isWork - In the implementation block
@property (assign,nonatomic) BOOL isInternal;                                       //@synthesize isInternal=_isInternal - In the implementation block
@property (assign,nonatomic) BOOL isManaged;                                        //@synthesize isManaged=_isManaged - In the implementation block
@property (assign,nonatomic) BOOL isCarrierBased;                                   //@synthesize isCarrierBased=_isCarrierBased - In the implementation block
@property (assign,nonatomic) BOOL isCarPlay;                                        //@synthesize isCarPlay=_isCarPlay - In the implementation block
@property (assign,nonatomic) BOOL isAppBased;                                       //@synthesize isAppBased=_isAppBased - In the implementation block
@property (assign,nonatomic) BOOL isWalletBased;                                    //@synthesize isWalletBased=_isWalletBased - In the implementation block
@property (assign,nonatomic) BOOL isPersonalHotspot;                                //@synthesize isPersonalHotspot=_isPersonalHotspot - In the implementation block
@property (assign,nonatomic) BOOL isInstantHotspot;                                 //@synthesize isInstantHotspot=_isInstantHotspot - In the implementation block
@property (assign,nonatomic) BOOL isAutoHotspot;                                    //@synthesize isAutoHotspot=_isAutoHotspot - In the implementation block
@property (assign,nonatomic) BOOL isMoving;                                         //@synthesize isMoving=_isMoving - In the implementation block
@property (assign,nonatomic) BOOL isMesh;                                           //@synthesize isMesh=_isMesh - In the implementation block
@property (assign,nonatomic) BOOL isWidelyDeployed;                                 //@synthesize isWidelyDeployed=_isWidelyDeployed - In the implementation block
@property (assign,nonatomic) BOOL isAutoJoined;                                     //@synthesize isAutoJoined=_isAutoJoined - In the implementation block
@property (assign,nonatomic) BOOL isAdhoc;                                          //@synthesize isAdhoc=_isAdhoc - In the implementation block
@property (assign,nonatomic) BOOL isHidden;                                         //@synthesize isHidden=_isHidden - In the implementation block
@property (assign,nonatomic) BOOL isPasspoint;                                      //@synthesize isPasspoint=_isPasspoint - In the implementation block
@property (assign,nonatomic) BOOL isMetered;                                        //@synthesize isMetered=_isMetered - In the implementation block
@property (assign,nonatomic) BOOL hasWapi;                                          //@synthesize hasWapi=_hasWapi - In the implementation block
@property (assign,nonatomic) BOOL hasWeakSecurity;                                  //@synthesize hasWeakSecurity=_hasWeakSecurity - In the implementation block
@property (assign,nonatomic) BOOL hasWpa3;                                          //@synthesize hasWpa3=_hasWpa3 - In the implementation block
@property (assign,nonatomic) BOOL hasWep;                                           //@synthesize hasWep=_hasWep - In the implementation block
@property (assign,nonatomic) BOOL hasEnterpriseSecurity;                            //@synthesize hasEnterpriseSecurity=_hasEnterpriseSecurity - In the implementation block
@property (assign,nonatomic) BOOL hasLegacyEnterpriseSecurity;                      //@synthesize hasLegacyEnterpriseSecurity=_hasLegacyEnterpriseSecurity - In the implementation block
@property (assign,nonatomic) BOOL hasNoMap;                                         //@synthesize hasNoMap=_hasNoMap - In the implementation block
@property (assign,nonatomic) BOOL hasAmbiguousSsid;                                 //@synthesize hasAmbiguousSsid=_hasAmbiguousSsid - In the implementation block
@property (assign,nonatomic) BOOL hasCustomNetworkSettings;                         //@synthesize hasCustomNetworkSettings=_hasCustomNetworkSettings - In the implementation block
@property (assign,nonatomic) BOOL requiresUsername;                                 //@synthesize requiresUsername=_requiresUsername - In the implementation block
@property (assign,nonatomic) BOOL requiresPassword;                                 //@synthesize requiresPassword=_requiresPassword - In the implementation block
@property (assign,nonatomic) BOOL requiresIdentity;                                 //@synthesize requiresIdentity=_requiresIdentity - In the implementation block
@property (assign,nonatomic) BOOL requiresOtp;                                      //@synthesize requiresOtp=_requiresOtp - In the implementation block
@property (assign,nonatomic) BOOL canExposeImsi;                                    //@synthesize canExposeImsi=_canExposeImsi - In the implementation block
@property (assign,nonatomic) BOOL addedFromUI;                                      //@synthesize addedFromUI=_addedFromUI - In the implementation block
@property (assign,nonatomic) BOOL addedFromApp;                                     //@synthesize addedFromApp=_addedFromApp - In the implementation block
@property (assign,nonatomic) BOOL addedViaSync;                                     //@synthesize addedViaSync=_addedViaSync - In the implementation block
@property (assign,nonatomic) BOOL addedViaATJ;                                      //@synthesize addedViaATJ=_addedViaATJ - In the implementation block
@property (assign,nonatomic) BOOL addedViaRecommendation;                           //@synthesize addedViaRecommendation=_addedViaRecommendation - In the implementation block
@property (assign,nonatomic) BOOL addedViaSharing;                                  //@synthesize addedViaSharing=_addedViaSharing - In the implementation block
@property (assign,nonatomic) long long usageRank;                                   //@synthesize usageRank=_usageRank - In the implementation block
@property (assign,nonatomic) BOOL autoJoinDisabled;                                 //@synthesize autoJoinDisabled=_autoJoinDisabled - In the implementation block
@property (assign,nonatomic) BOOL autoLoginDisabled;                                //@synthesize autoLoginDisabled=_autoLoginDisabled - In the implementation block
@property (assign,nonatomic) BOOL lowDataModeEnabled;                               //@synthesize lowDataModeEnabled=_lowDataModeEnabled - In the implementation block
@property (assign,nonatomic) BOOL controlCenterDisabled;                            //@synthesize controlCenterDisabled=_controlCenterDisabled - In the implementation block
@property (assign,nonatomic) unsigned long long advertisedCountryCode;              //@synthesize advertisedCountryCode=_advertisedCountryCode - In the implementation block
@property (assign,nonatomic) unsigned long long appliedCountryCode;                 //@synthesize appliedCountryCode=_appliedCountryCode - In the implementation block
@property (assign,nonatomic) unsigned long long localeSource;                       //@synthesize localeSource=_localeSource - In the implementation block
@property (nonatomic,copy) NSString * bssEnvironment;                               //@synthesize bssEnvironment=_bssEnvironment - In the implementation block
@property (nonatomic,copy) NSString * networkName;                                  //@synthesize networkName=_networkName - In the implementation block
@property (assign,nonatomic) unsigned long long colocatedNetworkCount;              //@synthesize colocatedNetworkCount=_colocatedNetworkCount - In the implementation block
@property (nonatomic,copy) WiFiUsageBssDetails * connectedBss;                      //@synthesize connectedBss=_connectedBss - In the implementation block
@property (assign,nonatomic) unsigned long long switchedAwayCount;                  //@synthesize switchedAwayCount=_switchedAwayCount - In the implementation block
@property (assign,nonatomic) unsigned long long switchedToCount;                    //@synthesize switchedToCount=_switchedToCount - In the implementation block
@property (assign,nonatomic) long long networkScore;                                //@synthesize networkScore=_networkScore - In the implementation block
@property (nonatomic,copy) NSDate * lastJoinDate;                                   //@synthesize lastJoinDate=_lastJoinDate - In the implementation block
@property (nonatomic,copy) NSString * privateMacType;                               //@synthesize privateMacType=_privateMacType - In the implementation block
@property (assign,nonatomic) BOOL privateMacFeatureToggled;                         //@synthesize privateMacFeatureToggled=_privateMacFeatureToggled - In the implementation block
@property (assign,nonatomic) BOOL privateMacUnderClassification;                    //@synthesize privateMacUnderClassification=_privateMacUnderClassification - In the implementation block
@property (assign,nonatomic) BOOL privateMacDisabledByProfile;                      //@synthesize privateMacDisabledByProfile=_privateMacDisabledByProfile - In the implementation block
@property (assign,nonatomic) BOOL privateMacNetworkTypeHome;                        //@synthesize privateMacNetworkTypeHome=_privateMacNetworkTypeHome - In the implementation block
@property (assign,nonatomic) unsigned long long captiveStatus;                      //@synthesize captiveStatus=_captiveStatus - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)isOpen;
-(BOOL)isHidden;
-(void)setIsHidden:(BOOL)arg1 ;
-(void)setUsageRank:(long long)arg1 ;
-(long long)usageRank;
-(void)setPrivateMacType:(NSString *)arg1 ;
-(NSString *)privateMacType;
-(void)setLocaleSource:(unsigned long long)arg1 ;
-(unsigned long long)localeSource;
-(void)setNetworkScore:(long long)arg1 ;
-(long long)networkScore;
-(BOOL)isMoving;
-(BOOL)isInternal;
-(NSString *)networkName;
-(void)setNetworkName:(NSString *)arg1 ;
-(BOOL)isKnown;
-(void)setAutoJoinDisabled:(BOOL)arg1 ;
-(void)setIsInternal:(BOOL)arg1 ;
-(BOOL)isManaged;
-(BOOL)isHome;
-(void)setIsHome:(BOOL)arg1 ;
-(BOOL)requiresPassword;
-(void)setIsManaged:(BOOL)arg1 ;
-(BOOL)isInstantHotspot;
-(BOOL)isAdhoc;
-(BOOL)isCarrierBased;
-(BOOL)isPersonalHotspot;
-(BOOL)isCarPlay;
-(void)setRequiresPassword:(BOOL)arg1 ;
-(BOOL)requiresUsername;
-(void)setRequiresUsername:(BOOL)arg1 ;
-(void)setIsPasspoint:(BOOL)arg1 ;
-(BOOL)isPasspoint;
-(void)setIsPersonalHotspot:(BOOL)arg1 ;
-(id)initWithNetworkName:(id)arg1 ;
-(BOOL)isPublic;
-(BOOL)isAppBased;
-(BOOL)autoJoinDisabled;
-(void)setIsWork:(BOOL)arg1 ;
-(void)setSwitchedToCount:(unsigned long long)arg1 ;
-(BOOL)isWork;
-(unsigned long long)switchedToCount;
-(void)setAppliedCountryCode:(unsigned long long)arg1 ;
-(id)eventDictionary:(BOOL)arg1 isInternalInstall:(BOOL)arg2 ;
-(unsigned long long)appliedCountryCode;
-(void)setIsKnown:(BOOL)arg1 ;
-(void)setIsOpen:(BOOL)arg1 ;
-(void)setCaptiveStatus:(unsigned long long)arg1 ;
-(void)setIsPublic:(BOOL)arg1 ;
-(void)setIsCarrierBased:(BOOL)arg1 ;
-(void)setIsCarPlay:(BOOL)arg1 ;
-(void)setIsAppBased:(BOOL)arg1 ;
-(void)setIsWalletBased:(BOOL)arg1 ;
-(void)setIsInstantHotspot:(BOOL)arg1 ;
-(void)setIsAutoHotspot:(BOOL)arg1 ;
-(void)setIsMoving:(BOOL)arg1 ;
-(void)setIsMesh:(BOOL)arg1 ;
-(void)setIsWidelyDeployed:(BOOL)arg1 ;
-(void)setIsAutoJoined:(BOOL)arg1 ;
-(void)setIsAdhoc:(BOOL)arg1 ;
-(void)setIsMetered:(BOOL)arg1 ;
-(void)setHasWapi:(BOOL)arg1 ;
-(void)setHasWeakSecurity:(BOOL)arg1 ;
-(void)setHasWpa3:(BOOL)arg1 ;
-(void)setHasWep:(BOOL)arg1 ;
-(void)setHasEnterpriseSecurity:(BOOL)arg1 ;
-(void)setHasLegacyEnterpriseSecurity:(BOOL)arg1 ;
-(void)setHasNoMap:(BOOL)arg1 ;
-(void)setHasAmbiguousSsid:(BOOL)arg1 ;
-(void)setHasCustomNetworkSettings:(BOOL)arg1 ;
-(void)setRequiresIdentity:(BOOL)arg1 ;
-(void)setRequiresOtp:(BOOL)arg1 ;
-(void)setCanExposeImsi:(BOOL)arg1 ;
-(void)setAddedFromUI:(BOOL)arg1 ;
-(void)setAddedFromApp:(BOOL)arg1 ;
-(void)setAddedViaSync:(BOOL)arg1 ;
-(void)setAddedViaATJ:(BOOL)arg1 ;
-(void)setAddedViaRecommendation:(BOOL)arg1 ;
-(void)setAddedViaSharing:(BOOL)arg1 ;
-(void)setAutoLoginDisabled:(BOOL)arg1 ;
-(void)setLowDataModeEnabled:(BOOL)arg1 ;
-(void)setControlCenterDisabled:(BOOL)arg1 ;
-(void)setAdvertisedCountryCode:(unsigned long long)arg1 ;
-(void)setBssEnvironment:(NSString *)arg1 ;
-(void)setLastJoinDate:(NSDate *)arg1 ;
-(void)setConnectedBss:(WiFiUsageBssDetails *)arg1 ;
-(void)setColocatedNetworkCount:(unsigned long long)arg1 ;
-(void)setSwitchedAwayCount:(unsigned long long)arg1 ;
-(void)addDownloadSpeed:(double)arg1 ;
-(void)setPrivateMacFeatureToggled:(BOOL)arg1 ;
-(void)setPrivateMacUnderClassification:(BOOL)arg1 ;
-(void)setPrivateMacDisabledByProfile:(BOOL)arg1 ;
-(void)setPrivateMacNetworkTypeHome:(BOOL)arg1 ;
-(BOOL)isWalletBased;
-(BOOL)isAutoHotspot;
-(BOOL)isMesh;
-(BOOL)isWidelyDeployed;
-(BOOL)isAutoJoined;
-(BOOL)isMetered;
-(BOOL)hasWapi;
-(BOOL)hasWeakSecurity;
-(BOOL)hasWpa3;
-(BOOL)hasWep;
-(BOOL)hasEnterpriseSecurity;
-(BOOL)hasLegacyEnterpriseSecurity;
-(BOOL)hasNoMap;
-(BOOL)hasAmbiguousSsid;
-(BOOL)hasCustomNetworkSettings;
-(BOOL)requiresIdentity;
-(BOOL)requiresOtp;
-(BOOL)canExposeImsi;
-(BOOL)addedFromUI;
-(BOOL)addedFromApp;
-(BOOL)addedViaSync;
-(BOOL)addedViaATJ;
-(BOOL)addedViaRecommendation;
-(BOOL)addedViaSharing;
-(BOOL)autoLoginDisabled;
-(BOOL)lowDataModeEnabled;
-(BOOL)controlCenterDisabled;
-(unsigned long long)advertisedCountryCode;
-(NSString *)bssEnvironment;
-(unsigned long long)colocatedNetworkCount;
-(WiFiUsageBssDetails *)connectedBss;
-(unsigned long long)switchedAwayCount;
-(NSMutableArray *)downloadSpeedResults;
-(void)setDownloadSpeedResults:(NSMutableArray *)arg1 ;
-(NSDate *)lastJoinDate;
-(BOOL)privateMacFeatureToggled;
-(BOOL)privateMacUnderClassification;
-(BOOL)privateMacDisabledByProfile;
-(BOOL)privateMacNetworkTypeHome;
-(unsigned long long)captiveStatus;
@end

