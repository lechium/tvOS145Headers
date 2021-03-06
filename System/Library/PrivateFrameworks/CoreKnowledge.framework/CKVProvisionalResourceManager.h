/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSString, NSObject, NSDate;

@interface CKVProvisionalResourceManager : NSObject {

	NSString* _resourceName;
	NSObject*<OS_dispatch_queue> _activationQueue;
	NSObject*<OS_dispatch_queue> _expirationQueue;
	NSObject*<OS_dispatch_queue> _operationQueue;
	double _expirationInterval;
	BOOL _isActive;
	/*^block*/id _activationBlock;
	/*^block*/id _deactivationBlock;
	long long _operationsInProgress;
	NSDate* _expirationDate;

}

@property (retain) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
-(id)init;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isActive;
-(id)initWithResourceName:(id)arg1 lifespan:(double)arg2 activationBlock:(/*^block*/id)arg3 deactivationBlock:(/*^block*/id)arg4 serializeOperations:(BOOL)arg5 ;
-(long long)deactivateWithError:(id*)arg1 ;
-(long long)activateWithError:(id*)arg1 operationBlock:(/*^block*/id)arg2 ;
-(void)_setExpirationTimer;
@end

