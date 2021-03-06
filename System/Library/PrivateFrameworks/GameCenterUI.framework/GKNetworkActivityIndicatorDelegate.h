/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GKDaemonProxyNetworkActivityIndicatorDelegate.h>

@class NSString;

@interface GKNetworkActivityIndicatorDelegate : NSObject <GKDaemonProxyNetworkActivityIndicatorDelegate> {

	int _networkIndicatorCount;

}

@property (assign,nonatomic) int networkIndicatorCount;              //@synthesize networkIndicatorCount=_networkIndicatorCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginNetworkActivity;
-(void)endNetworkActivity;
-(void)resetNetworkActivity;
-(int)networkIndicatorCount;
-(void)setNetworkIndicatorCount:(int)arg1 ;
@end

