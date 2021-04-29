/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TIKeyboardAssertionManaging.h>

@protocol TIKeyboardAssertionManagerDelegate;
@class NSHashTable, NSString;

@interface TIKeyboardAssertionManager : NSObject <TIKeyboardAssertionManaging> {

	BOOL _hasAssertions;
	BOOL _pendingUpdate;
	BOOL _hasBackgroundActivityAssertions;
	id<TIKeyboardAssertionManagerDelegate> _delegate;
	NSHashTable* _assertions;
	long long _backgroundActivityAssertions;

}

@property (assign,nonatomic) BOOL hasAssertions;                                           //@synthesize hasAssertions=_hasAssertions - In the implementation block
@property (assign,nonatomic) BOOL pendingUpdate;                                           //@synthesize pendingUpdate=_pendingUpdate - In the implementation block
@property (nonatomic,readonly) NSHashTable * assertions;                                   //@synthesize assertions=_assertions - In the implementation block
@property (assign,nonatomic) BOOL hasBackgroundActivityAssertions;                         //@synthesize hasBackgroundActivityAssertions=_hasBackgroundActivityAssertions - In the implementation block
@property (assign,nonatomic) long long backgroundActivityAssertions;                       //@synthesize backgroundActivityAssertions=_backgroundActivityAssertions - In the implementation block
@property (assign,nonatomic) id<TIKeyboardAssertionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)singletonInstance;
+(id)sharedAssertionManager;
+(void)setSharedAssertionManager:(id)arg1 ;
-(id)init;
-(id<TIKeyboardAssertionManagerDelegate>)delegate;
-(void)setDelegate:(id<TIKeyboardAssertionManagerDelegate>)arg1 ;
-(NSHashTable *)assertions;
-(BOOL)hasAssertions;
-(void)releaseBackgroundActivityAssertion;
-(void)addAssertionForObject:(id)arg1 ;
-(void)removeAssertionForObject:(id)arg1 ;
-(void)retainBackgroundActivityAssertion;
-(BOOL)hasBackgroundActivityAssertions;
-(void)scheduleUpdate;
-(void)performUpdate;
-(void)performBackgroundActivityUpdate;
-(void)setHasAssertions:(BOOL)arg1 ;
-(BOOL)pendingUpdate;
-(void)setPendingUpdate:(BOOL)arg1 ;
-(void)setHasBackgroundActivityAssertions:(BOOL)arg1 ;
-(long long)backgroundActivityAssertions;
-(void)setBackgroundActivityAssertions:(long long)arg1 ;
@end

