/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol RBBundlePropertiesLSProviderDelegate;
@class NSCache, NSString;

@interface RBBundlePropertiesLSProvider : NSObject <LSApplicationWorkspaceObserverProtocol> {

	NSCache* _propertiesByIdentity;
	id<RBBundlePropertiesLSProviderDelegate> _delegate;
	os_unfair_lock_s _lock;

}

@property (assign,nonatomic,__weak) id<RBBundlePropertiesLSProviderDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)debugDescription;
-(id)init;
-(void)dealloc;
-(id<RBBundlePropertiesLSProviderDelegate>)delegate;
-(void)setDelegate:(id<RBBundlePropertiesLSProviderDelegate>)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(id)propertiesForIdentity:(id)arg1 ;
@end

