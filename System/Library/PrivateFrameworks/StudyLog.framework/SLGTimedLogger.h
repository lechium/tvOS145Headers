/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StudyLog/StudyLog-Structs.h>
#import <libobjc.A.dylib/SLGActivatableLogging.h>

@protocol SLGActivatableLogging, OS_dispatch_source;
@class NSObject, NSString;

@interface SLGTimedLogger : NSObject <SLGActivatableLogging> {

	id<SLGActivatableLogging> _logger;
	double _duration;
	NSObject*<OS_dispatch_source> _timer;
	os_unfair_lock_s _lock;

}

@property (nonatomic,copy) id activationHandler; 
@property (nonatomic,copy) id deactivationHandler; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(BOOL)isEnabled;
-(BOOL)isActive;
-(void)setActivationHandler:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(id)activationHandler;
-(id)deactivationHandler;
-(void)setDeactivationHandler:(id)arg1 ;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 ;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 tags:(/*^block*/id)arg3 ;
-(void)logBlock:(/*^block*/id)arg1 domain:(id)arg2 tags:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_startTimer;
-(void)_stopTimer;
-(id)initWithLogger:(id)arg1 duration:(double)arg2 ;
@end

