/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/RBBundlePropertiesLSProviderDelegate.h>
#import <libobjc.A.dylib/RBBundlePropertiesManaging.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@protocol RBBundlePropertiesManagerDelegate;
@class RBBundlePropertiesLSProvider, RBBundlePropertiesBSXPCProvider, RBBundlePropertiesBackgroundRefreshProvider, RBProcessIndex, NSString;

@interface RBBundlePropertiesManager : NSObject <RBBundlePropertiesLSProviderDelegate, RBBundlePropertiesManaging, RBStateCapturing> {

	RBBundlePropertiesLSProvider* _lsProvider;
	RBBundlePropertiesBSXPCProvider* _xpcProvider;
	RBBundlePropertiesBackgroundRefreshProvider* _bgRefreshProvider;
	RBProcessIndex* _processIndex;
	id<RBBundlePropertiesManagerDelegate> _delegate;
	os_unfair_lock_s _lock;

}

@property (assign,nonatomic,__weak) id<RBBundlePropertiesManagerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
-(NSString *)debugDescription;
-(id)init;
-(id<RBBundlePropertiesManagerDelegate>)delegate;
-(void)setDelegate:(id<RBBundlePropertiesManagerDelegate>)arg1 ;
-(id)captureState;
-(void)removeProcess:(id)arg1 ;
-(void)addProcess:(id)arg1 ;
-(NSString *)stateCaptureTitle;
-(id)propertiesForIdentity:(id)arg1 identifier:(id)arg2 ;
-(void)bundlePropertiesProvider:(id)arg1 didChangePropertiesForProcessIdentities:(id)arg2 ;
@end

