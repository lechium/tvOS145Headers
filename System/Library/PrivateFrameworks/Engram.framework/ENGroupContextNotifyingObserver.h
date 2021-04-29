/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ENGroupContextObserverMiddleware.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface ENGroupContextNotifyingObserver : NSObject <ENGroupContextObserverMiddleware> {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _onGroupCache;
	/*^block*/id _onGroupCreate;
	/*^block*/id _onGroupUpdate;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id onGroupCreate;                                  //@synthesize onGroupCreate=_onGroupCreate - In the implementation block
@property (nonatomic,copy) id onGroupCache;                                   //@synthesize onGroupCache=_onGroupCache - In the implementation block
@property (nonatomic,copy) id onGroupUpdate;                                  //@synthesize onGroupUpdate=_onGroupUpdate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(id)onGroupCreate;
-(id)onGroupCache;
-(id)onGroupUpdate;
-(void)groupContext:(id)arg1 didCreateGroup:(id)arg2 ;
-(void)groupContext:(id)arg1 didCacheGroup:(id)arg2 ;
-(void)groupContext:(id)arg1 didUpdateGroup:(id)arg2 withNewGroup:(id)arg3 ;
-(void)setOnGroupCache:(id)arg1 ;
-(void)setOnGroupCreate:(id)arg1 ;
-(void)setOnGroupUpdate:(id)arg1 ;
@end

