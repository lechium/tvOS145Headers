/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricsKit/MTObject.h>

@protocol MTConfigDelegate;
@class NSDictionary;

@interface MTConfig : MTObject {

	id<MTConfigDelegate> _delegate;
	long long _eventDataTimeout;
	NSDictionary* _debugSource;

}

@property (nonatomic,retain) NSDictionary * debugSource;                        //@synthesize debugSource=_debugSource - In the implementation block
@property (assign,nonatomic,__weak) id<MTConfigDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long eventDataTimeout;                        //@synthesize eventDataTimeout=_eventDataTimeout - In the implementation block
-(id<MTConfigDelegate>)delegate;
-(void)setDelegate:(id<MTConfigDelegate>)arg1 ;
-(id)sources;
-(id)configValueForKeyPath:(id)arg1 sources:(id)arg2 ;
-(id)computeWithConfigSources:(/*^block*/id)arg1 ;
-(long long)eventDataTimeout;
-(NSDictionary *)debugSource;
-(id)injectedSource;
-(BOOL)_isEventDataTimeoutUnset;
-(void)setEventDataTimeout:(long long)arg1 ;
-(BOOL)disabledForSources:(id)arg1 ;
-(id)blacklistedEventsForSources:(id)arg1 ;
-(id)blacklistedFieldsForSources:(id)arg1 ;
-(id)deResFieldsForSources:(id)arg1 ;
-(BOOL)metricsDisabledOrBlacklistedEvent:(id)arg1 sources:(id)arg2 ;
-(void)removeBlacklistedFields:(id)arg1 sources:(id)arg2 ;
-(void)applyDeRes:(id)arg1 sources:(id)arg2 ;
-(id)configValueForKeyPath:(id)arg1 default:(id)arg2 ;
-(void)setDebugSource:(NSDictionary *)arg1 ;
@end

