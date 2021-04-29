/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface ML3SuicidePact : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableSet* _signatures;
	int _notifyToken;

}

@property (nonatomic,readonly) BOOL isSigned; 
+(id)sharedPact;
-(id)init;
-(void)dealloc;
-(void)execute;
-(BOOL)isSigned;
-(void)signForReason:(long long)arg1 ;
-(void)_carryOutSuicidePact;
-(void)secedeForReason:(long long)arg1 ;
-(BOOL)isSignedForReason:(long long)arg1 ;
@end

