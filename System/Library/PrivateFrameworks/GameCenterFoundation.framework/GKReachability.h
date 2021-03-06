/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
@interface GKReachability : NSObject {

	BOOL localWiFiRef;
	SCNetworkReachabilityRef reachabilityRef;

}
+(id)_gkReachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)_gkReachabilityForInternetConnection;
+(id)_gkReachabilityWithHostName:(id)arg1 ;
+(id)_gkReachabilityForLocalWiFi;
+(BOOL)_gkIsOnline;
-(void)dealloc;
-(int)localWiFiStatusForFlags:(unsigned)arg1 ;
-(int)networkStatusForFlags:(unsigned)arg1 ;
-(void)_gkStopNotifier;
-(int)_gkCurrentReachabilityStatus;
-(BOOL)_gkStartNotifier;
-(BOOL)_gkConnectionRequired;
@end

