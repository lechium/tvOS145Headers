/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AFAudioPowerUpdaterDelegate.h>
#import <libobjc.A.dylib/SVXClientServiceConsuming.h>
#import <libobjc.A.dylib/SVXClientAudioPowerServicing.h>

@protocol SVXPerforming, SVXClientServiceProviding, AFAudioPowerProviding, SVXClientAudioPowerServiceDelegate;
@class AFAudioPowerUpdater, NSString;

@interface SVXClientAudioPowerService : NSObject <AFAudioPowerUpdaterDelegate, SVXClientServiceConsuming, SVXClientAudioPowerServicing> {

	id<SVXPerforming> _performer;
	long long _type;
	id<SVXClientServiceProviding> _clientServiceProvider;
	BOOL _wantsUpdate;
	long long _frequency;
	id<AFAudioPowerProviding> _provider;
	AFAudioPowerUpdater* _updater;
	id<SVXClientAudioPowerServiceDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SVXClientAudioPowerServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SVXClientAudioPowerServiceDelegate>)delegate;
-(void)setDelegate:(id<SVXClientAudioPowerServiceDelegate>)arg1 ;
-(void)endUpdate;
-(void)audioPowerUpdaterDidUpdate:(id)arg1 averagePower:(float)arg2 peakPower:(float)arg3 ;
-(void)_endUpdate;
-(id)initWithClientServiceProvider:(id)arg1 analytics:(id)arg2 performer:(id)arg3 ;
-(id)initWithType:(long long)arg1 clientServiceProvider:(id)arg2 analytics:(id)arg3 performer:(id)arg4 ;
-(void)clientServiceDidChange:(BOOL)arg1 ;
-(void)handleWillBeginUpdateAudioPowerWithProvider:(id)arg1 ;
-(void)handleDidEndUpdateAudioPower;
-(void)_handleWillBeginUpdateAudioPowerWithProvider:(id)arg1 ;
-(void)_handleDidEndUpdateAudioPower;
-(void)_beginUpdateWithFrequency:(long long)arg1 ;
-(void)_createUpdater;
-(void)_destroyUpdater;
-(void)beginUpdateWithFrequency:(long long)arg1 ;
@end

