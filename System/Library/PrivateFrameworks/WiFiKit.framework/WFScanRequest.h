/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface WFScanRequest : NSObject {

	BOOL _applyRssiThresholdFilter;
	BOOL _includeBSSList;
	BOOL _lowPriorityScan;
	BOOL _channelListIncludesTwoFour;
	NSString* _ssid;
	unsigned long long _dwellTime;
	NSArray* _channels;
	long long _rssiThreshold;

}

@property (nonatomic,copy) NSString * ssid;                                //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,retain) NSArray * channels;                           //@synthesize channels=_channels - In the implementation block
@property (assign,nonatomic) long long rssiThreshold;                      //@synthesize rssiThreshold=_rssiThreshold - In the implementation block
@property (assign,nonatomic) BOOL channelListIncludesTwoFour;              //@synthesize channelListIncludesTwoFour=_channelListIncludesTwoFour - In the implementation block
@property (assign) BOOL applyRssiThresholdFilter;                          //@synthesize applyRssiThresholdFilter=_applyRssiThresholdFilter - In the implementation block
@property (assign) unsigned long long dwellTime;                           //@synthesize dwellTime=_dwellTime - In the implementation block
@property (assign) BOOL includeBSSList;                                    //@synthesize includeBSSList=_includeBSSList - In the implementation block
@property (assign) BOOL lowPriorityScan;                                   //@synthesize lowPriorityScan=_lowPriorityScan - In the implementation block
+(id)scanRequestForSSID:(id)arg1 channels:(id)arg2 ;
+(id)scanRequestForChannels:(id)arg1 ;
-(id)description;
-(id)init;
-(NSString *)ssid;
-(void)setSsid:(NSString *)arg1 ;
-(void)setDwellTime:(unsigned long long)arg1 ;
-(unsigned long long)dwellTime;
-(void)setRssiThreshold:(long long)arg1 ;
-(long long)rssiThreshold;
-(NSArray *)channels;
-(void)setChannels:(NSArray *)arg1 ;
-(BOOL)channelListIncludesTwoFour;
-(BOOL)lowPriorityScan;
-(BOOL)applyRssiThresholdFilter;
-(id)cScanParameters;
-(id)scanParameters;
-(void)setIncludeBSSList:(BOOL)arg1 ;
-(void)setLowPriorityScan:(BOOL)arg1 ;
-(void)setApplyRssiThresholdFilter:(BOOL)arg1 ;
-(id)initWithSSID:(id)arg1 channels:(id)arg2 ;
-(BOOL)_channelListIncludesTwoFour:(id)arg1 ;
-(id)_defaultScanDictionary;
-(BOOL)includeBSSList;
-(id)_channelListFromArrayOfChannels:(id)arg1 ;
-(void)setChannelListIncludesTwoFour:(BOOL)arg1 ;
@end

