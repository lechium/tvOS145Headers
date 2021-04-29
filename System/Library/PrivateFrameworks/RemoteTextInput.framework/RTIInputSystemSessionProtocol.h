/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RTIInputSystemSessionProtocol <NSObject>
@optional
-(oneway void)remoteTextInputSessionWithID:(id)arg1 documentTraitsDidChange:(id)arg2;
-(oneway void)remoteTextInputSessionWithID:(id)arg1 didChangePause:(BOOL)arg2 withReason:(id)arg3;

@required
-(oneway void)beginRemoteTextInputSessionWithID:(id)arg1 documentTraits:(id)arg2 initialDocumentState:(id)arg3;
-(oneway void)remoteTextInputSessionWithID:(id)arg1 documentDidChange:(id)arg2;
-(oneway void)endRemoteTextInputSessionWithID:(id)arg1;

@end

