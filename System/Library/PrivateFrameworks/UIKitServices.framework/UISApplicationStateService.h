/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitServices/UIKitServices-Structs.h>
#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <UIKit/UISApplicationStateXPCServerInterface.h>

@protocol UISApplicationStateServiceDelegate;
@class BSServiceConnectionListener, FBSSerialQueue, NSString;

@interface UISApplicationStateService : NSObject <BSServiceConnectionListenerDelegate, UISApplicationStateXPCServerInterface> {

	BSServiceConnectionListener* _listener;
	FBSSerialQueue* _calloutQueue;
	id<UISApplicationStateServiceDelegate> _delegate;
	struct {
		unsigned delegateDataSourceForApplicationBundleIdentifier : 1;
	}  _delegateFlags;

}

@property (assign,nonatomic,__weak) id<UISApplicationStateServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<UISApplicationStateServiceDelegate>)delegate;
-(void)setDelegate:(id<UISApplicationStateServiceDelegate>)arg1 ;
-(id)initWithCalloutQueue:(id)arg1 ;
-(oneway void)setBadgeValue:(id)arg1 ;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(oneway void)setMinimumBackgroundFetchInterval:(id)arg1 ;
-(oneway void)setUsesBackgroundNetwork:(id)arg1 ;
-(oneway void)setNextWakeIntervalSinceReferenceDate:(id)arg1 ;
-(void)badgeValueWithCompletion:(/*^block*/id)arg1 ;
-(void)usesBackgroundNetworkWithCompletion:(/*^block*/id)arg1 ;
-(void)nextWakeIntervalSinceReferenceDateWithCompletion:(/*^block*/id)arg1 ;
-(id)_operatingBundleIdentifier;
-(BOOL)_isCurrentConnectionAuthorizedForApplicationBundleIdentifier:(id)arg1 description:(id)arg2 ;
-(id)_dataSourceForApplicationBundleIdentifier:(id)arg1 ;
-(BOOL)_isCurrentConnectionAuthorizedForApplicationBundleIdentifier:(id)arg1 description:(id)arg2 legacyEntitlement:(id)arg3 ;
@end

