/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface NRPairingCompatibilityVersionInfo : NSObject {

	BOOL _isOverrideActive;
	long long _pairingCompatibilityVersion;
	long long _maxPairingCompatibilityVersion;
	long long _minPairingCompatibilityVersion;
	long long _minPairingCompatibilityVersionWithChipID;
	long long _minQuickSwitchCompatibilityVersion;

}

@property (assign,nonatomic) long long pairingCompatibilityVersion;                           //@synthesize pairingCompatibilityVersion=_pairingCompatibilityVersion - In the implementation block
@property (assign,nonatomic) long long maxPairingCompatibilityVersion;                        //@synthesize maxPairingCompatibilityVersion=_maxPairingCompatibilityVersion - In the implementation block
@property (assign,nonatomic) long long minPairingCompatibilityVersion;                        //@synthesize minPairingCompatibilityVersion=_minPairingCompatibilityVersion - In the implementation block
@property (assign,nonatomic) long long minPairingCompatibilityVersionWithChipID;              //@synthesize minPairingCompatibilityVersionWithChipID=_minPairingCompatibilityVersionWithChipID - In the implementation block
@property (assign,nonatomic) long long minQuickSwitchCompatibilityVersion;                    //@synthesize minQuickSwitchCompatibilityVersion=_minQuickSwitchCompatibilityVersion - In the implementation block
@property (assign,nonatomic) BOOL isOverrideActive;                                           //@synthesize isOverrideActive=_isOverrideActive - In the implementation block
+(unsigned long long)valueForToken:(int)arg1 ;
+(id)numberFromCFPrefs:(id)arg1 ;
+(id)stringFromCFPrefs:(id)arg1 ;
+(id)systemVersions;
-(id)initInternal;
-(long long)minPairingCompatibilityVersionForChipID:(id)arg1 ;
-(long long)minQuickSwitchPairingCompatibilityVersionForChipID:(id)arg1 ;
-(long long)minPairingCompatibilityVersionForChipID:(id)arg1 name:(id)arg2 defaultVersion:(long long)arg3 ;
-(long long)maxPairingCompatibilityVersion;
-(long long)minPairingCompatibilityVersion;
-(long long)minQuickSwitchCompatibilityVersion;
-(long long)minPairingCompatibilityVersionWithChipID;
-(long long)pairingCompatibilityVersion;
-(BOOL)isOverrideActive;
-(void)setPairingCompatibilityVersion:(long long)arg1 ;
-(void)setMaxPairingCompatibilityVersion:(long long)arg1 ;
-(void)setMinPairingCompatibilityVersion:(long long)arg1 ;
-(void)setMinPairingCompatibilityVersionWithChipID:(long long)arg1 ;
-(void)setMinQuickSwitchCompatibilityVersion:(long long)arg1 ;
-(void)setIsOverrideActive:(BOOL)arg1 ;
@end

