/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSError, NSMutableArray;

@interface AKPromise : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _completed;
	id _value;
	NSError* _error;
	NSMutableArray* _callbacks;

}
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)initWithError:(id)arg1 ;
-(id)then:(/*^block*/id)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(void)_startWithBlock:(/*^block*/id)arg1 ;
-(void)_completeWithValue:(id)arg1 error:(id)arg2 ;
-(void)onComplete:(/*^block*/id)arg1 ;
-(id)_chain:(/*^block*/id)arg1 ;
-(id)catch:(/*^block*/id)arg1 ;
@end

