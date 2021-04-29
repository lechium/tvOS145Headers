/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiPolicy/WiFiPolicy-Structs.h>
#import <WiFiPolicy/WiFiUsageSession.h>

@class NSString, NSDate, NSMutableSet;

@interface WiFiUsageSoftApSession : WiFiUsageSession {

	BOOL _compatibilityEnabled;
	BOOL _lastHiddenState;
	NSString* _requester;
	NSString* _status;
	NSString* _tearDownReason;
	NSDate* _lastAwdlActiveTime;
	NSDate* _lastInfraActiveTime;
	unsigned long long _appleClientConnectCount;
	unsigned long long _otherClientConnectCount;
	unsigned long long _hiddenClientConnectCount;
	unsigned long long _broadcastClientConnectCount;
	unsigned long long _twoFourGHzClientConnectCount;
	unsigned long long _fiveGHzClientConnectCount;
	unsigned long long _autoHotspotClientConnectCount;
	unsigned long long _instantHotspotClientConnectCount;
	unsigned long long _clientDisconnectCount;
	unsigned long long _maxConnectedClientCount;
	unsigned long long _lastChannel;
	unsigned long long _twoFourGHzChannelCount;
	unsigned long long _fiveGHzChannelCount;
	double _lowPowerModeDuration;
	double _infraActiveDuration;
	double _awdlActiveDuration;
	unsigned long long _infraStateChangedCount;
	unsigned long long _awdlStateChangedCount;
	unsigned long long _knownNetworkScanCount;
	unsigned long long _hiddenTransitionCount;
	unsigned long long _bandTransitionCount;
	unsigned long long _twoFourGHzDeniedChannelCount;
	unsigned long long _fiveGHzDeniedUnii1ChannelCount;
	unsigned long long _fiveGHzDeniedUnii2aChannelCount;
	unsigned long long _fiveGHzDeniedUnii2cChannelCount;
	unsigned long long _fiveGHzDeniedUnii3ChannelCount;
	unsigned long long _appliedCountryCode;
	NSMutableSet* _connectedClients;

}

