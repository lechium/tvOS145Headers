/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
@class NSObject;

@interface TVHKNetworkReachabilityCenter : NSObject {

	BOOL _networkReachable;
	unsigned _networkReachabilityFlags;
	NSObject*<OS_dispatch_queue> _serialDispatchQueue;
	NSObject*<OS_dispatch_queue> _serialNotificationDispatchQueue;
	SCNetworkReachabilityRef _networkReachability;

}

@property (getter=isNetworkReachable) BOOL networkReachable;                                            //@synthesize networkReachable=_networkReachable - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialDispatchQueue;                          //@synthesize serialDispatchQueue=_serialDispatchQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialNotificationDispatchQueue;              //@synthesize serialNotificationDispatchQueue=_serialNotificationDispatchQueue - In the implementation block
@property (assign,nonatomic) SCNetworkReachabilityRef networkReachability;                              //@synthesize networkReachability=_networkReachability - In the implementation block
@property (assign,nonatomic) unsigned networkReachabilityFlags;                                         //@synthesize networkReachabilityFlags=_networkReachabilityFlags - In the implementation block
+(id)new;
+(id)sharedCenter;
+(BOOL)_isNetworkReachableWithNetworkReachabilityFlags:(unsigned)arg1 ;
+(id)_logStringWithReachabilityFlags:(unsigned)arg1 ;
-(id)init;
-(void)dealloc;
-(id)_init;
-(BOOL)isNetworkReachable;
-(unsigned)networkReachabilityFlags;
-(unsigned)_currentNetworkReachabilityFlags;
-(void)setNetworkReachable:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialDispatchQueue;
-(void)setSerialDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialNotificationDispatchQueue;
-(void)_postNetworkReachabilityDidChangeNotificationWithValue:(BOOL)arg1 ;
-(void)_updateNetworkReachableWithNetworkReachabilityFlags:(unsigned)arg1 ;
-(SCNetworkReachabilityRef)networkReachability;
-(void)setNetworkReachabilityFlags:(unsigned)arg1 ;
-(void)setSerialNotificationDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setNetworkReachability:(SCNetworkReachabilityRef)arg1 ;
@end

