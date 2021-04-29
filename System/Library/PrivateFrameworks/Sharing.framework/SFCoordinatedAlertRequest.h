/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SFXPCInterface.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface SFCoordinatedAlertRequest : NSObject <NSSecureCoding, SFXPCInterface> {

	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	BOOL _started;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSXPCConnection* _xpcCnx;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	double _timeout;
	long long _type;

}

@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) double timeout;                                          //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) long long type;                                          //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)setType:(long long)arg1 ;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(void)setTimeout:(double)arg1 ;
-(void)start;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_invalidate;
-(id)invalidationHandler;
-(double)timeout;
-(void)_start;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidated;
-(void)_interrupted;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_ensureXPCStarted;
-(void)_timeoutFired;
@end