@property (nonatomic,retain) NSString * requester;                                             //@synthesize requester=_requester - In the implementation block
@property (nonatomic,retain) NSString * status;                                                //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSString * tearDownReason;                                        //@synthesize tearDownReason=_tearDownReason - In the implementation block
@property (nonatomic,retain) NSDate * lastAwdlActiveTime;                                      //@synthesize lastAwdlActiveTime=_lastAwdlActiveTime - In the implementation block
@property (nonatomic,retain) NSDate * lastInfraActiveTime;                                     //@synthesize lastInfraActiveTime=_lastInfraActiveTime - In the implementation block
@property (assign,nonatomic) BOOL compatibilityEnabled;                                        //@synthesize compatibilityEnabled=_compatibilityEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long appleClientConnectCount;                       //@synthesize appleClientConnectCount=_appleClientConnectCount - In the implementation block
@property (assign,nonatomic) unsigned long long otherClientConnectCount;                       //@synthesize otherClientConnectCount=_otherClientConnectCount - In the implementation block
@property (assign,nonatomic) unsigned long long hiddenClientConnectCount;                      //@synthesize hiddenClientConnectCount=_hiddenClientConnectCount - In the implementation block
@property (assign,nonatomic) unsigned long long broadcastClientConnectCount;                   //@synthesize broadcastClientConnectCount=_broadcastClientConnectCount - In the implementation block
@property (assign,nonatomic) unsigned long long twoFourGHzClientConnectCount;                  //@synthesize twoFourGHzClientConnectCount=_twoFourGHzClientConnectCount - In the implementation block
@property (assign,nonatomic) unsigned long long fiveGHzClientConnectCount;                     //@synthesize fiveGHzClientConnectCount=_fiveGHzClientConnectCount - In the implementation block
@property (assign,nonatomic) unsigned long long autoHotspotClientConnectCount;                 //@synthesize autoHotspotClientConnectCount=_autoHotspotClientConnectCount - In the implementation block
@property (assign,nonatomic) unsigned long long instantHotspotClientConnectCount;              //@synthesize instantHotspotClientConnectCount=_instantHotspotClientConnectCount - In the implementation block
@property (assign,nonatomic) unsigned long long clientDisconnectCount;                         //@synthesize clientDisconnectCount=_clientDisconnectCount - In the implementation block
@property (assign,nonatomic) unsigned long long maxConnectedClientCount;                       //@synthesize maxConnectedClientCount=_maxConnectedClientCount - In the implementation block
@property (assign,nonatomic) BOOL lastHiddenState;                                             //@synthesize lastHiddenState=_lastHiddenState - In the implementation block
@property (assign,nonatomic) unsigned long long lastChannel;                                   //@synthesize lastChannel=_lastChannel - In the implementation block
@property (assign,nonatomic) unsigned long long twoFourGHzChannelCount;                        //@synthesize twoFourGHzChannelCount=_twoFourGHzChannelCount - In the implementation block
@property (assign,nonatomic) unsigned long long fiveGHzChannelCount;                           //@synthesize fiveGHzChannelCount=_fiveGHzChannelCount - In the implementation block
@property (assign,nonatomic) double lowPowerModeDuration;                                      //@synthesize lowPowerModeDuration=_lowPowerModeDuration - In the implementation block
@property (assign,nonatomic) double infraActiveDuration;                                       //@synthesize infraActiveDuration=_infraActiveDuration - In the implementation block
@property (assign,nonatomic) double awdlActiveDuration;                                        //@synthesize awdlActiveDuration=_awdlActiveDuration - In the implementation block
@property (assign,nonatomic) unsigned long long infraStateChangedCount;                        //@synthesize infraStateChangedCount=_infraStateChangedCount - In the implementation block
@property (assign,nonatomic) unsigned long long awdlStateChangedCount;                         //@synthesize awdlStateChangedCount=_awdlStateChangedCount - In the implementation block
@property (assign,nonatomic) unsigned long long knownNetworkScanCount;                         //@synthesize knownNetworkScanCount=_knownNetworkScanCount - In the implementation block
@property (assign,nonatomic) unsigned long long hiddenTransitionCount;                         //@synthesize hiddenTransitionCount=_hiddenTransitionCount - In the implementation block
@property (assign,nonatomic) unsigned long long bandTransitionCount;                           //@synthesize bandTransitionCount=_bandTransitionCount - In the implementation block
@property (assign,nonatomic) unsigned long long twoFourGHzDeniedChannelCount;                  //@synthesize twoFourGHzDeniedChannelCount=_twoFourGHzDeniedChannelCount - In the implementation block
@property (assign,nonatomic) unsigned long long fiveGHzDeniedUnii1ChannelCount;                //@synthesize fiveGHzDeniedUnii1ChannelCount=_fiveGHzDeniedUnii1ChannelCount - In the implementation block
@property (assign,nonatomic) unsigned long long fiveGHzDeniedUnii2aChannelCount;               //@synthesize fiveGHzDeniedUnii2aChannelCount=_fiveGHzDeniedUnii2aChannelCount - In the implementation block
@property (assign,nonatomic) unsigned long long fiveGHzDeniedUnii2cChannelCount;               //@synthesize fiveGHzDeniedUnii2cChannelCount=_fiveGHzDeniedUnii2cChannelCount - In the implementation block
@property (assign,nonatomic) unsigned long long fiveGHzDeniedUnii3ChannelCount;                //@synthesize fiveGHzDeniedUnii3ChannelCount=_fiveGHzDeniedUnii3ChannelCount - In the implementation block
@property (assign,nonatomic) unsigned long long appliedCountryCode;                            //@synthesize appliedCountryCode=_appliedCountryCode - In the implementation block
@property (nonatomic,retain) NSMutableSet * connectedClients;                                  //@synthesize connectedClients=_connectedClients - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)status;
-(void)setStatus:(NSString *)arg1 ;
-(void)setLowPowerModeDuration:(double)arg1 ;
-(double)lowPowerModeDuration;
-(id)initWithInterfaceName:(id)arg1 ;
-(NSString *)requester;
-(void)setRequester:(NSString *)arg1 ;
-(id)metricName;
-(NSMutableSet *)connectedClients;
-(void)linkQualityDidChange:(id)arg1 ;
-(void)setConnectedClients:(NSMutableSet *)arg1 ;
-(void)setTwoFourGHzDeniedChannelCount:(unsigned long long)arg1 ;
-(void)setFiveGHzDeniedUnii1ChannelCount:(unsigned long long)arg1 ;
-(void)setFiveGHzDeniedUnii2aChannelCount:(unsigned long long)arg1 ;
-(void)setFiveGHzDeniedUnii2cChannelCount:(unsigned long long)arg1 ;
-(void)setFiveGHzDeniedUnii3ChannelCount:(unsigned long long)arg1 ;
-(void)setLastInfraActiveTime:(NSDate *)arg1 ;
-(void)setLastAwdlActiveTime:(NSDate *)arg1 ;
-(void)setCompatibilityEnabled:(BOOL)arg1 ;
-(void)setInfraActiveDuration:(double)arg1 ;
-(void)setAwdlActiveDuration:(double)arg1 ;
-(void)setAppleClientConnectCount:(unsigned long long)arg1 ;
-(void)setOtherClientConnectCount:(unsigned long long)arg1 ;
-(void)setHiddenClientConnectCount:(unsigned long long)arg1 ;
-(void)setBroadcastClientConnectCount:(unsigned long long)arg1 ;
-(void)setTwoFourGHzClientConnectCount:(unsigned long long)arg1 ;
-(void)setFiveGHzClientConnectCount:(unsigned long long)arg1 ;
-(void)setClientDisconnectCount:(unsigned long long)arg1 ;
-(void)setMaxConnectedClientCount:(unsigned long long)arg1 ;
-(void)setTwoFourGHzChannelCount:(unsigned long long)arg1 ;
-(void)setFiveGHzChannelCount:(unsigned long long)arg1 ;
-(void)setInfraStateChangedCount:(unsigned long long)arg1 ;
-(void)setAwdlStateChangedCount:(unsigned long long)arg1 ;
-(void)setKnownNetworkScanCount:(unsigned long long)arg1 ;
-(void)setHiddenTransitionCount:(unsigned long long)arg1 ;
-(void)setBandTransitionCount:(unsigned long long)arg1 ;
-(void)setTearDownReason:(NSString *)arg1 ;
-(void)setAppliedCountryCode:(unsigned long long)arg1 ;
-(void)setLastHiddenState:(BOOL)arg1 ;
-(void)setLastChannel:(unsigned long long)arg1 ;
-(void)softApStateDidChange:(BOOL)arg1 requester:(id)arg2 status:(id)arg3 changeReason:(id)arg4 channelNumber:(unsigned long long)arg5 countryCode:(unsigned long long)arg6 isHidden:(BOOL)arg7 isInfraConnected:(BOOL)arg8 isAwdlUp:(BOOL)arg9 lowPowerModeDuration:(double)arg10 compatibilityMode:(BOOL)arg11 ;
-(void)summarizeSession;
-(void)linkStateDidChange:(BOOL)arg1 isInvoluntary:(BOOL)arg2 linkChangeReason:(long long)arg3 linkChangeSubreason:(long long)arg4 withNetworkDetails:(id)arg5 ;
-(void)awdlStateDidChange:(BOOL)arg1 inMode:(long long)arg2 ;
-(void)addSoftApClientEvent:(BOOL)arg1 identifier:(id)arg2 isAppleClient:(BOOL)arg3 isInstantHotspot:(BOOL)arg4 isAutoHotspot:(BOOL)arg5 isHidden:(BOOL)arg6 ;
-(void)addSoftApCoexEvent:(unsigned long long)arg1 deniedUnii1ChannelMap:(unsigned long long)arg2 deniedUnii2aChannelMap:(unsigned long long)arg3 deniedUnii2cChannelMap:(unsigned long long)arg4 deniedUnii3ChannelMap:(unsigned long long)arg5 ;
-(id)eventDictionary:(BOOL)arg1 isInternalInstall:(BOOL)arg2 ;
-(NSString *)tearDownReason;
-(NSDate *)lastAwdlActiveTime;
-(NSDate *)lastInfraActiveTime;
-(BOOL)compatibilityEnabled;
-(unsigned long long)appleClientConnectCount;
-(unsigned long long)otherClientConnectCount;
-(unsigned long long)hiddenClientConnectCount;
-(unsigned long long)broadcastClientConnectCount;
-(unsigned long long)twoFourGHzClientConnectCount;
-(unsigned long long)fiveGHzClientConnectCount;
-(unsigned long long)autoHotspotClientConnectCount;
-(void)setAutoHotspotClientConnectCount:(unsigned long long)arg1 ;
-(unsigned long long)instantHotspotClientConnectCount;
-(void)setInstantHotspotClientConnectCount:(unsigned long long)arg1 ;
-(unsigned long long)clientDisconnectCount;
-(unsigned long long)maxConnectedClientCount;
-(BOOL)lastHiddenState;
-(unsigned long long)lastChannel;
-(unsigned long long)twoFourGHzChannelCount;
-(unsigned long long)fiveGHzChannelCount;
-(double)infraActiveDuration;
-(double)awdlActiveDuration;
-(unsigned long long)infraStateChangedCount;
-(unsigned long long)awdlStateChangedCount;
-(unsigned long long)knownNetworkScanCount;
-(unsigned long long)hiddenTransitionCount;
-(unsigned long long)bandTransitionCount;
-(unsigned long long)twoFourGHzDeniedChannelCount;
-(unsigned long long)fiveGHzDeniedUnii1ChannelCount;
-(unsigned long long)fiveGHzDeniedUnii2aChannelCount;
-(unsigned long long)fiveGHzDeniedUnii2cChannelCount;
-(unsigned long long)fiveGHzDeniedUnii3ChannelCount;
-(unsigned long long)appliedCountryCode;
@end

