/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AXUIMessageSenderDelegate <NSObject>
@optional
-(void)messageSender:(id)arg1 willSendXPCMessage:(id)arg2 context:(void*)arg3;
-(void*)messageSender:(id)arg1 extractCustomDataFromXPCReply:(id)arg2 numberOfKeyValuePairsForCustomData:(unsigned long long*)arg3;
-(void)messageSender:(id)arg1 processCustomDataFromXPCReply:(void*)arg2;

@required
-(void)messageSender:(id)arg1 accessXPCConnectionForMessageWithContext:(void*)arg2 usingBlock:(/*^block*/id)arg3;

@end
