/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SiriCoreConnectionProviderDelegate <NSObject>
@optional
-(void)connectionProvider:(id)arg1 receivedViabilityChangeNotification:(BOOL)arg2;
-(void)connectionProviderReceivedBetterRouteNotification:(id)arg1;

@required
-(void)connectionProvider:(id)arg1 receivedError:(id)arg2;

@end

