/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TRITaskQueueStateProviding;
@class NSDate, NSString, NSArray;

@interface TRIBaseTask : NSObject {

	NSDate* startTime;
	id<TRITaskQueueStateProviding> _stateProvider;

}

@property (nonatomic,readonly) NSString * taskName; 
@property (nonatomic,readonly) NSArray * tags; 
@property (nonatomic,retain) NSDate * startTime; 
@property (nonatomic,readonly) NSArray * dependencies; 
@property (assign,nonatomic,__weak) id<TRITaskQueueStateProviding> stateProvider;              //@synthesize stateProvider=_stateProvider - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSArray *)dependencies;
-(NSArray *)tags;
-(unsigned long long)requiredCapabilities;
-(NSString *)taskName;
-(void)runEnqueueHandlerUsingContext:(id)arg1 ;
-(void)runDequeueHandlerUsingContext:(id)arg1 ;
-(id<TRITaskQueueStateProviding>)stateProvider;
-(void)setStateProvider:(id<TRITaskQueueStateProviding>)arg1 ;
@end

