/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol LAServiceManager <NSObject>
@required
-(void)bootstrapSessionServiceType:(id)arg1 clientID:(id)arg2 clientConnection:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)bootstrapSessionServiceType:(id)arg1 clientID:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)shutdownSessionsWithMatchingID:(id)arg1;

@end

