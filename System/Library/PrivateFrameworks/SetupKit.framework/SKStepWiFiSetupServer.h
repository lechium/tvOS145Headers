/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SetupKit.framework/SetupKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SetupKit/SetupKit-Structs.h>
#import <libobjc.A.dylib/CULabelable.h>
#import <libobjc.A.dylib/SKStepable.h>

@protocol OS_dispatch_queue, CUMessaging;
@class NSObject, NSString;

@interface SKStepWiFiSetupServer : NSObject <CULabelable, SKStepable> {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	int _runState;
	LogCategory* _ucat;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _label;
	/*^block*/id _skCompletionHandler;
	id<CUMessaging> _skMessaging;

}

@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id skCompletionHandler;                                    //@synthesize skCompletionHandler=_skCompletionHandler - In the implementation block
@property (nonatomic,retain) id<CUMessaging> skMessaging;                             //@synthesize skMessaging=_skMessaging - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)activate;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidated;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)skCompletionHandler;
-(void)setSkCompletionHandler:(id)arg1 ;
-(id<CUMessaging>)skMessaging;
-(void)setSkMessaging:(id<CUMessaging>)arg1 ;
@end

