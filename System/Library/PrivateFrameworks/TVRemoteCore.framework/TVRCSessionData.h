/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSString;

@interface TVRCSessionData : NSObject {

	BOOL _usedRTI;
	BOOL _usedSiri;
	BOOL _requiredPairing;
	BOOL _directionalControlsEnabled;
	NSDate* _sessionStartTime;
	NSString* _launchContextDesc;

}

@property (nonatomic,retain) NSDate * sessionStartTime;                    //@synthesize sessionStartTime=_sessionStartTime - In the implementation block
@property (assign,nonatomic) BOOL usedRTI;                                 //@synthesize usedRTI=_usedRTI - In the implementation block
@property (assign,nonatomic) BOOL usedSiri;                                //@synthesize usedSiri=_usedSiri - In the implementation block
@property (assign,nonatomic) BOOL requiredPairing;                         //@synthesize requiredPairing=_requiredPairing - In the implementation block
@property (assign,nonatomic) BOOL directionalControlsEnabled;              //@synthesize directionalControlsEnabled=_directionalControlsEnabled - In the implementation block
@property (nonatomic,copy) NSString * launchContextDesc;                   //@synthesize launchContextDesc=_launchContextDesc - In the implementation block
-(NSDate *)sessionStartTime;
-(void)setSessionStartTime:(NSDate *)arg1 ;
-(BOOL)usedRTI;
-(void)setUsedRTI:(BOOL)arg1 ;
-(BOOL)usedSiri;
-(void)setUsedSiri:(BOOL)arg1 ;
-(BOOL)requiredPairing;
-(void)setRequiredPairing:(BOOL)arg1 ;
-(BOOL)directionalControlsEnabled;
-(void)setDirectionalControlsEnabled:(BOOL)arg1 ;
-(NSString *)launchContextDesc;
-(void)setLaunchContextDesc:(NSString *)arg1 ;
@end

