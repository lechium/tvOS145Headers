/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AdCore/ADSingleton.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/ADPersonalizedAds_XPC.h>

@class NSXPCListener, NSString;

@interface ADPersonalizedAdsService : ADSingleton <NSXPCListenerDelegate, ADPersonalizedAds_XPC> {

	BOOL _requestInFlight;
	NSXPCListener* _listener;

}

@property (retain) NSXPCListener * listener;                        //@synthesize listener=_listener - In the implementation block
@property (assign,nonatomic) BOOL requestInFlight;                  //@synthesize requestInFlight=_requestInFlight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)setPersonalizedAds:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)reconcileDataForRecord:(id)arg1 ;
-(void)sendPersonalizedAdsAndReconcileDataForRecord:(id)arg1 ;
-(BOOL)requestInFlight;
-(void)setRequestInFlight:(BOOL)arg1 ;
@end
